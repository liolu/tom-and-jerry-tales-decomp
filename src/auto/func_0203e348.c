#include "m2c.h"
extern u16 data_0206418c[];
u32 func_0203e348(s32 arg0, s32 arg1) {
    u32 v = data_0206418c[arg0];
    if (arg1 == 0) {
        return v << 5;
    }
    if (arg1 == 1) {
        return v << 6;
    }
    return v << 7;
}
