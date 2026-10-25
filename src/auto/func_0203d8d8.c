#include "m2c.h"
u16 func_0203d8d8(volatile s8 *s, u8 *t) {
    u16 sum = 0;
    if (*s != 0) {
        do {
            s8 c = *s;
            sum += *(t + ((u32 *) t)[(u8) (u16) (c - 0x1F)]);
        } while (*++s != 0);
    }
    return sum;
}
