#include "m2c.h"

s32 func_01ffa154(s16 *a, s16 *b) {
    s32 x = (s32) (((long long) a[3] * b[3] + 0x800) >> 12);
    s32 y = (s32) (((long long) a[2] * b[2] + 0x800) >> 12);
    s32 z = (s32) (((long long) a[0] * b[0] + 0x800) >> 12);
    s32 w = (s32) (((long long) a[1] * b[1] + 0x800) >> 12);
    return x + (y + (z + w));
}
