#include "m2c.h"

M2C_UNK func_02001a7c();
extern M2C_UNK data_0206e9e8;

void func_02001b58(void) {
    func_02001a7c();
    M2C_FIELD(M2C_FIELD(&data_0206e9e8, void **, 0x10), s32 *, 0x28) = -0x1000;
}
