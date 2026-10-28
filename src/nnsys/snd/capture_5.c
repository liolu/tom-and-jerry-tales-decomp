#include "m2c.h"

void SND_StopTimer(s32, s32, s32, s32);
void func_02052af0(s32);
void SND_WaitForCommandProc(s32);
s32 SND_GetCurrentCommandTag(void);
extern s32 sIsThreadCreated[];
extern s32 sCapParam[];

void NNSi_SndCaptureBeginSleep(void) {
    s32 t;
    s32 r2;
    s32 *p = sCapParam;
    if (sIsThreadCreated[18] == 0) {
        return;
    }
    if (p[11] >= 0) {
        r2 = 1 << p[11];
    } else {
        r2 = 0;
    }
    SND_StopTimer(p[9], p[10], r2, 0);
    t = SND_GetCurrentCommandTag();
    func_02052af0(1);
    SND_WaitForCommandProc(t);
}
