#include "m2c.h"

M2C_UNK func_02047c78(void *, M2C_UNK);
s32 OS_DisableInterrupts();
M2C_UNK OS_RestoreInterrupts(s32);
s32 SND_StartTimer(s32, M2C_UNK, s32, M2C_UNK);

s32 EndSleep(void *arg0) {
    s32 temp_r0;
    s32 temp_r6;

    temp_r0 = (s32) (M2C_FIELD(arg0, s32 *, 0x24) << 0x1E) >> 0x1F;
    if (temp_r0 == 0) {
        return temp_r0;
    }
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        do {
            temp_r6 = OS_DisableInterrupts();
            func_02047c78(arg0, 1);
            OS_RestoreInterrupts(temp_r6);
        } while (M2C_FIELD(arg0, s32 *, 0x38) != 0);
    }
    return SND_StartTimer(M2C_FIELD(arg0, s32 *, 0x44), 0, 1 << M2C_FIELD(arg0, s32 *, 0x40), 0);
}
