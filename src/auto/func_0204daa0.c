#include "m2c.h"

s32 func_0204daa0(void *arg0, s32 *arg1) {
    if (M2C_FIELD((void *) 0x04000600, s32 *, 0) & 1) {
        return -1;
    }
    M2C_FIELD(arg0, s32 *, 0) = (s32) M2C_FIELD((void *) 0x04000600, s32 *, 0x20);
    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD((void *) 0x04000600, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 8) = (s32) M2C_FIELD((void *) 0x04000600, s32 *, 0x28);
    *arg1                     = M2C_FIELD((void *) 0x04000600, s32 *, 0x2C);
    return 0;
}
