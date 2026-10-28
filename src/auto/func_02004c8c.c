#include "m2c.h"

s32 STD_CompareString(s32, s32);
extern M2C_UNK data_02069c08;

u8 func_02004c8c(s32 arg0) {
    u8 var_r5;

    var_r5 = 0;
loop_1:
    if (STD_CompareString(arg0 + 0xC, *((M2C_UNK *) ((s8 *) &data_02069c08 + (var_r5 * 4)))) == 0) {
        return var_r5;
    }
    var_r5 += 1;
    if ((u32) var_r5 >= 0x5DU) {
        return 0x5EU;
    }
    goto loop_1;
}
