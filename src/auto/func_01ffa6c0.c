#include "m2c.h"

s32 func_01ffa6c0(s32 n, s32 a, s32 b, s32 c) {
    s32 t;
    s32 *q;
    t                                = n * 12;
    *(s32 *) (t + 0x04000000 + 0xB0) = a;
    q                                = (s32 *) (t + 0x040000B0);
    q[1]                             = b;
    q[2]                             = c;
    *(volatile s32 *) 0x040000B0;
    *(volatile s32 *) 0x040000B0;
    if (n == 0) {
        q[0] = 0;
        q[1] = 0;
        q[2] = 0x81400001;
    }
    *(volatile s32 *) 0x040000B0;
    return *(volatile s32 *) 0x040000B0;
}
