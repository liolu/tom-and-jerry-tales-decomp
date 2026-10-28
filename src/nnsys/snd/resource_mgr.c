#include "m2c.h"

M2C_UNK SND_LockChannel(s32, M2C_UNK);
extern M2C_UNK sCaptureLock;
M2C_UNK SND_UnlockChannel(s32, M2C_UNK);

s32 NNS_SndLockChannel(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & M2C_FIELD(&sCaptureLock, s32 *, 8)) {
        return 0;
    }
    SND_LockChannel(arg0, 0);
    M2C_FIELD(&sCaptureLock, s32 *, 8) = (s32) (M2C_FIELD(&sCaptureLock, s32 *, 8) | arg0);
    return 1;
}

void NNS_SndUnlockChannel(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    SND_UnlockChannel(arg0, 0);
    M2C_FIELD(&sCaptureLock, s32 *, 8) = (s32) (M2C_FIELD(&sCaptureLock, s32 *, 8) & ~arg0);
}
