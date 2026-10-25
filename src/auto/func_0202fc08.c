#include "m2c.h"
void func_0200a0f8(s32);
void func_02022b60(void *, s32);
void func_0203b96c(s32);
s32 func_0202fc08(void *arg0, u32 arg1) {
    func_0203b96c(0);
    switch (arg1) {
        case 1:
            func_0200a0f8(1);
            func_02022b60(arg0, 1);
            break;
        case 2:
            func_02022b60(arg0, 0);
            return *(s32 *) ((u8 *) arg0 + 0x24) | 0x01000000;
        case 3:
            func_0200a0f8(1);
            func_02022b60(arg0, 1);
            break;
        case 4:
            func_02022b60(arg0, 0);
            break;
    }
    return 0;
}
