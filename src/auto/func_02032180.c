#include "m2c.h"

s32 func_02032180(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 & 0xF) {
        var_r0 = (var_r0 & ~0xF) + 0x10;
    }
    return var_r0;
}
