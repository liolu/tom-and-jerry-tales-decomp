#include "m2c.h"

extern s32 data_020692ec;
extern M2C_UNK data_0206b918;
extern s32 data_0206e684;
extern M2C_UNK data_020877d0;

void func_020259d4(void) {
    switch (M2C_FIELD(&data_020877d0, u32 *, 0x1C)) {
        default:
            break;
        case 0:
            data_020692ec = 1;
            break;
        case 3:
            data_020692ec = 3;
            break;
        case 1:
            data_020692ec = 2;
            break;
        case 2:
            data_020692ec = 4;
            break;
    }
    if (M2C_FIELD(&data_0206b918, s32 *, 4) == 6) {
        data_0206e684 = 1;
    }
}
