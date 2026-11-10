/* compiler: 2.0/sp1p5 -pragma "opt_propagation off" */
#include "m2c.h"
typedef struct {
    s32 f0;
    u8 pad[0x24];
    s32 f28;
} G;
extern s32 data_0206e698[];
extern G data_020b8b44;
extern u8 data_020b8b6c[];
extern u8 data_0206ad58[], data_0206ad70[], data_0206ad84[], data_0206e6a4[];
extern u8 *data_0206e690;
extern s32 data_0206dcb8;
void func_0203b96c(s32);
void func_0203b980(s32);
void func_0203cd2c(void);
void func_0203cf6c(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0203cff0(s32, s32, s32, s32, s32, s32, s32);
void NNS_SndSetMasterVolume(s32);
void func_02046ffc(s32);
void GXx_SetMasterBrightness_(void *, s32);
void func_0203bb80(void);
void Card_HaltAfterRemoval(void);
void func_02051868(void);
void OS_Terminate(void);
void func_0203d098(void *);
void func_0203d498(void *, void *, s32, s32, void *);
void func_0203cd5c(s32);
void func_02030f40(void *, void *, void *, void *);
s8 *func_0204221c(s32);
s32 func_0203d8d8(s8 *, u8 *);
u16 func_0203d740(s8 *, u16, u16, u8 *, u8, s32, void *);

void func_02016a94(s32 err) {
    u8 *font;
    s8 *s;
    u16 y;
    u16 x;
    func_0203b96c(1);
    func_0203b980(1);
    func_0203b96c(0);
    func_0203b980(1);
    data_0206e698[1] = data_0206e698[0];
    func_0203cd2c();
    func_0203cf6c(1, 2, 0, 0, 0xC, 0, 0, 0);
    func_0203cff0(0, 1, 0, 1, 0xD, 2, 1);
    if (err == -2) {
        return;
    }
    if (err == -1) {
        NNS_SndSetMasterVolume(0);
        func_02046ffc(0);
        GXx_SetMasterBrightness_((void *) 0x400006c, -16);
        func_0203b96c(1);
        func_0203bb80();
        GXx_SetMasterBrightness_((void *) 0x400106c, 0);
        Card_HaltAfterRemoval();
        func_02051868();
        OS_Terminate();
        return;
    }
    if (err != -3) {
        return;
    }
    NNS_SndSetMasterVolume(0);
    func_02046ffc(0);
    GXx_SetMasterBrightness_((void *) 0x400006c, -16);
    func_0203d098(&data_020b8b44);
    func_0203d098(data_020b8b6c);
    func_0203b96c(1);
    func_0203b980(0);
    func_0203b96c(0);
    func_0203b980(0);
    {
        void *a = data_0206ad58;
        func_0203d498(a, data_0206e698, 0, 1, &data_020b8b44);
    }
    func_0203cd5c(data_020b8b44.f0);
    func_0203cd5c(data_020b8b44.f28);
    if (data_0206dcb8 == 2) {
        func_02030f40(data_0206ad70, &data_0206e690, data_0206e6a4, data_0206e698);
    } else {
        func_02030f40(data_0206ad84, &data_0206e690, data_0206e6a4, data_0206e698);
    }
    font = data_0206e690;
    s    = func_0204221c(6);
    y    = 0x4B - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
    x    = 0x80 - (func_0203d8d8(s, font) >> 1);
    func_0203d740(s, x, y, font, 0, 0, data_020b8b6c);
    font = data_0206e690;
    s    = func_0204221c(7);
    y    = 0x64 - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
    x    = 0x80 - (func_0203d8d8(s, font) >> 1);
    func_0203d740(s, x, y, font, 0, 0, data_020b8b6c);
    font = data_0206e690;
    s    = func_0204221c(8);
    y    = 0x7D - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
    x    = 0x80 - (func_0203d8d8(s, font) >> 1);
    func_0203d740(s, x, y, font, 0, 0, data_020b8b6c);
    GXx_SetMasterBrightness_((void *) 0x400106c, 0);
    GXx_SetMasterBrightness_((void *) 0x400006c, 0);
    Card_HaltAfterRemoval();
    func_02051868();
    OS_Terminate();
}
