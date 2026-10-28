#include "m2c.h"

s32 func_020357ac();
s32 FX_Div(s32, s32);

s32 func_02035788(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_020357ac();
    return temp_r4 + (FX_Div(M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, s32 *, 0x10)) >> 0xC);
}
