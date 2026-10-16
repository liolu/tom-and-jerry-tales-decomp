#include "m2c.h"

extern M2C_UNK data_021ae540;

void func_02046ee4(s32 arg0) {
    M2C_FIELD(&data_021ae540, s32 *, 4) = (s32) (M2C_FIELD(&data_021ae540, s32 *, 4) & ~(1 << arg0));
}
