#include "m2c.h"

void *func_01ff8000(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_0200e2b4(void *);                      /* extern */
M2C_UNK func_020405c0(M2C_UNK, M2C_UNK *, void *, M2C_UNK); /* extern */
extern M2C_UNK data_0206a8d0;

void *func_0200e798(M2C_UNK arg0, M2C_UNK arg1) {
    void *temp_r0;
    void *temp_r5;

    temp_r5                      = func_01ff8000(arg1, 0x18);
    temp_r0                      = func_01ff8000(arg1, 0x10);
    M2C_FIELD(temp_r0, s32 *, 8) = 0;
    func_020405c0(arg0, &data_0206a8d0, temp_r5, 0x18);
    func_0200e2b4(temp_r0);
    return temp_r5;
}
