#include "m2c.h"

s32 func_02048af4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

s32 func_02048a70(M2C_UNK arg0, M2C_UNK arg1) {
    if (func_02048af4(arg0, 0xFF, arg1, 1, 0) == 0) {
        return 1;
    }
    return 0;
}
