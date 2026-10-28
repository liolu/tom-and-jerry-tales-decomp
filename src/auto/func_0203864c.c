#include "m2c.h"

extern void func_020385b4(void *, void *, void *, void *);
extern void func_02039d0c(void *, void *, s32);
extern void VEC_Add(void *, void *, void *);
extern void VEC_Subtract(void *, void *, void *);
extern s32 VEC_DotProduct(void *, void *);
extern void VEC_Normalize(void *, void *);

s32 func_0203864c(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4, void *arg5) {
    func_020385b4(arg0, arg3, arg4, arg5);
    VEC_Subtract(arg4, arg1, arg4);
    if (VEC_DotProduct(arg4, arg4) < (s32) (((long long) arg2 * arg2 + 0x800) >> 12)) {
        VEC_Add(arg4, arg1, arg4);
        return 3;
    }
    VEC_Normalize(arg4, arg4);
    func_02039d0c(arg4, arg4, arg2);
    VEC_Add(arg4, arg1, arg4);
    return 1;
}
