#include "m2c.h"

s32 func_01ff8000(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02030ed4(s32 *);                       /* extern */
M2C_UNK func_02030ee0(s32 *, M2C_UNK);              /* extern */
s32 func_0203dd28(u32, M2C_UNK);                    /* extern */
M2C_UNK func_0204e788();                            /* extern */
M2C_UNK func_0204e828(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0204e898();                            /* extern */
M2C_UNK func_0204e8e0();                            /* extern */
M2C_UNK func_0204e8f8(s32, s32, M2C_UNK);           /* extern */
M2C_UNK func_0204e95c();                            /* extern */
M2C_UNK func_02050b24(s32, M2C_UNK);                /* extern */
M2C_UNK func_02052064(s32, s32, M2C_UNK);           /* extern */

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
        func_02052064(arg0, var_r8, 0x200);
    }
    temp_r4 = func_0203dd28(arg2, arg3);
    func_02050b24(var_r8, 0x200);
    switch (arg2) {
        default:
            break;
        case 0:
        case 1:
        case 2:
        case 3:
            func_0204e788();
            func_0204e828(var_r8, temp_r4, 0x200);
            func_0204e898();
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            func_0204e8e0();
            func_0204e8f8(var_r8, temp_r4, 0x200);
            func_0204e95c();
            break;
    }
    func_02030ee0(&sp0, arg1);
}
