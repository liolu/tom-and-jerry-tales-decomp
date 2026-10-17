#include "m2c.h"

extern M2C_UNK data_02087470;

u8 func_0201c534(s32 arg0) {
    return *((u8 *) ((s8 *) &data_02087470 + (arg0 * 0x44)));
}
