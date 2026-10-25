#include "m2c.h"

extern void func_020385b4(void *, void *, void *, void *);
extern void func_02039d0c(void *, void *, s32);
extern void func_0204b918(void *, void *, void *);
extern void func_0204b94c(void *, void *, void *);
extern s32 func_0204b980(void *, void *);
extern void func_0204baa0(void *, void *);

s32 func_0203864c(void *arg0, void *arg1, s32 arg2, void *arg3, void *arg4, void *arg5) {
    func_020385b4(arg0, arg3, arg4, arg5);
    func_0204b94c(arg4, arg1, arg4);
    if (func_0204b980(arg4, arg4) < (s32) (((long long) arg2 * arg2 + 0x800) >> 12)) {
        func_0204b918(arg4, arg1, arg4);
        return 3;
    }
    func_0204baa0(arg4, arg4);
    func_02039d0c(arg4, arg4, arg2);
    func_0204b918(arg4, arg1, arg4);
    return 1;
}
