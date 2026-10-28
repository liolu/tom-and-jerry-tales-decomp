#include "m2c.h"

extern M2C_UNK sIsThreadCreated;

void NNSi_SndCaptureInit(void) {
    M2C_FIELD(&sIsThreadCreated, s32 *, 0)    = 0;
    M2C_FIELD(&sIsThreadCreated, s32 *, 0x48) = 0;
}
