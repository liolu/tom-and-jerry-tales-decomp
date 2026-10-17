#include "m2c.h"

extern M2C_UNK data_0206e6d4;

u8 func_0201d6cc(s32 arg0) {
    switch (arg0) {                                 /* irregular */
        case 1:
            return (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x54) << 0xB) >> 0x1F);
        case 0:
            return 1U;
        case 2:
            return (u8) ((u32) (M2C_FIELD(&data_0206e6d4, s32 *, 0x54) << 0xA) >> 0x1F);
        default:
            return 0U;
    }
}
