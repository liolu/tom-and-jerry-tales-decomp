#include "m2c.h"

s32 func_01ff98dc(M2C_UNK *, s32, M2C_UNK *, s32);  /* extern */
M2C_UNK func_020388cc(void *, void *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0204b918(s32, void *, M2C_UNK *);      /* extern */

s32 func_020370b0(void *arg0, void *arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    u8 sp10[12];
    u8 sp4[12];

    func_0204b918(M2C_FIELD(arg0, s32 *, 4), arg0 + 0x14, sp10);
    func_0204b918(M2C_FIELD(arg1, s32 *, 4), arg1 + 0x14, sp4);
    if (func_01ff98dc(sp10, M2C_FIELD(arg0, s32 *, 0x20), sp4, M2C_FIELD(arg1, s32 *, 0x20)) >= 0) {
        return 0;
    }
    func_020388cc(arg0, arg1, arg2, arg3, arg4);
    return 1;
}
