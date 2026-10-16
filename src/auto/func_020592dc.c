#include "engine.h"
#include "m2c.h"

void func_02059300(M2C_UNK);
void func_0205bea4(M2C_UNK);

extern M2C_UNK data_021b3ed0;

void func_020592dc(void) {
    func_0205bea4(1);
    M2C_FIELD(&data_021b3ed0, s32 *, 0xC) = 1;
    func_02059300(1);
}
