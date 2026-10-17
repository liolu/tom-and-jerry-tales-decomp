#include "m2c.h"

M2C_UNK func_02030ed4(M2C_UNK *);                   /* extern */
M2C_UNK func_02030ee0(M2C_UNK *, M2C_UNK);          /* extern */
s32 func_02030f40(M2C_UNK, s32 *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0203bd24(s32, M2C_UNK, M2C_UNK, u16, s32, s32, s32); /* extern */
M2C_UNK func_02051a48();                            /* extern */

void func_0203bc90(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, u16 arg4, u16 arg5, s32 arg6, u16 arg7) {
    s32 sp10;
    M2C_UNK spC;

    sp10 = 0;
    func_02030ed4(&spC);
    if ((func_02030f40(arg0, &sp10, arg1, arg1) < 0) || (sp10 == 0)) {
        func_02051a48();
    }
    func_0203bd24(sp10, arg2, arg3, arg4, (s32) arg5, arg6, (s32) arg7);
    func_02030ee0(&spC, arg1);
}
