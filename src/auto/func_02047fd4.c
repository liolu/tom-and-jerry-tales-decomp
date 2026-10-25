#include "m2c.h"

typedef struct {
    u8 p0[0xC];
    s32 a;
    s32 b;
    s32 c;
    u8 p1[4];
    s32 d;
    u8 p2[4];
    s32 e;
    s32 f;
    s32 g;
} G;
typedef struct {
    u8 p[0x48];
    s32 f;
} H;
void func_02050b24(s32, s32);
void func_02051f04(s32, s32, s32);
void func_02052510(s32, s32, s32, s32);
extern H data_021aeef4;
extern G data_021aef3c;

void func_02047fd4(void) {
    s32 var_r2;
    G *g = &data_021aef3c;
    if (data_021aeef4.f == 0) {
        return;
    }
    g->d = 0;
    func_02051f04(0, g->a, g->c);
    func_02051f04(0, g->b, g->c);
    func_02050b24(g->a, g->c);
    func_02050b24(g->b, g->c);
    if (g->g >= 0) {
        var_r2 = 1 << g->g;
    } else {
        var_r2 = 0;
    }
    func_02052510(g->e, g->f, var_r2, 0);
}
