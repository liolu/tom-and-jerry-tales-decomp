#include "m2c.h"

M2C_UNK func_02039d0c(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0204b9bc(s32, s32, s32);               /* extern */
M2C_UNK func_0204baa0(s32, s32);                    /* extern */
extern M2C_UNK data_0206e9e8;

void func_02002d50(M2C_UNK arg0, s32 arg1, s32 arg2, s32 arg3) {
    func_02039d0c(arg0, arg3, -0x1000);
    func_0204b9bc(M2C_FIELD(&data_0206e9e8, s32 *, 0x10) + 0x14, arg3, arg1);
    func_0204baa0(arg1, arg1);
    func_0204b9bc(arg3, arg1, arg2);
}
