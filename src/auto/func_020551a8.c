#include "m2c.h"

s32 func_02054c84(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
s32 func_02055144(M2C_UNK, M2C_UNK *);              /* extern */

s32 func_020551a8(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[12];

    if (func_02054c84(arg0, arg1, 0, sp0) == 0) {
        return 0;
    }
    return func_02055144(arg0, sp0);
}
