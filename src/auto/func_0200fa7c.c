#include "m2c.h"

extern M2C_UNK data_020880c0;

s32 func_0200fa7c(void *arg0) {
    s32 temp_r3;

    temp_r3 = (M2C_FIELD(arg0, u16 *, 0) * 0x3C) + M2C_FIELD(arg0, u16 *, 2);
    if (temp_r3 < (s32) M2C_FIELD(&data_020880c0, u16 *, 0x1E)) {
        return 0;
    }
    if (temp_r3 < (s32) M2C_FIELD(&data_020880c0, u16 *, 0x1C)) {
        return 3;
    }
    return 6;
}
