#include "m2c.h"

s32 func_0201d3e0();

u8 func_0201d548(u32 arg0) {
    M2C_UNK saved_reg_r4;
    s32 var_r4;

    var_r4 = saved_reg_r4;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r4 = 5;
            break;
        case 1:
            var_r4 = 4;
            break;
        case 2:
            var_r4 = 3;
            break;
        case 3:
            var_r4 = 4;
            break;
        case 4:
            var_r4 = 2;
            break;
        case 7:
            var_r4 = 5;
            break;
        case 8:
            var_r4 = 3;
            break;
    }
    return (u8) (var_r4 - func_0201d3e0());
}
