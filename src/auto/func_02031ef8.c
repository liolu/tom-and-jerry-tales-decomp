#include "m2c.h"

s32 func_02031bf8(u32, s32 *, s32 *);
s32 func_02031cf0(u32, s32 *);
M2C_UNK GX_BeginLoadTex();
M2C_UNK func_0204e9f8(s32, s32, u32);
M2C_UNK GX_EndLoadTex();
M2C_UNK OS_Terminate();

void func_02031ef8(void *arg0, u32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp4;
    s32 sp0;
    s32 var_r0;

    if (arg2 == 0) {
        OS_Terminate();
    }
    if (arg3 != 0) {
        if (arg4 != 0) {
            sp4 = M2C_FIELD(arg0, s32 *, 4);
            sp0 = M2C_FIELD(arg0, s32 *, 0xC);
        } else if (func_02031bf8(arg1, &sp4, &sp0) == 0) {
            OS_Terminate();
        }
    } else if (arg4 != 0) {
        sp4 = M2C_FIELD(arg0, s32 *, 4);
    } else if (func_02031cf0(arg1, &sp4) == 0) {
        OS_Terminate();
    }
    GX_BeginLoadTex();
    func_0204e9f8(arg2, sp4, arg1);
    M2C_FIELD(arg0, s32 *, 4) = sp4;
    if (arg3 == 0) {
        var_r0 = 0;
    } else {
        func_0204e9f8(arg3, sp0, arg1 >> 1);
        var_r0 = sp0;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = var_r0;
    GX_EndLoadTex();
}
