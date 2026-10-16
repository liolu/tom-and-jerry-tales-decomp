#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_021ae9bc;

void func_02046f20(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_021ae9bc + (arg0 * 0x24))) = (s32) (u16) arg1;
}
