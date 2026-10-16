#include "m2c.h"

s32 func_020482c4();                                /* extern */
s32 func_02048678();                                /* extern */
M2C_UNK func_020486a0(M2C_UNK, s32);                /* extern */
s32 func_02048da4(M2C_UNK, M2C_UNK *, s32, M2C_UNK, s32); /* extern */
extern M2C_UNK func_02049154;

s32 func_02048eb0(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 var_r2;
    s32 var_r4;

    var_r4 = func_02048678();
    if (var_r4 == 0) {
        if (arg2 == 0) {
            var_r2 = 0;
        } else {
            var_r2 = func_020482c4();
        }
        var_r4 = func_02048da4(arg0, &func_02049154, var_r2, arg0, arg1);
        if ((arg2 != 0) && (var_r4 != 0)) {
            func_020486a0(arg0, var_r4);
        }
    }
    return var_r4;
}
