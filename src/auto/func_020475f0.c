#include "m2c.h"

M2C_UNK func_02046834();   /* extern */
void *func_020468f8();            /* extern */
extern M2C_UNK data_021ae558;

void func_020475f0(void *arg0) {
    void *var_r1;

    var_r1 = func_020468f8(&data_021ae558, 0);
    if (var_r1 != NULL) {
    loop_2:
        if ((u32) M2C_FIELD(arg0, u8 *, 0x3D) >= (u32) M2C_FIELD(var_r1, u8 *, 0x3D)) {
            var_r1 = func_020468f8(&data_021ae558);
            if (var_r1 != NULL) {
                goto loop_2;
            }
        }
    }
    func_02046834(&data_021ae558, var_r1, arg0);
}
