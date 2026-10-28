#include "m2c.h"

M2C_UNK func_0200a014(s32);
M2C_UNK func_0200a064(M2C_UNK);
s32 func_0200a07c();
M2C_UNK func_0203f5e4();
M2C_UNK func_0203f60c(s32);
M2C_UNK func_0203f930(M2C_UNK);
M2C_UNK func_0203f948();
M2C_UNK func_0203fa64(M2C_UNK);

void func_0200a0a0(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0200a07c();
    func_0203f930(0);
    func_0203f948();
    func_0203f5e4();
    func_0200a064(0);
    if (arg0 >= 0) {
        func_0200a014(temp_r4);
        func_0200a014(8);
        func_0203f60c(temp_r4);
        return;
    }
    func_0203fa64(0);
}
