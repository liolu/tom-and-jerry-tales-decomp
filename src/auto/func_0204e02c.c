#include "engine.h"
#include "m2c.h"

void func_02051af4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02051f18(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0206de68;

void func_0204e02c(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0206de68 != -1) && ((u32) arg2 > 0x30U)) {
        func_02051af4(data_0206de68, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_02051f18(arg0, arg1 + 0x07000000, arg2);
}
