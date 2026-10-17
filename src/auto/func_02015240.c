#include "m2c.h"

extern M2C_UNK data_02087070;

s16 func_02015240(s32 arg0) {
    s16 var_r2;
    void *var_r1;

    var_r2 = 0;
    var_r1 = *((M2C_UNK *) ((s8 *) &data_02087070 + (arg0 * 8)));
loop_1:
    if (((u32) (M2C_FIELD(var_r1, u8 *, 0x68) << 0x1F) >> 0x1F) == 0) {
        return var_r2;
    }
    var_r2 += 1;
    var_r1 += 0x6C;
    if ((s32) var_r2 >= 0x4B) {
        return -1;
    }
    goto loop_1;
}
