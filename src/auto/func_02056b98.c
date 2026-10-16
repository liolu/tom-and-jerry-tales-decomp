#include "m2c.h"

s32 func_02056b1c(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020571a0();                            /* extern */
extern M2C_UNK data_021b24f4;
extern M2C_UNK func_02057190;

s32 func_02056b98(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                                = func_02056b1c(arg0, arg1, &func_02057190, 0);
    M2C_FIELD(&data_021b24f4, s32 *, 0x24) = temp_r0;
    if (temp_r0 == 0) {
        func_020571a0();
    }
    return M2C_FIELD(&data_021b24f4, s32 *, 0x24);
}
