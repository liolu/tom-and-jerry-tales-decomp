#include "m2c.h"

s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);
M2C_UNK SNDi_CallAlarmHandler(M2C_UNK);

void PxiFifoCallback(s32 arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = OS_DisableInterrupts();
    SNDi_CallAlarmHandler(arg1);
    OS_RestoreInterrupts(temp_r4);
}
