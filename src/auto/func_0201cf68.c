#include "m2c.h"

s32 func_0201d0f4();
extern M2C_UNK data_0206e6d4;

s32 func_0201cf68(void) {
    return M2C_FIELD(&data_0206e6d4, u8 *, 0x1E) & func_0201d0f4();
}
