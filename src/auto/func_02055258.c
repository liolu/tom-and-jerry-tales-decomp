#include "m2c.h"

M2C_UNK func_020575c0(u16);                         /* extern */
M2C_UNK func_020575dc(u16);                         /* extern */
extern s32 data_021b23dc;

s32 func_02055258(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 9:
            func_020575c0((u16) data_021b23dc);
            return 0;
        case 10:
            func_020575dc((u16) data_021b23dc);
            return 0;
        case 1:
            return 4;
        default:
            return 8;
    }
}
