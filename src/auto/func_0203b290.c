#include "m2c.h"

s32 func_0203b178(M2C_UNK);
s32 func_0203b204(M2C_UNK);
M2C_UNK func_0203b2c4(M2C_UNK, s32);

void func_0203b290(M2C_UNK arg0, M2C_UNK arg1) {
    s32 var_r1;

    var_r1 = func_0203b178(arg1);
    if (var_r1 < 0) {
        var_r1 = func_0203b204(arg1);
    }
    func_0203b2c4(arg0, var_r1);
}
