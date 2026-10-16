#include "engine.h"
#include "m2c.h"

M2C_UNK func_020517f8(void);
void func_0205180c(M2C_UNK);

extern M2C_UNK data_021b0800;

s32 func_02052cbc(void) {
    s32 temp_r0;
    s32 var_r4;

    temp_r0 = func_020517f8();
    if (M2C_FIELD(&data_021b0800, s32 *, 8) == 0) {
        var_r4 = M2C_FIELD(&data_021b0800, s32 *, 4);
    } else {
        var_r4 = M2C_FIELD(&data_021b0800, s32 *, 0x20);
    }
    func_0205180c(temp_r0);
    return var_r4;
}
