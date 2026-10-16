#include "engine.h"
#include "m2c.h"

M2C_UNK func_020517f8(void);
void func_0205180c(M2C_UNK);

extern M2C_UNK data_021b248c;

s32 func_0205600c(void) {
    s32 temp_r0;

    temp_r0 = func_020517f8();
    if (M2C_FIELD(&data_021b248c, s32 *, 0x18) != 0) {
        func_0205180c(temp_r0);
        return 0;
    }
    M2C_FIELD(&data_021b248c, s32 *, 0x18) = 1;
    func_0205180c(temp_r0);
    return 1;
}
