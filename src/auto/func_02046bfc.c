#include "m2c.h"

M2C_UNK func_02046b44();                            /* extern */
M2C_UNK func_02046b58(M2C_UNK);                     /* extern */

void func_02046bfc(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_02046b44();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02046b58(arg0);
}
