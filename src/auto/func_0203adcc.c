#include "m2c.h"

void func_0203adcc(void *arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, s32 *, 0x34) = arg3;
    if (arg1 == M2C_FIELD(arg0, s32 *, 0x2C)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = arg1;
    M2C_FIELD(arg0, s32 *, 0xAC) = (s32) ((M2C_FIELD(arg0, s32 *, 0xAC) & ~1) | 1);
}
