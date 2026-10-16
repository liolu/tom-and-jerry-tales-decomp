#include "m2c.h"

M2C_UNK func_0204fe38(s32, void *);                 /* extern */
M2C_UNK func_0204ff1c(void *);                      /* extern */
M2C_UNK func_02050308(void *);                      /* extern */
M2C_UNK func_020503c0();                            /* extern */
M2C_UNK func_02050568();                            /* extern */
M2C_UNK func_0205059c();                            /* extern */
M2C_UNK func_020509c0(void *);                      /* extern */
M2C_UNK func_02051a48();                            /* extern */
extern M2C_UNK data_021b0460;

void func_0205025c(void) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = *M2C_FIELD(&data_021b0460, void ***, 8);
    func_02050568();
    func_020509c0(temp_r4);
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x78);
    if (temp_r0 != 0) {
        func_0204fe38(temp_r0, temp_r4);
    }
    func_0204ff1c(temp_r4);
    M2C_FIELD(temp_r4, s32 *, 0x64) = 2;
    func_02050308(temp_r4 + 0x9C);
    func_0205059c();
    func_020503c0();
    func_02051a48();
}
