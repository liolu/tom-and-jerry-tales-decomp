#include "m2c.h"

extern s32 data_0206a31c;
extern M2C_UNK data_0206e6d4;

void func_02007450(s32 arg0) {
    if (M2C_FIELD(&data_0206e6d4, u8 *, 0x16) == 0) {
        data_0206a31c = arg0;
    }
}
