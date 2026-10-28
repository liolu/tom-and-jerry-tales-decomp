#include "m2c.h"

M2C_UNK func_02030c30();
M2C_UNK OS_Terminate();
M2C_UNK TP_RequestAutoSamplingStartAsync(M2C_UNK, s16, M2C_UNK *, u16);
M2C_UNK TP_RequestAutoSamplingStopAsync();
M2C_UNK TP_WaitBusy(M2C_UNK);
s32 func_02055ff8(M2C_UNK);
extern M2C_UNK data_020886bc;
extern M2C_UNK data_020886f8;

void func_020308cc(s32 arg0, s16 arg1) {
    if (M2C_FIELD(&data_020886bc, s32 *, 4) == 0) {
        func_02030c30();
        M2C_FIELD(&data_020886bc, s32 *, 4) = 1;
    } else if (M2C_FIELD(&data_020886bc, s32 *, 8) != 0) {
        TP_RequestAutoSamplingStopAsync();
        TP_WaitBusy(4);
        if (func_02055ff8(4) != 0) {
            OS_Terminate();
        }
    }
    if (arg0 != 0) {
        TP_RequestAutoSamplingStartAsync(0, arg1, &data_020886f8, (u16) (arg1 + 1));
        TP_WaitBusy(2);
        if (func_02055ff8(2) != 0) {
            OS_Terminate();
        }
        M2C_FIELD(&data_020886bc, s16 *, 0) = arg1;
    } else {
        M2C_FIELD(&data_020886bc, s16 *, 0) = 1;
    }
    M2C_FIELD(&data_020886bc, s32 *, 8) = arg0;
}
