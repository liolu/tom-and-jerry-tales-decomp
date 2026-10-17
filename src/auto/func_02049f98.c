#include "m2c.h"

M2C_UNK func_02049c14(void *);                      /* extern */
M2C_UNK func_0204a034();                            /* extern */
M2C_UNK func_0204a0b8(M2C_UNK *, void *);           /* extern */
extern M2C_UNK data_021af530;
extern M2C_UNK data_021afbc0;

void func_02049f98(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    func_0204a034(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    func_0204a0b8(&data_021afbc0, arg0);
    if (M2C_FIELD(&data_021af530, s32 *, 4) != 0) {
        func_0204a0b8(M2C_FIELD(&data_021af530, s32 *, 4) + 0x4E0, arg0);
    }
    func_02049c14(arg0);
}
