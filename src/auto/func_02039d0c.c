#include "m2c.h"
void func_02039d0c(s32 *arg0, s32 *arg1, s32 arg2) {
    arg1[0] = (s32) (((s64) arg0[0] * arg2 + 0x800) >> 12);
    arg1[1] = (s32) (((s64) arg0[1] * arg2 + 0x800) >> 12);
    arg1[2] = (s32) (((s64) arg0[2] * arg2 + 0x800) >> 12);
}
