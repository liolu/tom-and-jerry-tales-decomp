#include "m2c.h"

s32 func_0203dfb4();
extern M2C_UNK func_0203e4dc;
extern M2C_UNK func_0203e534;
extern M2C_UNK func_0203e5a0;
extern M2C_UNK func_0203e5b0;

M2C_UNK *func_0203e498(s32 arg0, s32 arg1) {
    M2C_UNK *var_r0;

    if (func_0203dfb4() != 0) {
        if (arg1 == 0) {
            var_r0 = &func_0203e4dc;
        } else {
            var_r0 = &func_0203e534;
        }
        return var_r0;
    }
    if (arg1 == 2) {
        return &func_0203e5b0;
    }
    return &func_0203e5a0;
}
