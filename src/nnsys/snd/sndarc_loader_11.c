#include "m2c.h"

M2C_UNK SND_DestroyWaveArc(M2C_UNK);
M2C_UNK DisposeCallback(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK SND_InvalidateWaveData(s32, s32);
M2C_UNK SND_SetWaveDataAddress(M2C_UNK, M2C_UNK, M2C_UNK);
s32 SND_GetWaveDataAddress(M2C_UNK, M2C_UNK);

void WaveArcTableDisposeCallback(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    DisposeCallback(arg0, arg2, arg3);
    SND_DestroyWaveArc(arg0);
}

void SingleWaveDisposeCallback(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == SND_GetWaveDataAddress(arg2, arg3)) {
        SND_SetWaveDataAddress(arg2, arg3, 0);
    }
    SND_InvalidateWaveData(arg0, arg0 + arg1);
}
