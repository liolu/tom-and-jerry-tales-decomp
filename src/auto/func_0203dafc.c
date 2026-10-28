#include "m2c.h"

s32 func_01ff8000(M2C_UNK, M2C_UNK);
M2C_UNK func_02030ed4(s32 *);
s32 func_02030f40(M2C_UNK, s32 *, M2C_UNK, M2C_UNK);
M2C_UNK func_0203da98(s32, s32);
M2C_UNK func_0203db80(s32, M2C_UNK);
M2C_UNK OS_Terminate();

void func_0203dafc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 sp4;
    s32 sp0;
    s32 temp_r0;

    sp4 = 0;
    sp0 = 0;
    func_02030ed4(&sp0);
    if ((func_02030f40(arg0, &sp4, arg1, arg1) < 0) || (sp4 == 0)) {
        OS_Terminate();
    }
    temp_r0 = func_01ff8000(arg1, 0x200);
    func_0203da98(sp4, temp_r0);
    func_0203db80(temp_r0, arg2);
}
