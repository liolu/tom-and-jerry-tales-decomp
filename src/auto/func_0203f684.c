#include "m2c.h"
extern s32 data_020ba3e0[];
extern u32 data_020ba280[];
extern void *func_020482d4(s32);
extern void func_02046fec(s32 *, s32);
void func_0203f684(s32 a, s32 b) {
    if (data_020ba3e0[1] == 0) {
        return;
    }
    if (func_020482d4(a) == 0) {
        return;
    }
    func_02046fec((void *) &data_020ba280[88], b);
}
