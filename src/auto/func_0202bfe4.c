#include "m2c.h"

extern M2C_UNK data_020880f8;

s32 func_0202bfe4(s32 arg0) {
    return *((M2C_UNK *) ((s8 *) &data_020880f8 + (arg0 * 4)));
}
