#include "m2c.h"

M2C_UNK _f2d(s32);
extern s32 __float_nan;

void nan(void) {
    _f2d(__float_nan);
}
