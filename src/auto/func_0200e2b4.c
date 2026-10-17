#include "m2c.h"

extern s32 data_02086e14;
extern M2C_UNK data_02086e18;

void func_0200e2b4(s32 arg0) {
    s32 temp_r3;

    temp_r3                                                = data_02086e14 + 1;
    data_02086e14                                          = temp_r3;
    *((M2C_UNK *) ((s8 *) &data_02086e18 + (temp_r3 * 4))) = arg0;
}
