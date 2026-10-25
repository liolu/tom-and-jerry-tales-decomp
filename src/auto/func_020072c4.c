#include "m2c.h"
extern u8 data_0206fcac[];
s32 func_020072c4(s32 a) {
    s32 i;
    u8 *e;
    s32 ok;
    u8 *q;
    ok = 1;
    q  = data_0206fcac + (a & 7) * 3;
    e  = data_0206fcac;
    for (i = 0; i < 15; i++) {
        if (ok != 0 && (e[8] == 0 || a == q[0x184a])) {
            ok = 1;
        } else {
            ok = 0;
        }
        e += 0x1864;
        q += 0x1864;
    }
    return ok;
}
