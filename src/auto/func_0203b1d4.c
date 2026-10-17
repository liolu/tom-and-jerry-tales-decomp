#include "m2c.h"

extern s16 data_020b82fc;

s32 func_0203b1d4(void) {
    s16 *var_r2;
    s32 var_r0;

    var_r2 = &data_020b82fc;
    var_r0 = 0;
loop_1:
    if ((s32) *var_r2 < 0) {
        return var_r0;
    }
    var_r0 += 1;
    var_r2 = (s16 *) ((s8 *) var_r2 + 0x18);
    if (var_r0 >= 0x14) {
        return -1;
    }
    goto loop_1;
}
