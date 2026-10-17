#include "m2c.h"

extern M2C_UNK data_021a6f08;
extern M2C_UNK data_021a6f20;

void *func_020401e8(s32 arg0) {
    s32 temp_r2;
    void *var_r0;

    if (arg0 > 0) {
        temp_r2 = (u8) arg0 * 0x28;
        if (arg0 == *((M2C_UNK *) ((s8 *) &data_021a6f20 + temp_r2))) {
            var_r0 = (M2C_UNK *) ((s8 *) &data_021a6f08 + temp_r2);
        } else {
            var_r0 = NULL;
        }
        return var_r0;
    }
    return NULL;
}
