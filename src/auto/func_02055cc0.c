#include "m2c.h"

extern M2C_UNK data_021b2450;

u16 func_02055cc0(void) {
    return M2C_FIELD(&data_021b2450, u16 *, 0x10);
}
