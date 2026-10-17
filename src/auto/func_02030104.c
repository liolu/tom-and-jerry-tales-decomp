#include "m2c.h"

extern s32 data_0206cf04;

u32 func_02030104(void) {
    s32 temp_r2;

    temp_r2       = (data_0206cf04 * 0x41C64E6D) + 0x3039;
    data_0206cf04 = temp_r2;
    return (u32) (temp_r2 * 2) >> 0x10;
}
