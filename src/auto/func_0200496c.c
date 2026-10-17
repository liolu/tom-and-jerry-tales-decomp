#include "m2c.h"

s32 func_02004330(s32);                             /* extern */
s32 func_020592b0(M2C_UNK, s32);                    /* extern */

s32 func_0200496c(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = 0;
loop_1:
    if (func_020592b0(arg0, func_02004330(var_r4)) == 0) {
        return var_r4;
    }
    var_r4 += 1;
    if (var_r4 >= 0x62) {
        return -1;
    }
    goto loop_1;
}
