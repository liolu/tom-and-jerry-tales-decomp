#include "m2c.h"

M2C_UNK func_02053814(void *, s32);                 /* extern */
s32 func_02053870(void *, s32);                     /* extern */
s32 func_0205444c(s32);                             /* extern */
M2C_UNK func_02054660();                            /* extern */

s32 func_020546f4(void *arg0) {
    func_02053814(arg0, func_02053870(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_0205444c(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_02054660();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
