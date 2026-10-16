#include "m2c.h"

s32 func_020517f8();                                /* extern */
M2C_UNK func_0205180c(s32);                         /* extern */
s32 func_020482ac(s32);                             /* extern */
s32 func_02048678(M2C_UNK);                         /* extern */
M2C_UNK func_020486a0(M2C_UNK, M2C_UNK);            /* extern */

void func_020490fc(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r4;
    s32 temp_r5;

    if (arg1 == 0) {
        return;
    }
    temp_r5 = func_020517f8();
    temp_r4 = func_020482ac(arg1);
    if (arg0 == func_02048678(arg2)) {
        func_020486a0(arg2, 0);
    }
    func_020482ac(temp_r4);
    func_0205180c(temp_r5);
}
