#include "m2c.h"

void func_01ff9374(s32 a, s32 b, s32 c, s32 *d);
extern s32 *data_027e0080;

void func_01ff94e8(s32 arg0, s32 arg1, s32 *arg2) {
    arg2[0] = 0;
    arg2[1] = 0;
    arg2[2] = 0;
    func_01ff9374(arg0, arg1, *data_027e0080, arg2);
}
