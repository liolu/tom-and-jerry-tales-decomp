#include "m2c.h"
s32 func_0203df50(s32);
s32 func_0203dfec(void);
u8 func_0203df7c(s32 a) {
    s32 r;
    if (func_0203dfec() != 0 || func_0203df50(a) != 0) {
        r = 1;
    } else {
        r = 0;
    }
    return (u8) r;
}
