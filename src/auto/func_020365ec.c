#include "m2c.h"

extern void *data_027e0080;

s32 func_020365ec(void *arg0) {
    return M2C_FIELD(data_027e0080, s32 *, 4) + (M2C_FIELD(arg0, u16 *, 0xA) * 2);
}
