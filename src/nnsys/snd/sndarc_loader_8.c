#include "m2c.h"

s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);
s32 NNS_SndArcSetCurrent(s32);
s32 NNS_SndArcGetFileAddress(M2C_UNK);
M2C_UNK NNS_SndArcSetFileAddress(M2C_UNK, M2C_UNK);

void DisposeCallback(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = OS_DisableInterrupts();
    temp_r4 = NNS_SndArcSetCurrent(arg1);
    if (arg0 == NNS_SndArcGetFileAddress(arg2)) {
        NNS_SndArcSetFileAddress(arg2, 0);
    }
    NNS_SndArcSetCurrent(temp_r4);
    OS_RestoreInterrupts(temp_r5);
}
