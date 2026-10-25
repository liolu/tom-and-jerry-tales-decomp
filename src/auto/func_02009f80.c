/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"
u16 func_02009f80(u8 *p) {
    s32 i;
    u16 s;
    u8 n;
    n = p[0];
    s = 0;
    i = 0;
    if ((n & ~1) > 0) {
        do {
            u8 *q = p + i;
            u8 b  = q[5];
            u8 a  = q[4];
            i += 2;
            s += a << (b + 8);
        } while (i < (n & ~1));
    }
    if (n & 1) {
        s += (p + (n - 1))[4];
    }
    return s;
}
