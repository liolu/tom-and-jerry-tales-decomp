#include "m2c.h"

s32 func_0203849c(M2C_UNK *, s32, void *, M2C_UNK *, s32, void *); /* extern */
M2C_UNK func_02038f04(void *, void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0204b918(s32, void *, M2C_UNK *);      /* extern */

s32 func_02037264(void *arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    u8 sp14[12];
    u8 sp8[12];

    func_0204b918(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x14, sp14);
    func_0204b918(M2C_FIELD(arg1, s32 *, 4), arg1 + 0x14, sp8);
    if (func_0203849c(sp14, M2C_FIELD(arg0, s32 *, 0), arg0 + 0x24, sp8, M2C_FIELD(arg1, s32 *, 0), arg1 + 0x24) >= 0) {
        return 0;
    }
    func_02038f04(arg0, arg1, arg2, arg3, arg4);
    return 1;
}
