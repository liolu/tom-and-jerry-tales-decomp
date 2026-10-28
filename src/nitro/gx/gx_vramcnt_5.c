#include "m2c.h"

M2C_UNK resetBankForX_(M2C_UNK *);
extern M2C_UNK data_021b03b2;
extern M2C_UNK data_021b03ac;

void GX_ResetBankForBGExtPltt(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    resetBankForX_(&data_021b03b2);
}

void GX_ResetBankForTex(void) {
    resetBankForX_(&data_021b03ac);
}
