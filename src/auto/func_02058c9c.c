#include "m2c.h"

M2C_UNK func_02051380(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020517f8();                                /* extern */
M2C_UNK func_0205180c(s32);                         /* extern */
s32 func_02058a04();                                /* extern */
extern s32 data_021b38c0;

void func_02058c9c(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4       = func_020517f8();
    data_021b38c0 = arg0;
    if (func_02058a04() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_02051380(0xF000, var_r1);
    }
    func_0205180c(temp_r4);
}
