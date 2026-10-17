#include "m2c.h"

extern M2C_UNK data_0206e6d4;

u8 func_0201d7a4(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 0:
            return 1U;
        case 1:
            return (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x54) << 6) >> 0x1F);
        default:
            return 0U;
    }
}
