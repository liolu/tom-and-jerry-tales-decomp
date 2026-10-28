#include "m2c.h"

M2C_UNK func_02005c50(s32, M2C_UNK);
extern M2C_UNK data_02069c08;

void func_02005d04(M2C_UNK arg0) {
    u8 var_r5;

    var_r5 = 0x13;
    do {
        func_02005c50(*((M2C_UNK *) ((s8 *) &data_02069c08 + (var_r5 * 4))), arg0);
        var_r5 += 1;
    } while ((u32) var_r5 <= 0x2DU);
}
