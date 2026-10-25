#include "m2c.h"

void func_02039d68(s32 *a, s32 *out, long long k) {
    out[0] = (s32) ((k * (long long) a[0] + 0x80000000LL) >> 32);
    out[1] = (s32) ((k * (long long) a[1] + 0x80000000LL) >> 32);
    out[2] = (s32) ((k * (long long) a[2] + 0x80000000LL) >> 32);
}
