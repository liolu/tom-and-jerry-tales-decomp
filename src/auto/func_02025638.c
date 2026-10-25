#include "m2c.h"

void func_02022b60(void *, s32);

s32 func_02025638(void *arg0, u32 arg1) {
    switch (arg1) {
        case 1:
            func_02022b60(arg0, 1);
            return *(s32 *) ((u8 *) arg0 + 0x24) | 0x01000000;
        case 2:
            func_02022b60(arg0, 0);
            break;
        case 3:
            func_02022b60(arg0, 1);
            break;
        case 4:
            func_02022b60(arg0, 0);
            break;
    }
    return 0;
}
