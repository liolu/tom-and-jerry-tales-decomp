#include "m2c.h"

M2C_UNK VEC_Normalize(s32, s32);

void func_0203adf8(void *arg0, s16 arg1, s32 arg2) {
    if (arg2 != 0) {
        VEC_Normalize(arg2, arg0 + 0x44);
    }
    M2C_FIELD(arg0, s16 *, 6)    = arg1;
    M2C_FIELD(arg0, s32 *, 0x5C) = (s32) ((M2C_FIELD(arg0, s32 *, 0x5C) & ~3) | 3);
}
