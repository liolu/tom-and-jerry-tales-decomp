#include "m2c.h"

s32 func_01ff8000(M2C_UNK, M2C_UNK);
M2C_UNK func_02030ed4(s32 *);
M2C_UNK func_02030ee0(s32 *, M2C_UNK);
s32 func_0203dd28(u32, M2C_UNK);
M2C_UNK GX_BeginLoadBGExtPltt();
M2C_UNK func_0204e828(s32, s32, M2C_UNK);
M2C_UNK GX_EndLoadBGExtPltt();
M2C_UNK GXS_BeginLoadBGExtPltt();
M2C_UNK func_0204e8f8(s32, s32, M2C_UNK);
M2C_UNK GXS_EndLoadBGExtPltt();
M2C_UNK DC_FlushRange(s32, M2C_UNK);
M2C_UNK MI_CpuCopy8(s32, s32, M2C_UNK);

void func_0203dc40(s32 arg0, M2C_UNK arg1, u32 arg2, M2C_UNK arg3) {
    s32 sp0;
    s32 temp_r4;
    s32 var_r8;

    sp0 = 0;
    func_02030ed4(&sp0);
    if (!(arg0 & 3)) {
        var_r8 = arg0;
    } else {
        var_r8 = (func_01ff8000(arg1, 0x204) + 3) & ~3;
        MI_CpuCopy8(arg0, var_r8, 0x200);
    }
    temp_r4 = func_0203dd28(arg2, arg3);
    DC_FlushRange(var_r8, 0x200);
    switch (arg2) {
        default:
            break;
        case 0:
        case 1:
        case 2:
        case 3:
            GX_BeginLoadBGExtPltt();
            func_0204e828(var_r8, temp_r4, 0x200);
            GX_EndLoadBGExtPltt();
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            GXS_BeginLoadBGExtPltt();
            func_0204e8f8(var_r8, temp_r4, 0x200);
            GXS_EndLoadBGExtPltt();
            break;
    }
    func_02030ee0(&sp0, arg1);
}
