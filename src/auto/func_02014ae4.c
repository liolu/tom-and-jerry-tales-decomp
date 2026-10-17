#include "m2c.h"

M2C_UNK func_02051fd0(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02014ae4(void *arg0) {
    func_02051fd0(arg0, 0, 0x64);
    M2C_FIELD(arg0, s32 *, 0) = 5;
    M2C_FIELD(arg0, s32 *, 4) = 2;
}
