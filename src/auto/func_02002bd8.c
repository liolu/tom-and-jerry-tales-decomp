#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0206e9e8;

s32 func_02002bd8(void) {
    return M2C_FIELD(&data_0206e9e8, s32 *, 0x1C);
}
