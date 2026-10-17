#include "m2c.h"

extern M2C_UNK data_020640e8;
extern M2C_UNK data_02088450;

s32 func_020306fc(s32 arg0) {
    if (arg0 > 0xC) {
        return 0;
    }
    if ((s32) (M2C_FIELD(&data_02088450, u16 *, 6) & *((u16 *) ((s8 *) &data_020640e8 + (arg0 * 2)))) > 0) {
        return 1;
    }
    return 0;
}
