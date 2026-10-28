#include "m2c.h"

s32 func_020306c0(M2C_UNK);
extern u8 data_0206e678;
extern s32 data_0206e684;
extern M2C_UNK data_0206e6d4;

s32 func_02007690(void) {
    if ((data_0206e684 != 0) && (M2C_FIELD(&data_0206e6d4, u8 *, 0xB4) != 6)) {
        return 0;
    }
    if ((data_0206e678 & 1) && ((func_020306c0(9) != 0) || (func_020306c0(8) != 0))) {
        return 1;
    }
    if ((data_0206e678 & 2) && ((func_020306c0(9) != 0) || (func_020306c0(8) != 0))) {
        return 2;
    }
    return 0;
}
