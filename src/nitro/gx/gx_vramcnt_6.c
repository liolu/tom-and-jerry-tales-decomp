#include "m2c.h"

M2C_UNK resetBankForX_(M2C_UNK *);
extern M2C_UNK data_021b03ae;

void GX_ResetBankForTexPltt(void) {
    resetBankForX_(&data_021b03ae);
}
