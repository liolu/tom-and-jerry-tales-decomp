#include "m2c.h"
typedef struct {
    s32 magic;
    u8 pad[0x50 - 4];
} Slot;
typedef struct {
    u16 f0;
    u16 fail;
    u16 bad;
    u16 pad;
} Head;
typedef struct {
    Head h;
    Slot s0;
    Slot s1;
    Slot s2;
} Save;
extern Head data_02087090;
extern Slot data_02087098;
extern Slot data_020870e8;
extern Slot data_02087138;
typedef struct {
    u32 a;
    u32 b;
} Hdr;
s32 func_020164b8(void);
void func_020168f8(u8);
s32 func_0203eb58(u32, u32, void *);
s32 func_0203eff0(u32, u32, void *, s32 *);
s32 func_0201666c(void) {
    Hdr hdr;
    s32 tmp;
    s32 r;
    s32 i;
    data_02087090.fail = 0;
    data_02087090.bad  = 0;
    r                  = func_020164b8();
    if (r == -1) {
        return -1;
    }
    if (r == 1) {
        for (i = 0; i < 3; i++) {
            func_020168f8(i);
        }
        data_02087090.fail = 0;
        data_02087090.bad  = 0;
        hdr.a              = 0xDEADC0DE;
        hdr.b              = 0x029A6666;
        return -(func_0203eb58(0x1F8, 8, &hdr) != 0);
    }
    r = func_0203eff0(0, 0x50, &data_02087098, &tmp);
    if (r == 2) {
        func_020168f8(0);
        data_02087090.fail |= 1;
    } else if (((Save *) &data_02087090)->s0.magic != 0x54414A01 && ((Save *) &data_02087090)->s0.magic != 0x4E4F4E45) {
        func_020168f8(0);
    } else if (r == 0 && ((Save *) &data_02087090)->s0.magic != 0x4E4F4E45) {
        data_02087090.bad |= 1;
    }
    if (r == 1) {
        return -1;
    }
    r = func_0203eff0(0xA8, 0x50, &data_020870e8, &tmp);
    if (r == 2) {
        func_020168f8(1);
        data_02087090.fail |= 2;
    } else if (((Save *) &data_02087090)->s1.magic != 0x54414A02 && ((Save *) &data_02087090)->s1.magic != 0x4E4F4E45) {
        func_020168f8(1);
    } else if (r == 0 && ((Save *) &data_02087090)->s1.magic != 0x4E4F4E45) {
        data_02087090.bad |= 2;
    }
    if (r == 1) {
        return -1;
    }
    r = func_0203eff0(0x150, 0x50, &data_02087138, &tmp);
    if (r == 2) {
        func_020168f8(2);
        data_02087090.fail |= 4;
    } else if (((Save *) &data_02087090)->s2.magic != 0x54414A03 && ((Save *) &data_02087090)->s2.magic != 0x4E4F4E45) {
        func_020168f8(2);
    } else if (r == 0 && ((Save *) &data_02087090)->s2.magic != 0x4E4F4E45) {
        data_02087090.bad |= 4;
    }
    if (r == 1) {
        return -1;
    }
    return 1;
}
