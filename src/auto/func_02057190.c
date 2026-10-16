#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021b24f4;

void func_02057190(s32 arg0) {
    M2C_FIELD(&data_021b24f4, s32 *, 0x24) = arg0;
}
