#include "m2c.h"
extern u8 data_0206e6d4[];
u8 func_0201d654(u32 arg0) {
    switch (arg0) {
        case 0:
            return 1;
        case 1:
            return (u32) (*(s32 *) (data_0206e6d4 + 0x54) << 14) >> 31;
        case 2:
            return (u32) (*(s32 *) (data_0206e6d4 + 0x54) << 13) >> 31;
        case 3:
            return (u32) (*(s32 *) (data_0206e6d4 + 0x54) << 12) >> 31;
        default:
            return 0;
    }
}
