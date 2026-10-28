#include "m2c.h"

M2C_UNK func_0203f1f4(u16);

void func_0203f2ec(void *arg0) {
    M2C_UNK (*temp_r1_2)(arg0);
    u16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, u16 *, 2);
    if ((temp_r1 != 0) && (temp_r1 != 0xF)) {
        func_0203f1f4(temp_r1);
        return;
    }
    temp_r1_2 = M2C_FIELD(arg0, M2C_UNK(**)(), 0x20);
    if (temp_r1_2 == NULL) {
        return;
    }
    temp_r1_2(arg0);
}
