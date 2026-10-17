#include "m2c.h"

M2C_UNK func_02030c30();                            /* extern */
M2C_UNK func_02051a48();                            /* extern */
M2C_UNK func_02055a8c(M2C_UNK, s16, M2C_UNK *, u16); /* extern */
M2C_UNK func_02055b8c();                            /* extern */
M2C_UNK func_02055fe0(M2C_UNK);                     /* extern */
s32 func_02055ff8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020886bc;
extern M2C_UNK data_020886f8;

void func_020308cc(s32 arg0, s16 arg1) {
    if (M2C_FIELD(&data_020886bc, s32 *, 4) == 0) {
        func_02030c30();
        M2C_FIELD(&data_020886bc, s32 *, 4) = 1;
    } else if (M2C_FIELD(&data_020886bc, s32 *, 8) != 0) {
        func_02055b8c();
        func_02055fe0(4);
        if (func_02055ff8(4) != 0) {
            func_02051a48();
        }
    }
    if (arg0 != 0) {
        func_02055a8c(0, arg1, &data_020886f8, (u16) (arg1 + 1));
        func_02055fe0(2);
        if (func_02055ff8(2) != 0) {
            func_02051a48();
        }
        M2C_FIELD(&data_020886bc, s16 *, 0) = arg1;
    } else {
        M2C_FIELD(&data_020886bc, s16 *, 0) = 1;
    }
    M2C_FIELD(&data_020886bc, s32 *, 8) = arg0;
}
