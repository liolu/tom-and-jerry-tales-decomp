#include "m2c.h"
s32 func_0204b77c(s32, s32);
void func_02003aa8(u8 *p, s32 arg1) {
    s32 f;
    long long m;
    s32 v;
    s32 u;
    s32 w;
    long long k;
    f                   = func_0204b77c(0x1000, *(s32 *) (p + 0x54));
    k                   = f;
    m                   = arg1;
    w                   = (s32) (((long long) *(s32 *) (p + 0x58) * f + 0x800) >> 12);
    *(s32 *) (p + 0x58) = (s32) (((long long) w * arg1 + 0x800) >> 12);
    v                   = *(s32 *) (p + 0x5c);
    if (v > 0) {
        u                   = (s32) (((long long) v * k + 0x800) >> 12);
        *(s32 *) (p + 0x5c) = (s32) (((long long) u * m + 0x800) >> 12);
    } else {
        *(s32 *) (p + 0x5c) = *(s32 *) (p + 0x58);
    }
    *(s32 *) (p + 0x54) = arg1;
}
