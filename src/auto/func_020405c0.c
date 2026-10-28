#include "m2c.h"

s32 func_0204031c();
s32 func_0204045c(M2C_UNK, M2C_UNK);
extern M2C_UNK data_021a7188;

s32 func_020405c0(M2C_UNK arg0, s32 arg1, M2C_UNK arg2, u32 arg3) {
    if (func_0204031c() != 0) {
        return 1;
    }
    if (arg3 < (u32) M2C_FIELD(&data_021a7188, u32 *, 4)) {
        return 3;
    }
    if (func_0204045c(arg0, arg2) != 0) {
        return 2;
    }
    return 0;
}
