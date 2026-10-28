#include "m2c.h"

M2C_UNK func_0200dfe8(u16);
u16 func_0205dd84(s32);
extern M2C_UNK data_02086dfc;

void func_0200dbb8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
        return;
    }
    M2C_FIELD(&data_02086dfc, u16 *, 4) = func_0205dd84(M2C_FIELD(arg0, s32 *, 4));
    func_0200dfe8(M2C_FIELD(&data_02086dfc, u16 *, 4));
}
