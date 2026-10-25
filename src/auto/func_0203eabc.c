#include "m2c.h"

s32 func_0204f32c(void);
void func_02051a48(void);
s32 func_02057590(void);
s32 func_020575ac(void);
void func_020575f8(u16);
void func_02057608(u16);
void func_02057b54(s32);
void func_020582cc(void);
extern u8 data_0206d4e0[];

s32 func_0203eabc(void) {
    s32 temp_r0;
    if (func_02057590() == 0) {
        *(s32 *) (data_0206d4e0 + 4) = 0;
        return 0U;
    }
    func_020582cc();
    if (func_020575ac() != 0) {
        *(s32 *) (data_0206d4e0 + 4) = 0;
        return 0U;
    }
    temp_r0 = func_0204f32c();
    if (temp_r0 == -3) {
        func_02051a48();
    }
    func_020575f8(temp_r0);
    func_02057b54(0x901);
    func_02057608(temp_r0);
    return temp_r0;
}
