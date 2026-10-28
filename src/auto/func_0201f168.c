#include "m2c.h"

M2C_UNK func_02002608();
M2C_UNK func_02003f98();
M2C_UNK func_02020044();
M2C_UNK func_02020184();
M2C_UNK func_02020328();
M2C_UNK func_02035164();
M2C_UNK func_0203ac7c();
M2C_UNK G3X_Reset();
M2C_UNK func_02051868();
extern s32 data_020692ec;

void func_0201f168(void) {
    func_02051868();
    G3X_Reset();
    func_02002608();
    *(s32 *) 0x04000444 = 0;
    func_02035164();
    func_02003f98();
    func_0203ac7c();
    M2C_FIELD((void *) 0x04000448, s32 *, 0)    = 1;
    M2C_FIELD((void *) 0x04000448, s32 *, 0xF8) = 1;
    if (data_020692ec != 1) {
        func_02020328();
        return;
    }
    func_02020184();
    func_02020044();
}
