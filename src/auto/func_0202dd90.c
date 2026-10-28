#include "m2c.h"

M2C_UNK func_02002608();
M2C_UNK func_02003f98();
M2C_UNK func_02022b98(M2C_UNK *, M2C_UNK);
M2C_UNK func_02035164();
M2C_UNK func_0203ac7c();
M2C_UNK G3X_Reset();
extern M2C_UNK data_020881e0;
extern M2C_UNK data_02088200;

void func_0202dd90(void) {
    if ((M2C_FIELD(&data_020881e0, u8 *, 1) == 4) && (M2C_FIELD(&data_020881e0, u8 *, 0xB) == 3)) {
        func_02022b98(&data_02088200, 3);
    }
    G3X_Reset();
    func_02002608();
    *(s32 *) 0x04000444 = 0;
    func_0203ac7c();
    func_02003f98();
    func_02035164();
    M2C_FIELD((void *) 0x04000448, s32 *, 0)    = 1;
    M2C_FIELD((void *) 0x04000448, s32 *, 0xF8) = 1;
}
