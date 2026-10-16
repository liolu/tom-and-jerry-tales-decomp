#include "m2c.h"

extern void *data_021af4f0;

void func_020486a0(s32 arg0, s32 arg1) {
    M2C_FIELD((M2C_FIELD(data_021af4f0, s32 *, 0x84) + (arg0 * 0x10)), s32 *, 0x14) = arg1;
}
