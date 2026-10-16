#include "m2c.h"

M2C_UNK func_0204fd8c(s32, void *);                 /* extern */
M2C_UNK func_020503c0();                            /* extern */
s32 func_020517f8();                                /* extern */
M2C_UNK func_0205180c(s32);                         /* extern */
extern M2C_UNK data_021b0460;

void func_020502b8(s32 arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r4 = func_020517f8();
    temp_r5 = *M2C_FIELD(&data_021b0460, void ***, 8);
    if (arg0 != 0) {
        M2C_FIELD(temp_r5, s32 *, 0x78) = arg0;
        func_0204fd8c(arg0, temp_r5);
    }
    M2C_FIELD(temp_r5, s32 *, 0x64) = 0;
    func_020503c0();
    func_0205180c(temp_r4);
}
