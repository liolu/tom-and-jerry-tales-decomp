#include "m2c.h"

M2C_UNK func_02009914();                            /* extern */

void func_020098e4(void *arg0) {
    void *temp_r3;

    temp_r3                      = M2C_FIELD(arg0, void **, 0xB8);
    M2C_FIELD(temp_r3, s16 *, 0) = (s16) (M2C_FIELD(temp_r3, s16 *, 0) + M2C_FIELD(temp_r3, s16 *, 2));
    if ((s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0xB8), s16 *, 0) > 0) {
        return;
    }
    func_02009914(arg0);
}
