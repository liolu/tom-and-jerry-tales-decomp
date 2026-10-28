#include "m2c.h"

u32 func_02018984(s16, s16);

u8 func_0201b6fc(void *arg0) {
    u16 temp_r2;
    u16 temp_r2_2;
    u32 temp_r0;

    temp_r0 = func_02018984((s16) (M2C_FIELD(arg0, s32 *, 0x10) - M2C_FIELD(arg0, s32 *, 0x20)),
                            (s16) (M2C_FIELD(arg0, s32 *, 0x14) - M2C_FIELD(arg0, s32 *, 0x24)));
    temp_r2 = M2C_FIELD(arg0, u16 *, 0x2A);
    if (temp_r0 < (u32) (temp_r2 * temp_r2)) {
        M2C_FIELD(arg0, s32 *, 0x1C) = 1;
    } else {
        temp_r2_2 = M2C_FIELD(arg0, u16 *, 0x28);
        if (temp_r0 < (u32) (temp_r2_2 * temp_r2_2)) {
            M2C_FIELD(arg0, s32 *, 0x1C) = 2;
        } else {
            M2C_FIELD(arg0, s32 *, 0x1C) = 3;
        }
    }
    return (u8) M2C_FIELD(arg0, s32 *, 0x1C);
}
