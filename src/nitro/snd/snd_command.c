/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* NitroSDK snd_command.c, the whole file: from https://github.com/GoldieLeGenie/DQIV-DECOMP
 * libs/NitroSDK/src/snd/snd_command.c, renamed to this game's symbols; SND_FlushCommand (func_02052af0) is the
 * older SDK version this game has (no wait for a free slot after a failed send). The file statics and their order
 * give the .bss layout and let -ipa file schedule the loads like the original. */
#include "m2c.h"

#define ATTRIBUTE_ALIGN(n) __attribute__((aligned(n)))

typedef s32 BOOL;
#define TRUE 1
#define FALSE 0
#ifndef NULL
    #define NULL 0
#endif
typedef volatile u16 vu16;
typedef volatile s16 vs16;
typedef volatile u32 vu32;

typedef struct SNDCommand {
    struct SNDCommand *next;
    s32 id;
    u32 arg[4];
} SNDCommand;

typedef struct SNDPlayerWork {
    s16 variable[16];
    u32 tickCounter;
} SNDPlayerWork;

typedef struct SNDSharedWork {
    vu32 finishCommandTag;
    vu32 playerStatus;
    vu16 channelStatus;
    vu16 captureStatus;
    vu32 unk_0c[5];
    SNDPlayerWork player[16];
    vs16 globalVariable[16];
} SNDSharedWork;

SNDCommand *SND_AllocCommand(u32 flags);
void SND_PushCommand(SNDCommand *cmd);
BOOL func_02052af0(u32 flags);
SNDCommand *SND_RecvCommandReply(u32 flags);
BOOL SND_IsFinishedCommandTag(u32 tag);
s32 SND_CountFreeCommand(void);
s32 SND_CountReservedCommand(void);
s32 SND_CountWaitingCommand(void);
static void PxiFifoCallback(u32 tag, u32 data, BOOL err);
static void InitPXI(void);
static void RequestCommandProc(void);
static SNDCommand *AllocCommand(void);
static BOOL IsCommandAvailable(void);

u32 OS_DisableInterrupts(void);
u32 OS_RestoreInterrupts(u32 enabled);
void OS_SpinWait(u32 cycles);
BOOL OS_IsRunOnEmulator(void);
void DC_FlushRange(const void *addr, u32 size);
void func_02053604(s32 fifoID, void (*callback)(u32 tag, u32 data, BOOL err));
BOOL func_02053650(s32 fifoID, s32 proc);
s32 func_02053674(s32 fifoID, u32 data, BOOL err);
u32 SNDi_GetFinishedCommandTag(void);
void SNDi_InitSharedWork(SNDSharedWork *work);
void SNDi_CallAlarmHandler(s32 data);

/* Command manager state: separate file statics (each one gets its own alias class, which lets the
   scheduler move the command-table load past the recvIndex store). The definition order gives the
   .bss layout under -ipa file. */
static u32 sFinishedTag; /* finished tag */
static u32 sCurrentTag; /* current tag */
static SNDCommand *sFreeListEnd; /* free list end */
static SNDCommand *sReserveList; /* reserve list */
static SNDCommand *sFreeList; /* free list */
static SNDCommand *sReserveListEnd; /* reserve list end */
static s32 sRecvIndex; /* receive index */
static s32 sSendIndex; /* send index */
static s32 sCount; /* send count */
static SNDCommand *sWaitingCommandListQueue[9];
static SNDSharedWork sSharedWork ATTRIBUTE_ALIGN(32);
static SNDCommand sCommandArray[256] ATTRIBUTE_ALIGN(32);
extern SNDSharedWork *SNDi_SharedWork;

void SND_CommandInit(void) {
    s32 i;

    InitPXI();
    sFreeList = sCommandArray;
    for (i = 0; i < 255; i++) {
        sCommandArray[i].next = &sCommandArray[i + 1];
    }
    sCommandArray[255].next = NULL;
    sFreeListEnd            = &sCommandArray[255];
    sReserveList            = NULL;
    sReserveListEnd         = NULL;
    sCount                  = 0;
    sRecvIndex              = 0;
    sSendIndex              = 0;
    sCurrentTag             = 1;
    sFinishedTag            = 0;
    SNDi_SharedWork         = &sSharedWork;
    SNDi_InitSharedWork(&sSharedWork);

    {
        SNDCommand *cmd = SND_AllocCommand(1);
        if (cmd == NULL) {
            return;
        }
        cmd->id     = 29;
        cmd->arg[0] = (u32) SNDi_SharedWork;
        SND_PushCommand(cmd);
        func_02052af0(1);
    }
}

SNDCommand *SND_RecvCommandReply(u32 flags) {
    u32 enabled = OS_DisableInterrupts();
    SNDCommand *head;
    SNDCommand *tail;

    if (flags & 1) {
        while (sFinishedTag == SNDi_GetFinishedCommandTag()) {
            OS_RestoreInterrupts(enabled);
            OS_SpinWait(100);
            enabled = OS_DisableInterrupts();
        }
    } else if (sFinishedTag == SNDi_GetFinishedCommandTag()) {
        OS_RestoreInterrupts(enabled);
        return NULL;
    }

    head = sWaitingCommandListQueue[sRecvIndex];
    sRecvIndex++;
    if (sRecvIndex > 8) {
        sRecvIndex = 0;
    }

    tail = head;
    while (tail->next != NULL) {
        tail = tail->next;
    }

    if (sFreeListEnd != NULL) {
        sFreeListEnd->next = head;
    } else {
        sFreeList = head;
    }
    sFreeListEnd = tail;
    sCount--;
    sFinishedTag++;

    OS_RestoreInterrupts(enabled);
    return head;
}

SNDCommand *SND_AllocCommand(u32 flags) {
    SNDCommand *cmd;

    if (!IsCommandAvailable()) {
        return NULL;
    }
    cmd = AllocCommand();
    if (cmd != NULL) {
        return cmd;
    }
    if (!(flags & 1)) {
        return NULL;
    }

    if (SND_CountWaitingCommand() > 0) {
        while (SND_RecvCommandReply(0) != NULL) {
        }
        cmd = AllocCommand();
        if (cmd != NULL) {
            return cmd;
        }
    } else {
        func_02052af0(1);
    }

    RequestCommandProc();
    do {
        SND_RecvCommandReply(1);
        cmd = AllocCommand();
    } while (cmd == NULL);
    return cmd;
}

void SND_PushCommand(SNDCommand *cmd) {
    u32 enabled = OS_DisableInterrupts();

    if (sReserveListEnd == NULL) {
        sReserveList    = cmd;
        sReserveListEnd = cmd;
    } else {
        sReserveListEnd->next = cmd;
        sReserveListEnd       = cmd;
    }
    cmd->next = NULL;

    OS_RestoreInterrupts(enabled);
}

BOOL func_02052af0(u32 flags) {
    u32 enabled = OS_DisableInterrupts();

    if (sReserveList == NULL) {
        OS_RestoreInterrupts(enabled);
        return TRUE;
    }
    if (sCount >= 8) {
        if (!(flags & 1)) {
            OS_RestoreInterrupts(enabled);
            return FALSE;
        }
        do {
            SND_RecvCommandReply(1);
        } while (sCount >= 8);
    }
    DC_FlushRange(sCommandArray, sizeof(sCommandArray));
    if (func_02053674(7, (u32) sReserveList, FALSE) < 0) {
        if (!(flags & 1)) {
            OS_RestoreInterrupts(enabled);
            return FALSE;
        }
        while (func_02053674(7, (u32) sReserveList, FALSE) < 0) {
            OS_RestoreInterrupts(enabled);
            OS_SpinWait(100);
            enabled = OS_DisableInterrupts();
        }
    }
    if (flags & 2) {
        RequestCommandProc();
    }
    sWaitingCommandListQueue[sSendIndex] = sReserveList;
    sSendIndex++;
    if (sSendIndex > 8) {
        sSendIndex = 0;
    }
    sReserveList    = NULL;
    sReserveListEnd = NULL;
    sCount++;
    sCurrentTag++;
    OS_RestoreInterrupts(enabled);
    return TRUE;
}

void SND_WaitForCommandProc(u32 tag) {
    if (SND_IsFinishedCommandTag(tag)) {
        return;
    }
    while (SND_RecvCommandReply(0) != NULL) {
    }
    if (SND_IsFinishedCommandTag(tag)) {
        return;
    }
    RequestCommandProc();
    if (SND_IsFinishedCommandTag(tag)) {
        return;
    }
    do {
        SND_RecvCommandReply(1);
    } while (!SND_IsFinishedCommandTag(tag));
}

u32 SND_GetCurrentCommandTag(void) {
    u32 tag;
    u32 enabled = OS_DisableInterrupts();

    if (sReserveList == NULL) {
        tag = sFinishedTag;
    } else {
        tag = sCurrentTag;
    }
    OS_RestoreInterrupts(enabled);
    return tag;
}

BOOL SND_IsFinishedCommandTag(u32 tag) {
    BOOL result;
    u32 enabled = OS_DisableInterrupts();

    if (tag > sFinishedTag) {
        if (tag - sFinishedTag < 0x80000000) {
            result = FALSE;
        } else {
            result = TRUE;
        }
    } else {
        if (sFinishedTag - tag < 0x80000000) {
            result = TRUE;
        } else {
            result = FALSE;
        }
    }
    OS_RestoreInterrupts(enabled);
    return result;
}

s32 SND_CountFreeCommand(void) {
    u32 enabled = OS_DisableInterrupts();
    s32 count   = 0;
    SNDCommand *cmd;

    for (cmd = sFreeList; cmd != NULL; cmd = cmd->next) {
        count++;
    }
    OS_RestoreInterrupts(enabled);
    return count;
}

s32 SND_CountReservedCommand(void) {
    u32 enabled = OS_DisableInterrupts();
    s32 count   = 0;
    SNDCommand *cmd;

    for (cmd = sReserveList; cmd != NULL; cmd = cmd->next) {
        count++;
    }
    OS_RestoreInterrupts(enabled);
    return count;
}

s32 SND_CountWaitingCommand(void) {
    s32 freeCount    = SND_CountFreeCommand();
    s32 reserveCount = SND_CountReservedCommand();
    return 256 - freeCount - reserveCount;
}

static void PxiFifoCallback(u32 tag, u32 data, BOOL err) {
    u32 enabled = OS_DisableInterrupts();
    SNDi_CallAlarmHandler(data);
    OS_RestoreInterrupts(enabled);
}

static void InitPXI(void) {
    func_02053604(7, PxiFifoCallback);
    if (!IsCommandAvailable()) {
        return;
    }
    while (!func_02053650(7, 1)) {
        OS_SpinWait(100);
    }
}

static void RequestCommandProc(void) {
    while (func_02053674(7, 0, FALSE) < 0) {
    }
}

static SNDCommand *AllocCommand(void) {
    SNDCommand *cmd;
    u32 enabled = OS_DisableInterrupts();

    cmd = sFreeList;
    if (cmd == NULL) {
        OS_RestoreInterrupts(enabled);
        return NULL;
    }
    sFreeList = cmd->next;
    if (sFreeList == NULL) {
        sFreeListEnd = NULL;
    }
    OS_RestoreInterrupts(enabled);
    return cmd;
}

static BOOL IsCommandAvailable(void) {
    u32 enabled;
    u32 result;

    if (!OS_IsRunOnEmulator()) {
        return TRUE;
    }
    enabled              = OS_DisableInterrupts();
    *(vu32 *) 0x04fff200 = 0x10;
    result               = *(vu32 *) 0x04fff200;
    OS_RestoreInterrupts(enabled);
    return result ? TRUE : FALSE;
}
