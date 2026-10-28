/* compiler: 2.0/sp1p5  */
/* CARD_IdentifyBackup from projets/heroes-of-mana/src/auto/CARD_IdentifyBackup.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef struct UnkCardCommon {
    void *unk_000;
    u32 unk_004;
    u32 unk_008;
    u32 unk_00c;
    u32 unk_010[2];
    u32 unk_018;
    u32 unk_01c;
    u32 unk_020;
    u32 unk_024;
    u32 unk_028;
    u32 unk_02c[3];
    void (*unk_038)(void *);
    void *unk_03c;
    u32 unk_040;
    u32 unk_044[0x30];
    void *unk_104;
    u32 unk_108;
    u32 unk_10c[2];
    volatile u32 unk_114;
    u32 unk_118[2];
    u8 unk_120[0x100];
} UnkCardCommon;
typedef struct UnkThreadQueue {
    void *head;
    void *tail;
} UnkThreadQueue;
extern UnkCardCommon cardi_common;
extern UnkThreadQueue OSi_ThreadInfo;
extern void OSi_ReferSymbol(void *);
extern void OS_Terminate(void);
extern s32 CARD_CheckEnabled(void);
extern s32 OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(s32);
extern void OS_SleepThread(void *);
extern void OS_WakeupThread(void *);
extern void OS_WakeupThreadDirect(void *);
extern s32 func_02057618(s32);
extern s32 CARDi_Request(void *, s32, s32);
s32 func_02057b54(s32 arg0) {
    UnkCardCommon *const p = &cardi_common;
    s32 irq1;
    s32 irq2;
    void *cbarg;
    void (*cb)(void *);

    OSi_ReferSymbol((void *) 0x2000B80);
    if (arg0 == 0) {
        OS_Terminate();
    }
    CARD_CheckEnabled();
    irq1 = OS_DisableInterrupts();
    while (p->unk_114 & 4) {
        OS_SleepThread(&p->unk_10c);
    }
    p->unk_114 |= 4;
    p->unk_038 = 0;
    p->unk_03c = 0;
    OS_RestoreInterrupts(irq1);
    func_02057618(arg0);
    cardi_common.unk_104 = OSi_ThreadInfo.tail;
    CARDi_Request(p, 2, 1);
    (*(u32 *) ((s8 *) ((*(void **) ((s8 *) (p) + (0)))) + (0xC)))  = 0;
    (*(u32 *) ((s8 *) ((*(void **) ((s8 *) (p) + (0)))) + (0x10))) = &p->unk_120;
    (*(u32 *) ((s8 *) ((*(void **) ((s8 *) (p) + (0)))) + (0x14))) = 1;
    CARDi_Request(p, 6, 1);
    cb    = p->unk_038;
    cbarg = p->unk_03c;
    irq2  = OS_DisableInterrupts();
    p->unk_114 &= ~0x4C;
    OS_WakeupThread(&p->unk_10c);
    if (p->unk_114 & 0x10) {
        OS_WakeupThreadDirect(&p->unk_044);
    }
    OS_RestoreInterrupts(irq2);
    if (cb != 0) {
        cb(cbarg);
    }
    return (*(u32 *) ((s8 *) ((*(void **) ((s8 *) (p) + (0)))) + (0))) == 0;
}
