/* compiler: 2.0/sp1p5 -pragma "opt_propagation off" */
#include "m2c.h"
typedef struct {
    u8 b[0x28];
} Obj;
extern Obj data_020b8b44[];
extern Obj data_020b8bbc[];
extern Obj data_020b8b94[];
extern u8 data_0206ccb0[];
extern u8 data_0206e698[];
extern u8 *data_0206e680;
extern u8 *data_0206e690;
void func_0203d098(Obj *);
void func_0203b96c(s32);
void func_0203b980(s32);
void func_0203d498(void *, void *, s32, s32, Obj *);
void func_0203cd5c(s32);
s8 *func_0204221c(s32);
s32 func_0203d8d8(s8 *, u8 *);
u16 func_0203d740(s8 *, u16, u16, u8 *, u8, s32, Obj *);
void NNS_SndSetMasterVolume(s32);
void func_02046ffc(s32);
void GXx_SetMasterBrightness_(volatile u16 *, s32);
void Card_HaltAfterRemoval(void);
void func_02051868(void);
void OS_Terminate(void);
void func_020222b8(s32, s32, s32);
void func_0202e838(s32 err) {
    u8 *font;
    s8 *s;
    u16 py;
    u16 px;
    func_0203d098(data_020b8b44);
    func_0203d098(data_020b8bbc);
    func_0203d098(data_020b8b94);
    func_0203b96c(1);
    func_0203b980(0);
    func_0203b96c(0);
    func_0203b980(0);
    {
        void *a = data_0206ccb0;
        func_0203d498(a, data_0206e698, 0, 1, data_020b8b94);
    }
    func_0203cd5c(*(s32 *) ((u8 *) data_020b8b44 + 0x50));
    if (err == -2) {
        font = data_0206e680;
        s    = func_0204221c(1);
        py   = 0x37 - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        px   = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, px, py, font, 0, 0, data_020b8bbc);
        font = data_0206e680;
        s    = func_0204221c(2);
        py   = 0x50 - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        px   = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, px, py, font, 0, 0, data_020b8bbc);
        font = data_0206e680;
        s    = func_0204221c(3);
        py   = 0x69 - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        px   = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, px, py, font, 0, 0, data_020b8bbc);
        font = data_0206e680;
        s    = func_0204221c(4);
        py   = 0x82 - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        px   = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, px, py, font, 0, 0, data_020b8bbc);
    } else if (err == -1) {
        NNS_SndSetMasterVolume(0);
        func_02046ffc(0);
        GXx_SetMasterBrightness_((volatile u16 *) 0x400006C, -16);
        func_0203d098(data_020b8b44);
        func_0203d098(data_020b8bbc);
        func_0203d098(data_020b8b94);
        func_0203b96c(1);
        func_0203b980(0);
        func_0203b96c(0);
        func_0203b980(0);
        {
            void *a = data_0206ccb0;
            func_0203d498(a, data_0206e698, 0, 1, data_020b8b94);
        }
        func_0203cd5c(*(s32 *) ((u8 *) data_020b8b44 + 0x50));
        font = data_0206e690;
        s    = func_0204221c(5);
        py   = 0x4B - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        px   = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, px, py, font, 0, 0, data_020b8bbc);
        font = data_0206e690;
        s    = func_0204221c(7);
        py   = 0x64 - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        px   = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, px, py, font, 0, 0, data_020b8bbc);
        font = data_0206e690;
        s    = func_0204221c(8);
        py   = 0x7D - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        px   = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, px, py, font, 0, 0, data_020b8bbc);
        GXx_SetMasterBrightness_((volatile u16 *) 0x400106C, 0);
        GXx_SetMasterBrightness_((volatile u16 *) 0x400006C, 0);
        Card_HaltAfterRemoval();
        func_02051868();
        OS_Terminate();
    } else if (err == -3) {
        NNS_SndSetMasterVolume(0);
        func_02046ffc(0);
        GXx_SetMasterBrightness_((volatile u16 *) 0x400006C, -16);
        func_0203d098(data_020b8b44);
        func_0203d098(data_020b8bbc);
        func_0203d098(data_020b8b94);
        func_0203b96c(1);
        func_0203b980(0);
        func_0203b96c(0);
        func_0203b980(0);
        {
            void *a = data_0206ccb0;
            func_0203d498(a, data_0206e698, 0, 1, data_020b8b94);
        }
        func_0203cd5c(*(s32 *) ((u8 *) data_020b8b44 + 0x50));
        font = data_0206e690;
        s    = func_0204221c(6);
        py   = 0x4B - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        px   = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, px, py, font, 0, 0, data_020b8bbc);
        font = data_0206e690;
        s    = func_0204221c(7);
        py   = 0x64 - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        px   = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, px, py, font, 0, 0, data_020b8bbc);
        font = data_0206e690;
        s    = func_0204221c(8);
        py   = 0x7D - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        px   = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, px, py, font, 0, 0, data_020b8bbc);
        GXx_SetMasterBrightness_((volatile u16 *) 0x400106C, 0);
        GXx_SetMasterBrightness_((volatile u16 *) 0x400006C, 0);
        Card_HaltAfterRemoval();
        func_02051868();
        OS_Terminate();
    }
    func_020222b8(0, 0, 3);
}
