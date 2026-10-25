#include "m2c.h"
s32 func_020402b0(s8);
s32 func_020402cc(s8 *p, u32 k) {
    s32 h = 0;
    s32 c;
    u32 a = k & 0xF;
    u32 b = (k >> 4) & 0xF;
    u32 d = (k >> 8) & 0xF;
    for (;;) {
        c = func_020402b0(*p++);
        if (c == 0) {
            break;
        }
        h += c + (h << a) + (h << b) - (h << d);
    }
    return h & (k >> 0x10);
}
