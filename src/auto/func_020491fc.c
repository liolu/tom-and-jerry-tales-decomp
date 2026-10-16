#include "m2c.h"

M2C_UNK func_020526f0(s32, s32);                    /* extern */
M2C_UNK func_02053488(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020534bc(M2C_UNK, M2C_UNK);                /* extern */

void func_020491fc(s32 arg0, s32 arg1, M2C_UNK arg2, M2C_UNK arg3) {
    if (arg0 == func_020534bc(arg2, arg3)) {
        func_02053488(arg2, arg3, 0);
    }
    func_020526f0(arg0, arg0 + arg1);
}
