#include "m2c.h"
typedef struct {
    s32 f0, f4, f8, fc;
    u8 pad10[0x18];
    s32 f28;
} G;
typedef struct {
    u8 pad[8];
    s32 f8, fc, f10, f14, f18, f1c, f20, f24;
} H;
extern G data_020b8b44;
extern H data_020871f4;
extern u8 data_020b8b6c[], data_0206ae38[], data_0206ae50[], data_0206e698[];
extern u8 data_0206ae1c[], data_02087210[], data_0206e6a4[];
extern u8 data_0206ae6c[], data_0206ae84[], data_0206ae9c[], data_0206aeb4[], data_0206aecc[], data_0206aee4[],
    data_0206aefc[], data_0206af18[];
extern void func_02030f40(void *, void *, void *, void *);
extern void func_0203cf6c(s32, s32, s32, s32, s32, s32, s32, s32);
extern void func_0203cff0(s32, s32, s32, s32, s32, s32, s32);
extern void func_0203d498(void *, void *, int, int, void *);
extern void func_0203dafc(void *, void *, s32);
extern void func_0203dbb0(void *, void *, s32, int);
extern void func_0203cdd0(s32);
extern void func_0203de64(s32);
extern void func_0203de98(s32);
extern void func_0203de84(s32);
extern void func_0203de74(s32);
extern void func_0203b96c(s32);
extern void func_0203bc90(void *, void *, s32, s32, s32, s32, s32, s32);

void func_02016f5c(void) {
    s32 mode;
    u32 v;
    u8 *p;
    func_02030f40(data_0206ae1c, data_02087210, data_0206e6a4, data_0206e698);
    func_0203cf6c(0, 1, 0, 0, 0xC, 0, 0, 0);
    func_0203cff0(1, 2, 0, 1, 0xD, 2, 2);
    func_0203d498(data_0206ae38, data_0206e698, 0, 0, data_020b8b6c);
    mode = data_020b8b44.fc;
    p    = data_0206ae50;
    v    = *(volatile u32 *) 0x4000000 & 0x40000000;
    if (mode == 0 || (mode == 1 && v == 0)) {
        func_0203dafc(p, data_0206e698, data_020b8b44.f0);
    } else if (v != 0 && mode == 1) {
        func_0203dbb0(p, data_0206e698, data_020b8b44.f0, 0);
    }
    func_0203cdd0(data_020b8b44.f28);
    func_0203de64(0);
    func_0203de98(data_020871f4.f1c);
    func_0203de84(0);
    func_0203de74(0);
    func_0203b96c(0);
    func_0203bc90(data_0206ae6c, data_0206e698, 0x38, 0x20, 0xC0, 2, 0, 1);
    func_0203bc90(data_0206ae84, data_0206e698, 0x39, 0x60, 0xC0, 2, 0, 1);
    func_0203bc90(data_0206ae9c, data_0206e698, 0x3A, 0xA0, 0xC0, 2, 0, 1);
    func_0203bc90(data_0206aeb4, data_0206e698, 0x3B, 0x20, 0xC0, 2, 0, 1);
    func_0203bc90(data_0206aecc, data_0206e698, 0x3C, 0x60, 0xC0, 2, 0, 1);
    func_0203bc90(data_0206aee4, data_0206e698, 0x3D, 0xA0, 0xC0, 2, 0, 1);
    func_0203bc90(data_0206aefc, data_0206e698, 0x3E, 0x20, 0xC0, 1, 0, 1);
    func_0203bc90(data_0206af18, data_0206e698, 0x3F, 0x20, 0xC0, 1, 0, 1);
    data_020871f4.f10 = 0xC0;
    data_020871f4.f14 = 0xC0;
    data_020871f4.fc  = 0xC0;
    data_020871f4.f20 = 0xC0;
    data_020871f4.f8  = 0xC0;
    data_020871f4.f24 = 0xC0;
}
