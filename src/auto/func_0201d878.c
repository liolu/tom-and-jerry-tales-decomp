#include "m2c.h"
extern u8 data_0206e6d4[];
u32 func_0201d878(s32 arg0) {
    switch (arg0) {
        case 0:
            return 1;
        case 1:
            return (u32) (data_0206e6d4[0x58] << 31) >> 31;
        case 2:
            return (u8) ((u32) (*(s32 *) (data_0206e6d4 + 0x54) * 2) >> 31);
        default:
            return 0;
    }
}
