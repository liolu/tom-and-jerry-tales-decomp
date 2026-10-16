#include "engine.h"
#include "m2c.h"

M2C_UNK func_020517f8(void);
void func_0205180c(M2C_UNK);
M2C_UNK func_020571b8(void);

extern M2C_UNK data_021b24f4;

s32 func_02056b1c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    s32 temp_r0;

    temp_r0 = func_020517f8();
    if (M2C_FIELD(&data_021b24f4, s32 *, 4) != 0) {
        func_0205180c(temp_r0);
        return 1;
    }
    M2C_FIELD(&data_021b24f4, s32 *, 4) = 1;
    func_0205180c(temp_r0);
    M2C_FIELD(&data_021b24f4, s32 *, 0x18) = 2;
    M2C_FIELD(&data_021b24f4, s32 *, 0x1C) = 0;
    M2C_FIELD(&data_021b24f4, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_021b24f4, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_021b24f4, s32 *, 8)    = arg2;
    M2C_FIELD(&data_021b24f4, s32 *, 0x14) = arg3;
    if (func_020571b8() != 0) {
        return 0;
    }
    return 3;
}
