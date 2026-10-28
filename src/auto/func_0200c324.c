#include "m2c.h"

M2C_UNK func_02002608();
M2C_UNK func_02003f98();
M2C_UNK func_02035164();
M2C_UNK func_0203ac7c();
M2C_UNK G3X_Reset();

void func_0200c324(void) {
    G3X_Reset();
    func_02002608();
    *(s32 *) 0x04000444 = 0;
    func_0203ac7c();
    func_02003f98();
    func_02035164();
    M2C_FIELD((void *) 0x04000448, s32 *, 0)    = 1;
    M2C_FIELD((void *) 0x04000448, s32 *, 0xF8) = 1;
}
