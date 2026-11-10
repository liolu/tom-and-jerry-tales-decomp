#include "m2c.h"
extern s32 data_0206e6a4[];
extern s32 data_0206e698[];
extern u8 data_020b8b44[];
extern u8 data_020b8b6c[];
extern u8 *data_0206e688;
extern s8 data_0206e628[], data_0206e5e8[], data_0206e5a8[];
void func_0203f6c0(void);
void func_020222b8(s32, s32, s32);
void func_0204d038(void);
void func_0204cfc8(void);
void func_0204cfdc(void);
void func_0204d04c(void);
void func_0204d074(void);
void func_0204d088(void);
void func_0204d09c(void);
void func_0204d0c4(void);
void func_0204d014(void);
void func_0204cff0(void);
void func_0204c1f8(s32, s32, s32);
void func_0204c260(s32);
void GX_SetBankForBG(s32);
void GX_SetBankForSubBG(s32);
void func_0203cd2c(void);
void func_0203cf6c(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0203d098(void *);
s32 func_0203d8d8(s8 *, u8 *);
u16 func_0203d740(s8 *, u16, u16, u8 *, u8, s32, void *);

static inline void setMain(u32 p) {
    (*(volatile u32 *) 0x04000000) = ((*(volatile u32 *) 0x04000000) & ~0x1F00) | (p << 8);
}
static inline void setSub(u32 p) {
    (*(volatile u32 *) 0x04001000) = ((*(volatile u32 *) 0x04001000) & ~0x1F00) | (p << 8);
}

void func_02000e94(void) {
    u8 *font;
    u16 i;
    volatile u16 *pal;
    u16 y;
    u16 x;
    data_0206e6a4[1] = data_0206e6a4[0];
    data_0206e698[1] = data_0206e698[0];
    func_0203f6c0();
    func_020222b8(-16, 0, 3);
    func_0204d038();
    func_0204cfc8();
    func_0204cfdc();
    func_0204d04c();
    func_0204d074();
    func_0204d088();
    func_0204d09c();
    func_0204d0c4();
    func_0204d014();
    func_0204cff0();
    *(volatile u32 *) 0x4000000 &= ~0xE000;
    *(volatile u32 *) 0x4001000 &= ~0xE000;
    *(volatile u16 *) 0x4000304 |= 0x8000;
    func_0204c1f8(1, 0, 0);
    func_0204c260(0);
    GX_SetBankForBG(1);
    GX_SetBankForSubBG(4);
    func_0203cd2c();
    func_0203cf6c(0, 0, 0, 0, 0xC, 0, 0, 0);
    func_0203cf6c(1, 4, 0, 0, 0xC, 0, 0, 0);
    setMain(1);
    {
        u32 t                        = *(volatile u32 *) 0x04001000;
        i                            = 0;
        *(volatile u32 *) 0x04001000 = (t & ~0x1F00) | 0x100;
    }
    *(volatile u16 *) 0x4000050 = 0;
    *(volatile u16 *) 0x4001050 = 0;
    for (; i < 0x100; i++) {
        ((volatile u16 *) 0x5000000)[i] = 0;
        ((volatile u16 *) 0x5000400)[i] = 0;
    }
    pal    = (volatile u16 *) 0x5000000;
    pal[0] = 0;
    pal[1] = 0;
    pal[2] = 0x5AD6;
    pal[3] = 0x7FFF;
    pal    = (volatile u16 *) 0x5000400;
    pal[0] = 0;
    pal[1] = 0;
    pal[2] = 0x5AD6;
    pal[3] = 0x7FFF;
    func_0203d098(data_020b8b44);
    func_0203d098(data_020b8b6c);
    font = data_0206e688;
    y    = 0x60 - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
    x    = 0x80 - (func_0203d8d8(data_0206e628, font) >> 1);
    func_0203d740(data_0206e628, x, y, font, 0, 0, data_020b8b44);
    font = data_0206e688;
    y    = 0x5A - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
    x    = 0x80 - (func_0203d8d8(data_0206e5e8, font) >> 1);
    func_0203d740(data_0206e5e8, x, y, font, 0, 0, data_020b8b6c);
    font = data_0206e688;
    y    = 0x66 - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
    x    = 0x80 - (func_0203d8d8(data_0206e5a8, font) >> 1);
    func_0203d740(data_0206e5a8, x, y, font, 0, 0, data_020b8b6c);
    func_020222b8(0, 0, 3);
}
