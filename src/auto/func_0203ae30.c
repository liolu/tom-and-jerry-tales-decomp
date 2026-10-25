#include "m2c.h"
extern u8 data_02064104[];
extern u8 data_02064110[];
extern s32 func_0203afd8(s32, s32);
extern void func_0203a5a0(s32, void *, void *, s32, s32, s32, s32);
void func_0203ae30(s32 arg0, s32 arg1, s32 arg2) {
    func_0203a5a0(func_0203afd8(arg0, arg2), data_02064110, data_02064104, 0, arg1, 0, arg2);
}
