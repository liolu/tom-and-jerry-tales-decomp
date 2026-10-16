#include "m2c.h"

M2C_UNK func_0204674c(s32, M2C_UNK);                /* extern */
s32 func_02048a14(s32 *);                           /* extern */

s32 func_020489e0(s32 *arg0, s32 arg1) {
    func_0204674c(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_02048a14(arg0) != 0) {
        return 1;
    }
    return 0;
}
