#include "m2c.h"
s32 func_02003058(s32, void *, s32, s32, s32);
void func_020036bc(void *, s32);
void func_02035694(void *, s32);
void func_02036508(s32, s32);
void func_02003738(u8 *arg0, s32 arg1, s32 arg2) {
    *(s32 *) (arg0 + 0x28) = *(s32 *) (arg0 + 0x24);
    *(s32 *) (arg0 + 0x24) = arg1;
    func_020036bc(arg0, 0);
    func_02036508(func_02003058(2, arg0, arg1, 0, 0), *(s32 *) (arg0 + 0x108));
    func_02035694(arg0 + 0x104, arg2);
}
