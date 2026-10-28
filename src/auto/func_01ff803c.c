#include "m2c.h"

s32 func_01ff8000();
void MIi_CpuClearFast(s32, s32, s32);

s32 func_01ff803c(s32 a, s32 b) {
    s32 r = func_01ff8000();
    MIi_CpuClearFast(0, r, b);
    return r;
}
