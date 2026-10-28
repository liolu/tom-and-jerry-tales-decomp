#include "m2c.h"

M2C_UNK func_02002608();
M2C_UNK func_02003f98();
M2C_UNK func_020301ec(M2C_UNK *, M2C_UNK);
M2C_UNK func_020301f0();
M2C_UNK func_02035164();
M2C_UNK func_02035208(M2C_UNK);
M2C_UNK func_0203ac7c();
M2C_UNK G3X_Reset();
M2C_UNK G3X_ClearFifo();
extern M2C_UNK data_0206a414;
extern M2C_UNK data_0206a424;

void func_0200acfc(void) {
    G3X_ClearFifo();
    G3X_Reset();
    func_02002608();
    *(s32 *) 0x04000444 = 0;
    func_02035208(1);
    func_020301ec(&data_0206a414, 0);
    func_0203ac7c();
    func_020301f0();
    func_02035164();
    func_020301ec(&data_0206a424, 0);
    func_02003f98();
    func_020301f0();
    M2C_FIELD((void *) 0x04000448, s32 *, 0)    = 1;
    M2C_FIELD((void *) 0x04000448, s32 *, 0xF8) = 3;
}
