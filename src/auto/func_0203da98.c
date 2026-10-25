#include "m2c.h"

void func_0203da98(u8 *src, u16 *dst) {
    s32 i = 0x300;
    do {
        u16 g = src[1] >> 3;
        u16 r = src[0] >> 3;
        u16 b = src[2] >> 3;
        u16 t = r + (g << 5);
        t     = t + (b << 10);
        i -= 3;
        src += 3;
        *dst++ = t & 0x7FFF;
    } while (i > 0);
}
