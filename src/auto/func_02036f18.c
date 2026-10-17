#include "m2c.h"

extern M2C_UNK data_020a0b78;
extern M2C_UNK data_020a0b88;

u16 func_02036f18(M2C_UNK **arg0) {
    *arg0 = &data_020a0b88;
    return M2C_FIELD(&data_020a0b78, u16 *, 2);
}
