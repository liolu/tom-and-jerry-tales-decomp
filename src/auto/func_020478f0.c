#include "m2c.h"

M2C_UNK func_02046e50();                            /* extern */

void func_020478f0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x44) == 0) {
        return;
    }
    func_02046e50();
    M2C_FIELD(arg0, s32 *, 0x44) = 0;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
}
