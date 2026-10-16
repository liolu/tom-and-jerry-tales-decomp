#include "m2c.h"

M2C_UNK func_0204cee8(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021b03bc;

void func_0204d0c4(void) {
    *(s32 *) 0x04001000 &= ~0x80000000;
    func_0204cee8(&data_021b03bc);
}
