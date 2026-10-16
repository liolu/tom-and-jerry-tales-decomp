#include "m2c.h"

M2C_UNK func_02054c5c(M2C_UNK *);                   /* extern */
s32 func_02054c84(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

s32 func_02054e44(M2C_UNK arg0, M2C_UNK arg1) {
    u8 sp0[72];

    func_02054c5c(sp0);
    if (func_02054c84(sp0, arg1, arg0, 0) != 0) {
        return 1;
    }
    return 0;
}
