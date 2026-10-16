#include "m2c.h"

M2C_UNK func_02046898(M2C_UNK, void *);             /* extern */
void *func_020468f8(M2C_UNK, M2C_UNK);              /* extern */
s32 func_020517f8();                                /* extern */
M2C_UNK func_0205180c(s32);                         /* extern */

void *func_0204a128(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r0;
    void *temp_r1;

    temp_r4 = func_020517f8();
    temp_r0 = func_020468f8(arg0, 0);
    if (temp_r0 != NULL) {
        func_02046898(arg0, temp_r0);
        temp_r1                          = M2C_FIELD(temp_r0, void **, 8);
        M2C_FIELD(temp_r1, s32 *, 0x11C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x11C) - 1);
    }
    func_0205180c(temp_r4);
    return temp_r0;
}
