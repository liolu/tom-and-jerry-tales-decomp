#include "m2c.h"

extern M2C_UNK data_021ae9c0;

void func_02046f40(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021ae9c0 + (arg0 * 0x24))) = arg1;
}
