#include "m2c.h"

M2C_UNK disableBankForX_(M2C_UNK *);
extern M2C_UNK data_021b03ba;

void func_0204d09c(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    disableBankForX_(&data_021b03ba);
}
