#include "m2c.h"

M2C_UNK OSi_IrqCallback(M2C_UNK);

void OSi_IrqDma1(void) {
    OSi_IrqCallback(1);
}

void OSi_IrqDma2(void) {
    OSi_IrqCallback(2);
}
