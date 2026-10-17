#include "m2c.h"

s32 func_01ff8000(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_020405c0(M2C_UNK, M2C_UNK *, s32, M2C_UNK); /* extern */
M2C_UNK func_020591c0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0206de5c;
extern M2C_UNK data_021a90a4;
extern M2C_UNK data_021a90e4;

M2C_UNK *func_02046454(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_01ff8000(arg1, 0x3C);
    func_020591c0(&data_021a90e4, arg0, 0x20);
    M2C_FIELD(&data_021a90a4, s32 *, 0x60) = temp_r4;
    M2C_FIELD(&data_021a90a4, s32 *, 0x64) = 4;
    func_020405c0(arg0, &data_0206de5c, temp_r4, 0x2C);
    return &data_021a90e4;
}
