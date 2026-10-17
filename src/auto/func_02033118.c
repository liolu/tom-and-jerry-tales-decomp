#include "m2c.h"

extern M2C_UNK data_0208e194;

s32 func_02033118(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_0208e194 + (arg0 * 0x18)));
}
