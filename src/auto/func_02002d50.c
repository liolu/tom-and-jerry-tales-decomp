#include "m2c.h"

M2C_UNK func_02039d0c(M2C_UNK, s32, M2C_UNK);
M2C_UNK VEC_CrossProduct(s32, s32, s32);
M2C_UNK VEC_Normalize(s32, s32);
extern M2C_UNK data_0206e9e8;

void func_02002d50(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02039d0c(arg0, arg3, -0x1000);
    VEC_CrossProduct(M2C_FIELD(&data_0206e9e8, s32 *, 0x10) + 0x14, arg3, arg1);
    VEC_Normalize(arg1, arg1);
    VEC_CrossProduct(arg3, arg1, arg2);
}
