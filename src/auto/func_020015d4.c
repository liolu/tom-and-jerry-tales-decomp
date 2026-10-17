#include "m2c.h"

extern M2C_UNK data_0206e9e8;

void func_020015d4(s16 arg0, s16 arg1) {
    M2C_FIELD(&data_0206e9e8, s32 *, 0xC) = 1;
    M2C_FIELD(&data_0206e9e8, s16 *, 6)   = arg0;
    M2C_FIELD(&data_0206e9e8, s16 *, 0xA) = arg1;
}
