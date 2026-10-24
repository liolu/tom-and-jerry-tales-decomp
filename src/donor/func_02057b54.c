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
extern UnkCardCommon data_021b25a0;
extern UnkThreadQueue data_021b0484;
extern void func_02000b58(void *);
extern void func_02051a48(void);
extern s32 func_0205751c(void);
extern s32 func_020517f8(void);
extern void func_0205180c(s32);
extern void func_020502b8(void *);
extern void func_02050308(void *);
extern void func_02050370(void *);
extern s32 func_02057618(s32);
extern s32 func_020583d4(void *, s32, s32);
s32 func_02057b54(s32 arg0) {
    UnkCardCommon *const p = &data_021b25a0;
    s32 irq1;
    s32 irq2;
    void *cbarg;
    void (*cb)(void *);

    func_02000b58((void *) 0x2000B80);
    if (arg0 == 0) {
        func_02051a48();
    }
    func_0205751c();
    irq1 = func_020517f8();
    while (p->unk_114 & 4) {
        func_020502b8(&p->unk_10c);
    }
    p->unk_114 |= 4;
    p->unk_038 = 0;
    p->unk_03c = 0;
    func_0205180c(irq1);
    func_02057618(arg0);
    data_021b25a0.unk_104 = data_021b0484.tail;
    func_020583d4(p, 2, 1);
    (*(u32 *) ((s8 *) ((*(void **) ((s8 *) (p) + (0)))) + (0xC)))  = 0;
    (*(u32 *) ((s8 *) ((*(void **) ((s8 *) (p) + (0)))) + (0x10))) = &p->unk_120;
    (*(u32 *) ((s8 *) ((*(void **) ((s8 *) (p) + (0)))) + (0x14))) = 1;
    func_020583d4(p, 6, 1);
    cb    = p->unk_038;
    cbarg = p->unk_03c;
    irq2  = func_020517f8();
    p->unk_114 &= ~0x4C;
    func_02050308(&p->unk_10c);
    if (p->unk_114 & 0x10) {
        func_02050370(&p->unk_044);
    }
    func_0205180c(irq2);
    if (cb != 0) {
        cb(cbarg);
    }
    return (*(u32 *) ((s8 *) ((*(void **) ((s8 *) (p) + (0)))) + (0))) == 0;
}
