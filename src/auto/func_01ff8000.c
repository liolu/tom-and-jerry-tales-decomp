#include "m2c.h"
s32 func_01ff8000(s32 *arg0, s32 n) {
    s32 r = arg0[1];
    while (n & 3) {
        n += 1;
    }
    if ((u32) (r + n) > (u32) arg0[2]) {
        r = 0;
    } else {
        arg0[1] = arg0[1] + n;
    }
    return r;
}
