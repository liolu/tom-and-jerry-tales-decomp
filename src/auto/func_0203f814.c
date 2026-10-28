#include "m2c.h"

M2C_UNK func_020499c4(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern M2C_UNK data_020ba3e8;
extern M2C_UNK data_020ba3ec;
extern M2C_UNK data_020ba3f0;
extern M2C_UNK data_020ba3fc;

void func_0203f814(M2C_UNK *arg0, u32 arg1, u32 arg2) {
    M2C_UNK *temp_r3;
    M2C_UNK *var_r0;

    var_r0  = arg0;
    temp_r3 = var_r0;
    switch (arg1) {
        default:
            break;
        case 0:
            var_r0 = &data_020ba3fc;
            break;
        case 1:
            var_r0 = &data_020ba3e8;
            break;
        case 2:
            var_r0 = &data_020ba3ec;
            break;
        case 3:
            var_r0 = &data_020ba3f0;
            break;
    }
    func_020499c4(var_r0, temp_r3, arg2);
}
