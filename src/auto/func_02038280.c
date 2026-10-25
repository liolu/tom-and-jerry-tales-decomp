#include "m2c.h"
void func_020386ec(s32, s32, s32, s32, s32 *, s32 *);
void func_0204b94c(s32 *, s32, s32 *);
s32 func_0204b980(s32 *, s32 *);
s32 func_02038280(s32 a, s32 b, s32 c, s32 d, s32 e) {
    s32 v1[3];
    s32 v2[3];
    s32 v3[3];
    func_020386ec(a, c, d, e, v1, v2);
    func_0204b94c(v1, a, v3);
    return func_0204b980(v3, v3) - (s32) (((long long) b * b + 0x800) >> 12);
}
