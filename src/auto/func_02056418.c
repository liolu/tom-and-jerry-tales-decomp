#include "m2c.h"

M2C_UNK func_02056048();                            /* extern */
s32 func_020563c4(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK func_02056088;

s32 func_02056418(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_020563c4(arg0, &func_02056088, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02056048();
    return sp0;
}
