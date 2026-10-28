#include "m2c.h"

M2C_UNK SND_InvalidateBankData(s32, s32);
M2C_UNK SND_DestroyBank(s32);
M2C_UNK DisposeCallback(s32, M2C_UNK, M2C_UNK);
M2C_UNK SND_InvalidateWaveData(s32, s32);
M2C_UNK SND_DestroyWaveArc(s32);

void BankDisposeCallback(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    DisposeCallback(arg0, arg2, arg3);
    SND_InvalidateBankData(arg0, arg0 + arg1);
    SND_DestroyBank(arg0);
}

void WaveArcDisposeCallback(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    DisposeCallback(arg0, arg2, arg3);
    SND_InvalidateWaveData(arg0, arg0 + arg1);
    SND_DestroyWaveArc(arg0);
}
