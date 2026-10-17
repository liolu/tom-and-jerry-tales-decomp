#include "m2c.h"

extern M2C_UNK data_0208a038;

void *func_02032428(void) {
    u16 var_r3;
    void *temp_r0;

    var_r3 = 0;
loop_1:
    temp_r0 = (M2C_UNK *) ((s8 *) &data_0208a038 + (var_r3 * 8));
    if ((s32) ((s32) (M2C_FIELD(temp_r0, s32 *, 4) << 0x11) >> 0x19) < 0) {
        return temp_r0;
    }
    var_r3 += 1;
    if ((u32) var_r3 >= 0x28U) {
        return NULL;
    }
    goto loop_1;
}
