#include "m2c.h"

extern u8 sIsThreadCreated[];
extern u8 sCapParam[];
void NNSi_SndCaptureStop(void);
s32 NNSi_SndFaderGet(void *);
void NNSi_SndFaderUpdate(void *);
s32 NNSi_SndFaderIsFinished(void *);
void SND_SetChannelVolume(s32, s32, s32);

void NNSi_SndCaptureMain(void) {
    u8 *b = sCapParam;
    s32 t;
    if (*(s32 *) (sIsThreadCreated + 0x48) == 0) {
        return;
    }
    if (*(s32 *) (b + 4) != 0) {
        return;
    }
    NNSi_SndFaderUpdate(b + 0x3c);
    if (*(s32 *) (b + 0x4c) != 0 && NNSi_SndFaderIsFinished(b + 0x3c) != 0) {
        NNSi_SndCaptureStop();
        return;
    }
    t = NNSi_SndFaderGet(b + 0x3c) >> 8;
    if (t == *(s32 *) (b + 0x50)) {
        return;
    }
    SND_SetChannelVolume(*(s32 *) (b + 0x24), t, 0);
    *(s32 *) (b + 0x50) = t;
}
