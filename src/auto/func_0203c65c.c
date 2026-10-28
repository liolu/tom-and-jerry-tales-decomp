#include "m2c.h"

M2C_UNK func_02030ed4(M2C_UNK *);
M2C_UNK func_02030ee0(M2C_UNK *, M2C_UNK);
s32 func_02030f40(M2C_UNK, s32 *, M2C_UNK, M2C_UNK);
M2C_UNK func_0203c740(s32, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32, s32);
M2C_UNK OS_Terminate();

void func_0203c65c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4, s32 arg5, s32 arg6, u8 arg7, u8 arg8,
                   u8 arg9) {
    s32 sp18;
    M2C_UNK sp14;

    sp18 = 0;
    func_02030ed4(&sp14);
    if ((func_02030f40(arg0, &sp18, arg1, arg1) < 0) || (sp18 == 0)) {
        OS_Terminate();
    }
    func_0203c740(sp18, arg2, arg3, arg4, arg5, arg6, (s32) arg7, (s32) arg8, (s32) arg9);
    func_02030ee0(&sp14, arg1);
}
