#include "m2c.h"

M2C_UNK func_01ff94e8(M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_02037004();                            /* extern */
extern M2C_UNK data_020a0b78;

u16 func_02036eb4(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[12];

    M2C_FIELD(&data_020a0b78, u16 *, 2)   = 0U;
    M2C_FIELD(&data_020a0b78, s32 *, 0xC) = 1;
    func_01ff94e8(arg0, arg1, sp0);
    func_02037004();
    return M2C_FIELD(&data_020a0b78, u16 *, 2);
}
