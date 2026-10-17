#include "m2c.h"

extern M2C_UNK data_0206d3bc;

u8 func_02039dd0(s32 arg0) {
    s32 var_r0;

    var_r0 = arg0;
    if (var_r0 > 0x1000) {
        var_r0 = 0x1000;
    } else if (var_r0 < -0x1000) {
        var_r0 = -0x1000;
    }
    return *((u8 *) ((s8 *) &data_0206d3bc + (var_r0 >> 4)));
}
