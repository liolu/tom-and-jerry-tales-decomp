#include "m2c.h"

extern s32 data_021af4f0;

s32 func_020482ac(s32 arg0) {
    s32 temp_r2;

    temp_r2       = data_021af4f0;
    data_021af4f0 = arg0;
    return temp_r2;
}
