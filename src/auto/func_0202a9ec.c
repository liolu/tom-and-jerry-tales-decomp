#include "m2c.h"
extern u8 data_02064084[];
s32 func_0202a9ec(s32 arg0) {
    u8 buf[3];
    u8 *p = buf;
    u8 i;
    buf[0] = data_02064084[0];
    buf[1] = data_02064084[1];
    buf[2] = data_02064084[2];
    for (i = 0; i < 3; i++) {
        if (arg0 == p[i]) {
            return 1;
        }
    }
    return 0;
}
