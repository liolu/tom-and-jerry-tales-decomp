#include "m2c.h"

void func_020464b4(void *arg0, void *arg1) {
    void *temp_r2;

    temp_r2                         = M2C_FIELD(arg1, void **, 0x20);
    M2C_FIELD(temp_r2, s32 *, 0x2C) = (s32) M2C_FIELD(arg0, s32 *, 0);
    M2C_FIELD(temp_r2, s32 *, 0x30) = (s32) M2C_FIELD(arg0, s32 *, 4);
    M2C_FIELD(temp_r2, s32 *, 0x34) = (s32) M2C_FIELD(arg0, s32 *, 8);
}
