#include "m2c.h"

s32 func_02038400(s32 *, s32, void *, s32 *, s32, void *);
s32 func_02039164(void *, void *, s32, s32, s32);
void VEC_Add(s32, void *, s32 *);

s16 func_020371cc(u8 *arg0, u8 *arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 sp14[3];
    s32 sp8[3];
    VEC_Add(*(s32 *) (arg0 + 4), arg0 + 0x14, sp14);
    VEC_Add(*(s32 *) (arg1 + 4), arg1 + 0x14, sp8);
    if (func_02038400(sp14, *(s32 *) arg0, arg0 + 0x24, sp8, *(s32 *) arg1, arg1 + 0x24) >= 0) {
        return 0;
    }
    return func_02039164(arg0, arg1, arg2, arg3, arg4);
}
