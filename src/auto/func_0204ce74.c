#include "m2c.h"

M2C_UNK func_0204ce40(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021b03b2;

void func_0204ce74(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_0204ce40(&data_021b03b2);
}
