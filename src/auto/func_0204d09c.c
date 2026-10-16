#include "m2c.h"

M2C_UNK func_0204cee8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021b03ba;

void func_0204d09c(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_0204cee8(&data_021b03ba);
}
