#include "m2c.h"

M2C_UNK func_02030e44(M2C_UNK, s32);
s32 OS_GetMaxFreeSize(M2C_UNK, s32);
extern M2C_UNK data_0206cf20;

void func_02030e18(M2C_UNK arg0) {
    func_02030e44(arg0, OS_GetMaxFreeSize(4, M2C_FIELD(&data_0206cf20, s32 *, 4)));
}
