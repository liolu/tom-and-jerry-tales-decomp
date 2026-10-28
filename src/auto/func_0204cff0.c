#include "m2c.h"

M2C_UNK disableBankForX_(M2C_UNK *);
extern M2C_UNK data_021b03b2;

void func_0204cff0(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    disableBankForX_(&data_021b03b2);
}
