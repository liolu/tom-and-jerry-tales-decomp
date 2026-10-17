#include "m2c.h"

extern M2C_UNK data_0206e6d4;

void func_0201dc08(s32 arg0) {
    M2C_FIELD(&data_0206e6d4, s16 *, 0x88) = (s16) (M2C_FIELD(&data_0206e6d4, s16 *, 0x88) + arg0);
    if ((s32) M2C_FIELD(&data_0206e6d4, s16 *, 0x88) > 0x64) {
        M2C_FIELD(&data_0206e6d4, s16 *, 0x88) = 0x64;
    }
    if ((s32) M2C_FIELD(&data_0206e6d4, s16 *, 0x88) < 0) {
        M2C_FIELD(&data_0206e6d4, s16 *, 0x88) = 0;
    }
}
