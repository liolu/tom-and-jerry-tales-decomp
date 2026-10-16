#include "engine.h"
#include "m2c.h"

void func_02051b64(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02051ee8(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0206de68;

void func_0204df7c(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_0206de68 != -1) && ((u32) arg2 > 0x1CU)) {
        func_02051b64(data_0206de68, arg0, arg1 + 0x05000200, arg2);
        return;
    }
    func_02051ee8(arg0, arg1 + 0x05000200, arg2);
}
