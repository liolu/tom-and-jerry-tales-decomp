#include "m2c.h"

M2C_UNK func_020368fc(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK sprintf(M2C_UNK *, M2C_UNK *, M2C_UNK);
extern M2C_UNK data_0206dc7c;

s32 func_02041bf0(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 sp0[64];

    sprintf(sp0, &data_0206dc7c, arg0);
    func_020368fc(sp0, arg1, arg2);
    return 0;
}
