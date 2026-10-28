#include "m2c.h"

M2C_UNK disableBankForX_(M2C_UNK *);
extern M2C_UNK data_021b03b4;

void func_0204d014(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    disableBankForX_(&data_021b03b4);
}
