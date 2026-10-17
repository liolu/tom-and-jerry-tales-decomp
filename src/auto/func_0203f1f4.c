#include "m2c.h"

extern M2C_UNK data_020b8ea0;

void func_0203f1f4(s32 arg0) {
    if ((u32) (M2C_FIELD(&data_020b8ea0, s32 *, 0x20) - 9) > 1U) {
        M2C_FIELD(&data_020b8ea0, s32 *, 0x28) = arg0;
    }
}
