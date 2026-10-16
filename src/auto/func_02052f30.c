#include "m2c.h"

extern M2C_UNK data_021b22e0;

void func_02052f30(s32 arg0) {
    s32 temp_r1;

    temp_r1                     = (arg0 * 0xC) + (s32) &data_021b22e0;
    M2C_FIELD(temp_r1, u8 *, 8) = (u8) (M2C_FIELD(temp_r1, u8 *, 8) + 1);
}
