/* compiler: 2.0/sp1p5 -O4,s */
/* SND_FlushCommand from projets/heroes-of-mana/src/auto/SND_FlushCommand.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
extern s32 func_020517f8(void);
extern void func_0205180c(s32);
extern void func_02052920(s32);
extern void func_02050b24(void *, u32);
extern s32 func_02053674(s32, s32, s32);
extern void func_0205185c(s32);
extern void func_02052e50(void);
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
extern SndFreeList data_021b0800;
extern u8 data_021b0ae0[];
extern s32 data_021b0824[];
s32 func_02052af0(s32 arg0) {
    s32 saved;
    u32 i;
    u32 val;

    saved = func_020517f8();
    if (data_021b0800.f8 == 0) {
        func_0205180c(saved);
        return 1;
    }
    if (data_021b0800.f1C >= 8) {
        if (!(arg0 & 1)) {
            func_0205180c(saved);
            return 0;
        }
        do {
            func_02052920(1);
        } while (data_021b0800.f1C >= 8);
    }
    func_02050b24(data_021b0ae0, 0x1800);
    if (func_02053674(7, data_021b0800.f8, 0) < 0) {
        if (!(arg0 & 1)) {
            func_0205180c(saved);
            return 0;
        }
        while (func_02053674(7, data_021b0800.f8, 0) < 0) {
            func_0205180c(saved);
            func_0205185c(0x64);
            saved = func_020517f8();
        }
    }
    if (arg0 & 2) {
        func_02052e50();
    }
    data_021b0824[data_021b0800.f18] = data_021b0800.f8;
    data_021b0800.f18 += 1;
    if (data_021b0800.f18 > 8) {
        data_021b0800.f18 = 0;
    }
    data_021b0800.f8 = 0;
    data_021b0800.fC = 0;
    data_021b0800.f1C++;
    data_021b0800.f20++;
    func_0205180c(saved);
    return 1;
}
