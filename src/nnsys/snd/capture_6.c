#include "m2c.h"

typedef struct {
    u8 p0[0xC];
    s32 a;
    s32 b;
    s32 c;
    u8 p1[4];
    s32 d;
    u8 p2[4];
    s32 e;
    s32 f;
    s32 g;
} G;
typedef struct {
    u8 p[0x48];
    s32 f;
} H;
void DC_FlushRange(s32, s32);
void MIi_CpuClear32(s32, s32, s32);
void SND_StartTimer(s32, s32, s32, s32);
extern H sIsThreadCreated;
extern G sCapParam;

void NNSi_SndCaptureEndSleep(void) {
    s32 var_r2;
    G *g = &sCapParam;
    if (sIsThreadCreated.f == 0) {
        return;
    }
    g->d = 0;
    MIi_CpuClear32(0, g->a, g->c);
    MIi_CpuClear32(0, g->b, g->c);
    DC_FlushRange(g->a, g->c);
    DC_FlushRange(g->b, g->c);
    if (g->g >= 0) {
        var_r2 = 1 << g->g;
    } else {
        var_r2 = 0;
    }
    SND_StartTimer(g->e, g->f, var_r2, 0);
}
