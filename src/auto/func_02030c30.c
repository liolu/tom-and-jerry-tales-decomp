#include "m2c.h"

M2C_UNK OS_Terminate();
M2C_UNK TP_Init();
s32 TP_GetUserInfo(M2C_UNK *);
M2C_UNK func_02055868(M2C_UNK *);
M2C_UNK TP_RequestSetStabilityAsync(M2C_UNK, M2C_UNK);
M2C_UNK TP_WaitBusy(M2C_UNK);
s32 func_02055ff8(M2C_UNK);
extern M2C_UNK data_020886bc;

void func_02030c30(void) {
    u8 sp0[8];

    TP_Init();
    if (TP_GetUserInfo(sp0) == 0) {
        OS_Terminate();
    }
    func_02055868(sp0);
    TP_RequestSetStabilityAsync(7, 0x1E);
    TP_WaitBusy(8);
    if (func_02055ff8(8) != 0) {
        OS_Terminate();
    }
    M2C_FIELD(&data_020886bc, s32 *, 4) = 1;
}
