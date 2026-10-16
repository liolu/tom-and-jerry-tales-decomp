#include "m2c.h"

extern M2C_UNK data_021b0460;

s32 func_0204fd74(void) {
    return M2C_FIELD(&data_021b0460, s32 *, 0x20) = (s32) (M2C_FIELD(&data_021b0460, s32 *, 0x20) + 1);
}
