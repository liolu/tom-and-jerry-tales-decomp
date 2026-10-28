#include "m2c.h"

typedef struct {
    s32 f0, f4;
    u8 p0[0x20 - 8];
    s32 f20, f24, f28, f2c;
} G;
typedef struct {
    u8 p[0x48];
    s32 f48;
} H;
extern H sIsThreadCreated;
extern G sCapParam;
extern u8 sMesgQ[];
extern void SND_StopTimer(u32, u32, u32, u32);
extern s32 SND_GetCurrentCommandTag(void);
extern s32 func_02052af0(s32);
extern void SND_WaitForCommandProc(s32);
extern int OS_ReceiveMessage(void *, void *, int);
extern void NNS_SndUnlockCapture(s32);
extern void NNS_SndUnlockChannel(s32);
extern void NNS_SndFreeAlarm(s32);
extern void SND_SetOutputSelector(int, int, int, int);

void NNSi_SndCaptureStop(void) {
    G *g = &sCapParam;
    s32 en;
    s32 r;
    if (sIsThreadCreated.f48 == 0) {
        return;
    }
    en = g->f2c >= 0;
    SND_StopTimer(g->f24, g->f28, en ? 1 << g->f2c : 0, 0);
    if (en) {
        r = SND_GetCurrentCommandTag();
        func_02052af0(1);
        SND_WaitForCommandProc(r);
        while (OS_ReceiveMessage(sMesgQ, 0, 0) != 0) {
        }
    }
    if (g->f28 != 0) {
        NNS_SndUnlockCapture(g->f28);
    }
    if (g->f20 != 0) {
        NNS_SndUnlockChannel(g->f20);
    }
    if (en) {
        NNS_SndFreeAlarm(g->f2c);
    }
    if (g->f4 == 1) {
        SND_SetOutputSelector(0, 0, 0, 0);
    }
    g->f0 = 0;
}
