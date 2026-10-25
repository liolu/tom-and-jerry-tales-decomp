#include "m2c.h"

s16 *func_01ffa0d8(s16 *arg0, s16 *arg1, s32 arg2) {
    arg1[0] = (s16) (((long long) arg0[0] * arg2 + 0x800) >> 12);
    arg1[1] = (s16) (((long long) arg0[1] * arg2 + 0x800) >> 12);
    arg1[2] = (s16) (((long long) arg0[2] * arg2 + 0x800) >> 12);
    arg1[3] = (s16) (((long long) arg0[3] * arg2 + 0x800) >> 12);
    return arg1;
}
