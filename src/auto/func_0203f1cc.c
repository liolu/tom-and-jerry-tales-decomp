#include "m2c.h"

extern M2C_UNK data_0206da70;
extern M2C_UNK data_0206db28;

M2C_UNK *func_0203f1cc(s32 arg0) {
    if ((arg0 >= 0) && ((u32) arg0 < 0x17U)) {
        return *((M2C_UNK *) ((s8 *) &data_0206da70 + (arg0 * 4)));
    }
    return &data_0206db28;
}
