#include "m2c.h"

extern M2C_UNK sCaptureLock;

void NNS_SndFreeAlarm(s32 arg0) {
    M2C_FIELD(&sCaptureLock, s32 *, 4) = (s32) (M2C_FIELD(&sCaptureLock, s32 *, 4) & ~(1 << arg0));
}

void NNSi_SndInitResourceMgr(void) {
    M2C_FIELD(&sCaptureLock, s32 *, 8) = 0;
    M2C_FIELD(&sCaptureLock, s32 *, 0) = 0;
    M2C_FIELD(&sCaptureLock, s32 *, 4) = 0;
}
