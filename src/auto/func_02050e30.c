#include "m2c.h"

s32 func_020506dc();
extern M2C_UNK data_021b06dc;

s32 func_02050e30(u32 arg0) {
    switch (arg0) {
        case 0:
            return 0x21B4440;
        case 2:
            if ((M2C_FIELD(&data_021b06dc, s32 *, 4) == 0) || ((func_020506dc() & 3) == 1)) {
                return 0;
            }
            return 0x023E0000;
        case 3:
            return 0x1FFA7C0;
        case 4:
            return 0x27E00A0;
        case 5:
            return 0x027FF000;
        case 6:
            return 0x037F8000;
        default:
        case 1:
            return 0;
    }
}
