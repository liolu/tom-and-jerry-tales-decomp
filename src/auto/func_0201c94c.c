#include "m2c.h"

M2C_UNK func_0203b96c(M2C_UNK);                     /* extern */
M2C_UNK func_0203c24c(u8, s32, M2C_UNK);            /* extern */

void func_0201c94c(void) {
    u8 var_r6;

    func_0203b96c(0);
    var_r6 = 0;
    do {
        func_0203c24c(var_r6, 0, 0xC0);
        var_r6 += 1;
    } while ((u32) var_r6 < 0x14U);
}
