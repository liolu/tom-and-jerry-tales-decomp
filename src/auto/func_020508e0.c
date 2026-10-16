#include "m2c.h"

M2C_UNK func_020502b8(void *);                      /* extern */
M2C_UNK func_02050a70(void *, void *);              /* extern */
s32 func_020517f8();                                /* extern */
M2C_UNK func_0205180c(s32);                         /* extern */
extern M2C_UNK data_021b0484;

void func_020508e0(void *arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r7;

    temp_r4 = func_020517f8();
    temp_r7 = M2C_FIELD(&data_021b0484, void **, 4);
loop_1:
    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if (temp_r0 == NULL) {
        M2C_FIELD(arg0, void **, 8) = temp_r7;
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
        func_02050a70(temp_r7, arg0);
    } else if (temp_r0 == temp_r7) {
        M2C_FIELD(arg0, s32 *, 0xC) = (s32) (M2C_FIELD(arg0, s32 *, 0xC) + 1);
    } else {
        M2C_FIELD(temp_r7, void **, 0x84) = arg0;
        func_020502b8(arg0);
        M2C_FIELD(temp_r7, void **, 0x84) = NULL;
        goto loop_1;
    }
    func_0205180c(temp_r4);
}
