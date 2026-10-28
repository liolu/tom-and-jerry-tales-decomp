#include "m2c.h"

M2C_UNK SND_StopTimer(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02052af0(M2C_UNK);
M2C_UNK SND_WaitForCommandProc(s32);
s32 SND_GetCurrentCommandTag();
M2C_UNK NNSi_SndCaptureBeginSleep();

void BeginSleep(void) {
    s32 temp_r4;

    NNSi_SndCaptureBeginSleep();
    SND_StopTimer(0, 0, 0, 0);
    temp_r4 = SND_GetCurrentCommandTag();
    func_02052af0(1);
    SND_WaitForCommandProc(temp_r4);
}
