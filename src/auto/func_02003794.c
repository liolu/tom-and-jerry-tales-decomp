#include "m2c.h"

M2C_UNK func_02035694(void *, M2C_UNK);             /* extern */
M2C_UNK func_02036508(M2C_UNK, s32);                /* extern */

void func_02003794(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    M2C_FIELD(arg0, s32 *, 0x28)   = (s32) M2C_FIELD(arg0, s32 *, 0x24);
    M2C_FIELD(arg0, s32 *, 0x24)   = 0xE;
    M2C_FIELD(arg0, s32 *, 0x1834) = 8;
    M2C_FIELD(arg0, s32 *, 0x183C) = 0xC;
    func_02036508(arg1, M2C_FIELD(arg0, s32 *, 0x108));
    func_02035694(arg0 + 0x104, arg2);
}
