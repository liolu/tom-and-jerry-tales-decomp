#include "m2c.h"
extern u32 func_02030104(void);
extern s32 func_02030154(void);
s32 func_0203016c(s32 lo, s32 hi) {
    long long n;
    if (lo > hi) {
        s32 t = lo;
        lo    = hi;
        hi    = t;
    } else if (lo == hi) {
        return lo;
    }
    n = (long long) hi - lo + 1;
    if (n < 0x4000) {
        return lo + (n * func_02030104() >> 16);
    }
    return lo + (n * (u32) func_02030154() >> 32);
}
