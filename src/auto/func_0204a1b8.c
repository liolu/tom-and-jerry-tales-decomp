#include "m2c.h"

s32 func_020517f8();                                /* extern */
M2C_UNK func_0205180c(s32);                         /* extern */
M2C_UNK func_02046790(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_021af53c;

void func_0204a1b8(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = func_020517f8();
    func_02046790(&data_021af53c, arg0);
    func_0205180c(temp_r4);
}
