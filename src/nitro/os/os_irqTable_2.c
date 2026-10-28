#include "m2c.h"

M2C_UNK OSi_IrqCallback(M2C_UNK);

void OSi_IrqDma0(void) {
    OSi_IrqCallback(0);
}
