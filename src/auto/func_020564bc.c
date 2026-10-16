#include "m2c.h"

M2C_UNK func_02056048();                            /* extern */
s32 func_02056440(M2C_UNK, M2C_UNK, M2C_UNK *, s32 *); /* extern */
extern M2C_UNK func_02056088;

s32 func_020564bc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02056440(arg0, arg1, &func_02056088, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02056048();
    return sp0;
}
