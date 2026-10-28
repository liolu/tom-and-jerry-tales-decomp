#include "m2c.h"

s32 func_01ff8000(M2C_UNK, M2C_UNK);
M2C_UNK func_020405c0(M2C_UNK, M2C_UNK *, s32, M2C_UNK);
extern M2C_UNK data_0206a8d8;

s32 func_0200e6e0(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r0;

    temp_r0 = func_01ff8000(arg2, 0x12);
    func_020405c0(arg0, &data_0206a8d8, temp_r0, 0x12);
    return temp_r0;
}
