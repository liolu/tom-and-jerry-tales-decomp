#include "m2c.h"

extern M2C_UNK data_02087e30;

void func_02028628(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 2) {
        M2C_FIELD(&data_02087e30, s32 *, 0xC) = (s32) M2C_FIELD(arg0, s32 *, 4);
    }
}
