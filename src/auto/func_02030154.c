#include "m2c.h"

s32 func_02030104();                                /* extern */

s32 func_02030154(void) {
    s32 temp_r4;

    temp_r4 = func_02030104();
    return func_02030104() | (temp_r4 << 0x10);
}
