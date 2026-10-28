#include "m2c.h"

typedef struct {
    u8 pad[0xC0];
    u8 c0;
    u8 pad1;
    u8 c2;
    u8 pad2;
    u16 c4;
    u16 c6;
    u8 pad3[0x110 - 0xC8];
    u32 g0 : 1;
    u32 g1 : 1;
    u32 g2 : 1;
    u32 g3 : 1;
    u32 g4 : 1;
    u32 g5 : 1;
    u32 g6 : 1;
    u32 g7 : 25;
    s32 f114;
    s32 f118;
    s32 f11c;
    u8 pad4[0x124 - 0x120];
    u8 c124;
    u8 pad5;
    u8 s126[6];
    s32 f12c;
    s32 f130;
    s32 f134;
    s32 f138;
    s32 f13c;
    s32 f140;
    s32 f144;
    s32 pad6[(0x154 - 0x148) / 4];
    s32 f154;
    s32 f158;
    u32 f15c;
    s32 (*f160)(void *, s32);
    void (*f164)(void *);
} X;
typedef struct {
    u32 f0;
    u8 b4;
    u8 p5;
    u8 p6;
    u8 b7;
} A;
extern void *func_02049b88(s32, s32, s32);
extern void FreePlayer(void *);
extern s32 AllocChannel(void *, s32, void *);
extern void FreeChannel(void *);
extern void func_0204ad24(void *, s32);
extern void NNSi_SndFaderInit(void *);
extern void NNSi_SndFaderSet(void *, s32, s32);
extern s32 NNS_SndStrmSetup(void *, s32, s32, u32, s32, s32, void *, void *);
extern void NNS_SndStrmSetChannelPan(void *, s32, s32);
extern u8 StrmCallback[];

s32 PrepareStrm(s32 a0, A *a1, s32 a2, s32 a3, s32 a4, s32 a5, s32 a6, s32 a7, s32 a8, s32 a9) {
    X *x;
    s32 r5;
    u32 t;
    s32 r6;
    x = func_02049b88(a0, a2, a3);
    if (x == 0) {
        return 0;
    }
    func_0204ad24(x, a1->f0);
    if (x->f160(x, a1->f0) == 0) {
        FreePlayer(x);
        return 0;
    }
    t       = (u32) (x->c4 * a5) / 1000;
    x->f15c = t;
    if (t != 0 && x->c0 == 2) {
        x->g4 = 1;
    } else {
        x->g4 = 0;
    }
    x->f114 = 4;
    x->g5   = 0;
    x->g1   = 0;
    x->f118 = 0;
    x->g2   = 0;
    x->g3   = 0;
    x->f11c = 0;
    x->f134 = a6;
    x->f138 = a7;
    x->f13c = a8;
    x->f140 = a9;
    x->f144 = a4;
    x->f158 = 0;
    x->f154 = a1->b4;
    NNSi_SndFaderInit((u8 *) x + 0xE8);
    NNSi_SndFaderSet((u8 *) x + 0xE8, 0x7F00, 1);
    switch (x->c0) {
        case 1:
        case 2:
            r5 = 1;
            break;
        case 0:
            r5 = 0;
            break;
    }
    r6 = x->c2;
    if (a1->b7 & 1) {
        r6 = 2;
    }
    if (r6 > x->c124) {
        r6 = x->c124;
    }
    x->g6 = (r6 == 1) ? 1 : 0;
    if (AllocChannel(x, r6, x->s126) == 0) {
        x->f164(x);
        FreePlayer(x);
        return 0;
    }
    if (NNS_SndStrmSetup(x, r5, x->f12c, (u32) (x->f130 * r6) / x->c124, x->c6, 4, StrmCallback, x) == 0) {
        FreeChannel(x);
        x->f164(x);
        FreePlayer(x);
        return 0;
    }
    if (r6 == 2) {
        NNS_SndStrmSetChannelPan(x, 0, 0);
        NNS_SndStrmSetChannelPan(x, 1, 0x7F);
    }
    return 1;
}
