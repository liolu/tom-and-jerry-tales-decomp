#include "m2c.h"

s32 func_02050d24(M2C_UNK);
s32 func_02050d38(M2C_UNK);
M2C_UNK OS_SetArenaLo(M2C_UNK, s32);
M2C_UNK OS_SetCurrentHeap(M2C_UNK, s32);
s32 OS_InitAlloc(M2C_UNK, s32, s32, M2C_UNK);
s32 func_02051248(M2C_UNK, s32, s32);
M2C_UNK OS_Terminate();
extern M2C_UNK data_0206cf20;

void func_02030c98(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;
    s32 temp_r4_4;
    s32 temp_r4_5;

    temp_r4 = func_02050d24(0);
    OS_SetArenaLo(0, OS_InitAlloc(0, func_02050d38(0), temp_r4, 1));
    temp_r4_2                           = func_02050d24(0);
    temp_r0                             = func_02051248(0, func_02050d38(0), temp_r4_2);
    M2C_FIELD(&data_0206cf20, s32 *, 0) = temp_r0;
    if (temp_r0 < 0) {
        OS_Terminate();
    }
    OS_SetCurrentHeap(0, M2C_FIELD(&data_0206cf20, s32 *, 0));
    temp_r4_3 = func_02050d24(4);
    temp_r0   = func_02050d38(4);
    if (temp_r0 == temp_r4_3) {
        return;
    }
    temp_r4_4 = func_02050d24(4);
    OS_SetArenaLo(4, OS_InitAlloc(4, func_02050d38(4), temp_r4_4, 1));
    temp_r4_5                           = func_02050d24(4);
    temp_r0_2                           = func_02051248(4, func_02050d38(4), temp_r4_5);
    M2C_FIELD(&data_0206cf20, s32 *, 4) = temp_r0_2;
    if (temp_r0_2 < 0) {
        OS_Terminate();
    }
    OS_SetCurrentHeap(4, M2C_FIELD(&data_0206cf20, s32 *, 4));
}
