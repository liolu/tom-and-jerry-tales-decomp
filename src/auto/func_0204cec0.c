#include "m2c.h"

M2C_UNK func_0204ce40(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021b03ba;

void func_0204cec0(void) {
    *(s32 *) 0x04001000 &= ~0x40000000;
    func_0204ce40(&data_021b03ba);
}
