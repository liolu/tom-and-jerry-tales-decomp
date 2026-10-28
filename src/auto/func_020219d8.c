#include "m2c.h"

M2C_UNK func_02021ab4();
M2C_UNK func_02021b28();
M2C_UNK func_02021b2c();
M2C_UNK func_02021b30();
M2C_UNK func_02021bdc();
M2C_UNK func_02021c60();
M2C_UNK func_02021ce4();
M2C_UNK func_02021d68();
M2C_UNK func_0204cfc8();
M2C_UNK func_0204cfdc();
M2C_UNK func_0204cff0();
M2C_UNK func_0204d014();
M2C_UNK func_0204d038();
M2C_UNK func_0204d04c();
M2C_UNK func_0204d074();
M2C_UNK func_0204d088();
M2C_UNK func_0204d09c();
M2C_UNK func_0204d0c4();
M2C_UNK func_02051868();
extern u32 data_0206b820;

void func_020219d8(u32 arg0) {
    if (data_0206b820 == arg0) {
        return;
    }
    func_02051868();
    func_0204d038();
    func_0204cfc8();
    func_0204cfdc();
    func_0204d04c();
    func_0204d074();
    func_0204d088();
    func_0204d09c();
    func_0204d0c4();
    func_0204d014();
    func_0204cff0();
    M2C_FIELD((void *) 0x04000000, s32 *, 0)      = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0) & ~0xE000);
    M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) = (s32) (M2C_FIELD((void *) 0x04000000, s32 *, 0x1000) & ~0xE000);
    switch (arg0) {
        default:
            break;
        case 0:
            func_02021ab4();
            break;
        case 1:
            func_02021b28();
            break;
        case 2:
            func_02021b2c();
            break;
        case 3:
            func_02021b30();
            break;
        case 4:
            func_02021bdc();
            break;
        case 5:
            func_02021c60();
            break;
        case 6:
            func_02021ce4();
            break;
        case 7:
            func_02021d68();
            break;
    }
    data_0206b820 = arg0;
}
