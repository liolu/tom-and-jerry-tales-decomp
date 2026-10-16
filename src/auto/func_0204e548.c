#include "m2c.h"

s32 func_0204d47c();                                /* extern */
M2C_UNK func_02051af4(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_02051f18(M2C_UNK, s32, u32);           /* extern */
extern s32 data_0206de68;

void func_0204e548(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_0204d47c();
    if ((data_0206de68 != -1) && (arg2 > 0x30U)) {
        func_02051af4(data_0206de68, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_02051f18(arg0, temp_ip + arg1, arg2);
}
