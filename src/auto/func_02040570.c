#include "m2c.h"

s32 func_01ff8000(M2C_UNK, s32);
s32 func_0204031c();
s32 func_0204045c(M2C_UNK, s32);
extern M2C_UNK data_021a7188;

s32 func_02040570(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_r4;

    if (func_0204031c() != 0) {
        return 0;
    }
    var_r4 = func_01ff8000(arg2, M2C_FIELD(&data_021a7188, s32 *, 8));
    if (func_0204045c(arg0, var_r4) != 0) {
        var_r4 = 0;
    }
    return var_r4;
}
