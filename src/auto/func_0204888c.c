#include "m2c.h"

s32 func_02046c60(s32, u16);                        /* extern */
M2C_UNK func_02046cb0(s32, M2C_UNK);                /* extern */
s32 func_02048a14(void *);                          /* extern */

s32 func_0204888c(void *arg0) {
    if (func_02046c60(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_02048a14(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_02046cb0(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
