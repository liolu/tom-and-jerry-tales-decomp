#include "m2c.h"

M2C_UNK func_0204cee8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021b03b2;

void func_0204cff0(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_0204cee8(&data_021b03b2);
}
