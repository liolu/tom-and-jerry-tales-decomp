#include "m2c.h"
s32 func_0203df38(void);
s32 func_0203df40(s32);
s32 func_0203df48(s32);
u8 func_0203dfec(s32 a) {
    s32 r;
    if (func_0203df38() != 0 || func_0203df40(a) != 0 || func_0203df48(a) != 0) {
        r = 1;
    } else {
        r = 0;
    }
    return (u8) r;
}
