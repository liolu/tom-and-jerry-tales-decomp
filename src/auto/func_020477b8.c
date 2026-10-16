#include "m2c.h"

M2C_UNK func_02046898(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020475a0(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020475f0(void *);                      /* extern */
extern M2C_UNK data_021ae558;

void func_020477b8(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_02046898(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_02046898(&data_021ae558, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_020475a0(temp_r4, arg0);
    }
    func_020475f0(arg0);
}
