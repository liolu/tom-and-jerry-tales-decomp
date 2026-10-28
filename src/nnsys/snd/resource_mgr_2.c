#include "m2c.h"

extern s32 sCaptureLock;

void NNS_SndUnlockCapture(s32 arg0) {
    sCaptureLock &= ~arg0;
}
