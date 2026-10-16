#include "m2c.h"

M2C_UNK func_0204674c(void *, M2C_UNK);             /* extern */
M2C_UNK func_020500ac(void *, M2C_UNK *, void *, s32, s32, s32); /* extern */
M2C_UNK func_02050370(void *);                      /* extern */
M2C_UNK func_020508c8(void *);                      /* extern */
extern M2C_UNK func_0204aebc;

void func_0204a058(void *arg0, s32 arg1) {
    func_020500ac(arg0, &func_0204aebc, arg0, arg0 + 0x4C0, 0x400, arg1);
    func_0204674c(arg0 + 0x4E0, 0);
    func_020508c8(arg0 + 0x4C8);
    M2C_FIELD(arg0, s32 *, 0x4C4) = 0;
    M2C_FIELD(arg0, s32 *, 0x4C0) = 0;
    func_02050370(arg0);
}
