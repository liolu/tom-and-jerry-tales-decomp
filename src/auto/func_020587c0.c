#include "m2c.h"

extern u16 data_021b2e20;

s32 func_020587c0(void) {
    if (data_021b2e20 != 0) {
        return 0;
    }
    return 3;
}
