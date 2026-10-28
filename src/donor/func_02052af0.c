/* compiler: 2.0/sp1p5 -O4,s */
/* SND_FlushCommand from projets/heroes-of-mana/src/auto/SND_FlushCommand.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
extern s32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(s32);
extern void SND_RecvCommandReply(s32);
extern void DC_FlushRange(void *, u32);
extern s32 func_02053674(s32, s32, s32);
extern void OS_SpinWait(s32);
extern void RequestCommandProc(void);
typedef struct {
    s32 head;
    s32 f4;
    s32 f8;
    s32 fC;
    s32 f10;
    s32 f14;
    s32 f18;
    s32 f1C;
    s32 f20;
} SndFreeList;
extern SndFreeList sFreeList;
extern u8 sCommandArray[];
extern s32 sWaitingCommandListQueue[];
s32 func_02052af0(s32 arg0) {
    s32 saved;
    u32 i;
    u32 val;

    saved = OS_DisableInterrupts();
    if (sFreeList.f8 == 0) {
        OS_RestoreInterrupts(saved);
        return 1;
    }
    if (sFreeList.f1C >= 8) {
        if (!(arg0 & 1)) {
            OS_RestoreInterrupts(saved);
            return 0;
        }
        do {
            SND_RecvCommandReply(1);
        } while (sFreeList.f1C >= 8);
    }
    DC_FlushRange(sCommandArray, 0x1800);
    if (func_02053674(7, sFreeList.f8, 0) < 0) {
        if (!(arg0 & 1)) {
            OS_RestoreInterrupts(saved);
            return 0;
        }
        while (func_02053674(7, sFreeList.f8, 0) < 0) {
            OS_RestoreInterrupts(saved);
            OS_SpinWait(0x64);
            saved = OS_DisableInterrupts();
        }
    }
    if (arg0 & 2) {
        RequestCommandProc();
    }
    sWaitingCommandListQueue[sFreeList.f18] = sFreeList.f8;
    sFreeList.f18 += 1;
    if (sFreeList.f18 > 8) {
        sFreeList.f18 = 0;
    }
    sFreeList.f8 = 0;
    sFreeList.fC = 0;
    sFreeList.f1C++;
    sFreeList.f20++;
    OS_RestoreInterrupts(saved);
    return 1;
}
