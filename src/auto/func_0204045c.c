#include "m2c.h"

typedef struct {
    u8 a;
    u8 b;
    u16 c;
    u16 d;
} Ent;

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Cfg;

s32 func_020402cc(s8 *, s32);
void func_020550c8(void *, void *, s32);
void func_020550d8(void *, s32, s32);
extern Cfg data_021a7188;
extern u8 data_021a7194;
extern u8 data_021a71dc;

s32 func_0204045c(s8 *arg0, void *arg1) {
    s32 v;
    Ent e;
    s32 t;

    t = func_020402cc(arg0, data_021a7188.f0) * 2 + 0xC;
    v = 0;
    func_020550d8(&data_021a71dc, t, 0);
    func_020550c8(&data_021a71dc, &v, 2);
    if (v == 0xFFFF) {
        return 1;
    }
    if (v & 0x8000) {
        func_020550d8(&data_021a71dc, (((u32) data_021a7188.f0 >> 16) + 1) * 2 + 0xC + (v & 0x7FFF) * 6, 0);
        func_020550c8(&data_021a71dc, &e, 6);
        if (e.b == arg0[e.a]) {
            v = e.c;
        } else {
            v = e.d;
        }
    }
    func_020550d8(&data_021a7194, v * data_021a7188.f8, 0);
    func_020550c8(&data_021a7194, arg1, data_021a7188.f4);
    return 0;
}
