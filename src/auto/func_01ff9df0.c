#include "m2c.h"

void func_01ff9df0(s32 *a, s32 *b, s32 *out, s32 t) {
    s32 d;
    d      = a[0] - b[0];
    out[0] = b[0] + (s32) (((long long) t * d + 0x800) >> 12);
    d      = a[1] - b[1];
    out[1] = b[1] + (s32) (((long long) t * d + 0x800) >> 12);
    d      = a[2] - b[2];
    out[2] = b[2] + (s32) (((long long) t * d + 0x800) >> 12);
}
