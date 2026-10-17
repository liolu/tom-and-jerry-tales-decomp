#include "m2c.h"

M2C_UNK func_0204b404(M2C_UNK *, void *, M2C_UNK *); /* extern */
M2C_UNK func_0204b918(s32, s32, M2C_UNK *);         /* extern */
M2C_UNK func_0204bbb8(s32, M2C_UNK *, void *, M2C_UNK); /* extern */

void func_02003658(void *arg0, s32 arg1, M2C_UNK arg2) {
    u8 sp0[12];

    func_0204b918((arg1 * 0x14) + (s32) (arg0 + 0x154), (M2C_FIELD(arg0, u8 *, 0x128) * 0xC) + (s32) (arg0 + 0x13C), sp0);
    func_0204b404(sp0, arg0 + 0x7C, sp0);
    func_0204bbb8(M2C_FIELD(arg0, s32 *, 0x54) * 4, sp0, arg0 + 0xAC, arg2);
}
