#include "m2c.h"

extern M2C_UNK data_020b8ea0;

s32 func_0203f34c(u32 arg0) {
    if (arg0 > 1U) {
        return 0;
    }
    return M2C_FIELD(&data_020b8ea0, u16 *, 0xC) & (1 << arg0);
}
