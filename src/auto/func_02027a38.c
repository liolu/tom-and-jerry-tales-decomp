#include "m2c.h"

M2C_UNK func_0203b96c(M2C_UNK);
M2C_UNK func_0203c24c(u8, u8, M2C_UNK);
M2C_UNK func_0203d0d8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, M2C_UNK *);
extern M2C_UNK data_0206bd88;
extern M2C_UNK data_0206bd98;
extern M2C_UNK data_020b8b6c;

void func_02027a38(s32 arg0) {
    u8 var_r7;

    if (arg0 != 0) {
        func_0203b96c(0);
        var_r7 = 0;
        do {
            func_0203c24c(((s8 *) &data_0206bd88)[var_r7], M2C_FIELD(&data_0206bd98, u8 *, 1), 0xC0);
            var_r7 += 1;
        } while ((u32) var_r7 < 0xDU);
    }
    if (arg0 != 0) {
        return;
    }
    func_0203d0d8(0x40, 0x1B, 0x80, 0x21, 0, 0, &data_020b8b6c);
}
