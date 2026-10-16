#include "m2c.h"

extern M2C_UNK data_021ae9ac;

u16 func_02047060(s32 arg0) {
    return *((u16 *) ((s8 *) &data_021ae9ac + (arg0 * 0x24)));
}
