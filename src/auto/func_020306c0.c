#include "m2c.h"

extern M2C_UNK data_020640e8;
extern u16 data_02088450;

s32 func_020306c0(s32 arg0) {
    if (arg0 > 0xC) {
        return 0;
    }
    if ((s32) (data_02088450 & *((u16 *) ((s8 *) &data_020640e8 + (arg0 * 2)))) > 0) {
        return 1;
    }
    return 0;
}
