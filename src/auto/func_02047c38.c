#include "m2c.h"

M2C_UNK func_02046898(M2C_UNK *, void *);           /* extern */
M2C_UNK func_02046ee4(s32);                         /* extern */
extern M2C_UNK data_021aee28;

void func_02047c38(void *arg0) {
    func_02046ee4(M2C_FIELD(arg0, s32 *, 0x40));
    func_02046898(&data_021aee28, arg0);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) & ~1);
}
