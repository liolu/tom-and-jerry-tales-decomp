#include "m2c.h"

extern M2C_UNK data_021b2450;

s32 func_02055ff8(s32 arg0) {
    return M2C_FIELD(&data_021b2450, u16 *, 0x38) & arg0;
}
