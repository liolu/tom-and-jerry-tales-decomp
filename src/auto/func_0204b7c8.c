#include "m2c.h"

s32 func_0204b888();                                /* extern */

s32 func_0204b7c8(s32 arg0) {
    if (arg0 <= 0) {
        return 0;
    }
    M2C_FIELD((void *) 0x040002B0, s16 *, 0)   = 1;
    M2C_FIELD((void *) 0x040002B0, s32 *, 8)   = 0;
    M2C_FIELD((void *) 0x040002B0, s32 *, 0xC) = arg0;
    return func_0204b888();
}
