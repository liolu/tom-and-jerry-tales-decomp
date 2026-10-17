#include "m2c.h"

extern M2C_UNK data_02069414;
extern M2C_UNK data_0206e9e8;

void func_020016a4(void) {
    M2C_UNK (*temp_r0)();

    temp_r0 = *((M2C_UNK *) ((s8 *) &data_02069414 + (M2C_FIELD(&data_0206e9e8, u8 *, 4) * 4)));
    if (temp_r0 == NULL) {
        return;
    }
    temp_r0();
}
