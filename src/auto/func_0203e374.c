#include "m2c.h"
typedef struct {
    s32 f0;
    s32 p4;
    s32 f8;
    u8 pad[0x14];
    s32 f20;
    s32 f24;
} O;
extern s32 func_0203d068(s32);
extern s32 func_0203d080(s32);
extern s32 func_0203df68(s32);
extern s32 func_0203dfb4(s32);
s32 func_0203e374(O *arg0) {
    s32 t = arg0->f8;
    if (func_0203dfb4(t) != 0) {
        if (func_0203df68(t) != 0) {
            return arg0->f24;
        }
        return func_0203d068(arg0->f0);
    }
    if (func_0203df68(t) != 0) {
        return arg0->f20;
    }
    return func_0203d080(arg0->f0);
}
