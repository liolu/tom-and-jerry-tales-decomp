#include "m2c.h"

M2C_UNK func_02039d0c(M2C_UNK, M2C_UNK, s32);       /* extern */
M2C_UNK func_0204baa0(s32, M2C_UNK);                /* extern */
extern s32 data_020692ec;
extern M2C_UNK data_0206e6d4;
extern s32 data_0206ea14;

void func_02006bb0(M2C_UNK arg0, s32 arg1) {
    s32 var_r5;

    var_r5 = arg1;
    if ((data_020692ec == 4) && (M2C_FIELD(&data_0206e6d4, u8 *, 0x16) != 0)) {
        var_r5 = 0 - var_r5;
    }
    func_0204baa0(data_0206ea14 + 0x94, arg0);
    func_02039d0c(arg0, arg0, var_r5);
}
