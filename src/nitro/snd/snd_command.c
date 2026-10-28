/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
#include "m2c.h"

s32 SND_RecvCommandReply(M2C_UNK);
M2C_UNK func_02052af0(M2C_UNK);
s32 SND_CountWaitingCommand();
M2C_UNK RequestCommandProc();
s32 AllocCommand();
s32 IsCommandAvailable();
extern int OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(int state);
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr sFreeList;

s32 SND_AllocCommand(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (IsCommandAvailable() == 0) {
        return 0;
    }
    temp_r0_3 = AllocCommand();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (SND_CountWaitingCommand() > 0) {
        do {

        } while (SND_RecvCommandReply(0) != 0);
        temp_r0_2 = AllocCommand();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02052af0(1);
block_12:
    RequestCommandProc();
    do {
        SND_RecvCommandReply(1);
        temp_r0 = AllocCommand();
    } while (temp_r0 == 0);
    return temp_r0;
}

/* SND_PushCommand from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/SND_PushCommand.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
void SND_PushCommand(SNDCommand *command) {
    SNDCommand *tail;
    int state;

    state = OS_DisableInterrupts();
    tail  = sFreeList.reservedTail;

    if (tail == 0) {
        sFreeList.reservedHead = command;
        sFreeList.reservedTail = command;
    } else {
        tail->next             = command;
        sFreeList.reservedTail = command;
    }
    command->next = 0;
    OS_RestoreInterrupts(state);
}
