#include "m2c.h"
u32 func_02018984(s16, s16);
typedef struct {
    u8 p0[0x10];
    s32 f10;
    s32 f14;
    s32 pad[2];
    s32 f20;
    s32 f24;
    u8 p2[2];
    u16 f2A;
    u8 p3[0x10];
    u8 f3C;
    u8 f3D;
    u8 f3E;
} O;
u8 func_0201b674(O *arg0) {
    u8 t;
    u32 d = func_02018984(arg0->f10 - arg0->f20, arg0->f14 - arg0->f24);
    if (d < (u32) (arg0->f2A * arg0->f2A)) {
        t = arg0->f3C;
        if (t >= arg0->f3D && t < arg0->f3E) {
            *(s32 *) ((u8 *) arg0 + 0x1C) = 2;
        } else {
            *(s32 *) ((u8 *) arg0 + 0x1C) = 1;
        }
    } else {
        *(s32 *) ((u8 *) arg0 + 0x1C) = 3;
    }
    return *(s32 *) ((u8 *) arg0 + 0x1C);
}
