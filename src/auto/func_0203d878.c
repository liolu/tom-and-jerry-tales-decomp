#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} S;
s32 func_0203e374(S *);
s32 func_0203e498(s32, s32);
void func_0203e5c0(s32, s32, s32, s32, s32, s32, s32);

void func_0203d878(s32 arg0, s32 arg1, s32 arg2, s32 arg3, u8 arg4, S *arg5) {
    s32 temp_r4;
    temp_r4 = func_0203e374(arg5);
    func_0203e5c0(temp_r4, arg0, arg1, arg2, arg3, arg4, func_0203e498(arg5->c, arg5->d));
}
