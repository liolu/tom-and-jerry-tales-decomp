#include "m2c.h"

extern M2C_UNK data_021b25a0;

s32 func_02057590(void) {
    if (M2C_FIELD(&data_021b25a0, s32 *, 0x114) != 0) {
        return 1;
    }
    return 0;
}
