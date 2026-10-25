#include "m2c.h"

s32 func_01ff8000();
void func_02051f30(s32, s32, s32);

s32 func_01ff803c(s32 a, s32 b) {
    s32 r = func_01ff8000();
    func_02051f30(0, r, b);
    return r;
}
