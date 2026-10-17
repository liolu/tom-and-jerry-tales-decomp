#include "m2c.h"

extern M2C_UNK data_020641e0;
extern M2C_UNK data_020b8b44;

s32 func_0203cf48(s32 arg0) {
    return ((s32 *) &data_020641e0)[*((M2C_UNK *) ((s8 *) &data_020b8b44 + (arg0 * 0x28)))];
}
