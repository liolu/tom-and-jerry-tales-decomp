#include "m2c.h"

M2C_UNK func_02051a48();                            /* extern */
M2C_UNK func_0205575c();                            /* extern */
s32 func_020557d4(M2C_UNK *);                       /* extern */
M2C_UNK func_02055868(M2C_UNK *);                   /* extern */
M2C_UNK func_02055c24(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02055fe0(M2C_UNK);                     /* extern */
s32 func_02055ff8(M2C_UNK);                         /* extern */
extern M2C_UNK data_020886bc;

void func_02030c30(void) {
    u8 sp0[8];

    func_0205575c();
    if (func_020557d4(sp0) == 0) {
        func_02051a48();
    }
    func_02055868(sp0);
    func_02055c24(7, 0x1E);
    func_02055fe0(8);
    if (func_02055ff8(8) != 0) {
        func_02051a48();
    }
    M2C_FIELD(&data_020886bc, s32 *, 4) = 1;
}
