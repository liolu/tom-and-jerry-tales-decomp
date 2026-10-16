#include "m2c.h"

M2C_UNK func_020503c0();                            /* extern */
s32 func_020517f8();                                /* extern */
M2C_UNK func_0205180c(s32);                         /* extern */

void func_02050370(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_020517f8();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_020503c0();
    func_0205180c(temp_r4);
}
