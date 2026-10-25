#include "m2c.h"

typedef struct {
    s32 f0, f4, f8, fc;
} G;
extern G data_020b8b44;
extern u8 data_020b8b6c[], data_0206ae38[], data_0206ae50[], data_0206e698[];
extern u32 data_020692ec;
extern void func_020116d8(void);
extern void func_0203d498(void *, void *, int, int, void *);
extern void func_0203dafc(void *, void *, s32);
extern void func_0203dbb0(void *, void *, s32, int);

void func_020187c0(void) {
    s32 mode;
    u32 v;
    u8 *p;
    func_0203d498(data_0206ae38, data_0206e698, 0, 0, data_020b8b6c);
    mode = data_020b8b44.fc;
    v    = *(volatile u32 *) 0x4000000 & 0x40000000;
    p    = data_0206ae50;
    if (mode == 0 || (mode == 1 && v == 0)) {
        func_0203dafc(p, data_0206e698, data_020b8b44.f0);
    } else if (v != 0 && mode == 1) {
        func_0203dbb0(p, data_0206e698, data_020b8b44.f0, 0);
    }
    if (data_020692ec - 1 <= 3) {
        func_020116d8();
    }
}
