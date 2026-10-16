#include "m2c.h"

M2C_UNK func_020526d0(s32, s32);                    /* extern */
M2C_UNK func_020531d0(s32);                         /* extern */
M2C_UNK func_020490fc(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0204917c(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    func_020490fc(arg0, arg2, arg3);
    func_020526d0(arg0, arg0 + arg1);
    func_020531d0(arg0);
}
