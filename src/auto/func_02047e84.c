#include "m2c.h"

typedef struct {
    s32 f0, f4;
    u8 p0[0x20 - 8];
    s32 f20, f24, f28, f2c;
} G;
typedef struct {
    u8 p[0x48];
    s32 f48;
} H;
extern H data_021aeef4;
extern G data_021aef3c;
extern u8 data_021aeefc[];
extern void func_02052538(u32, u32, u32, u32);
extern s32 func_02052cbc(void);
extern s32 func_02052af0(s32);
extern void func_02052c50(s32);
extern int func_02050788(void *, void *, int);
extern void func_02046e80(s32);
extern void func_02046e50(s32);
extern void func_02046ee4(s32);
extern void func_02052730(int, int, int, int);

void func_02047e84(void) {
    G *g = &data_021aef3c;
    s32 en;
    s32 r;
    if (data_021aeef4.f48 == 0) {
        return;
    }
    en = g->f2c >= 0;
    func_02052538(g->f24, g->f28, en ? 1 << g->f2c : 0, 0);
    if (en) {
        r = func_02052cbc();
        func_02052af0(1);
        func_02052c50(r);
        while (func_02050788(data_021aeefc, 0, 0) != 0) {
        }
    }
    if (g->f28 != 0) {
        func_02046e80(g->f28);
    }
    if (g->f20 != 0) {
        func_02046e50(g->f20);
    }
    if (en) {
        func_02046ee4(g->f2c);
    }
    if (g->f4 == 1) {
        func_02052730(0, 0, 0, 0);
    }
    g->f0 = 0;
}
