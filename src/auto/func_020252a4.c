#include "m2c.h"
extern void func_0203b96c(s32);
extern void func_02022b60(u8 *, s32);
extern s32 func_0201cf68(s32);
extern void func_0200a0f8(s32);
extern s32 func_0204221c(s32);
extern s32 func_0203d8d8(s32, u8 *);
extern void func_0203d740(s32, u16, u16, u8 *, s32, s32, void *);
extern void func_02027820(s32);
extern void func_0203d0d8(s32, s32, s32, s32, s32, s32, void *);
extern s32 data_0206b918[];
extern s32 data_0206b9f0[];
extern u8 *data_0206e690;
extern u8 data_020b8b6c[];

s32 func_020252a4(u8 *arg0, u32 arg1) {
    func_0203b96c(0);
    switch (arg1) {
        case 1:
            func_02022b60(arg0, 1);
            break;
        case 2:
            func_02022b60(arg0, 0);
            return *(s32 *) (arg0 + 0x24) | 0x01000000;
        case 3: {
            u8 id;
            u8 *font;
            s32 str;
            u16 y;
            u16 x;
            func_02022b60(arg0, 1);
            id = arg0[0x28];
            if (func_0201cf68(id) != 0 || id == 7) {
                func_0200a0f8(1);
                data_0206b918[1] = id;
            }
            font = data_0206e690;
            str  = func_0204221c(data_0206b9f0[data_0206b918[1]]);
            y    = 0xE - ((s32) (u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
            x    = (u16) (0x80 - (func_0203d8d8(str, font) >> 1));
            func_0203d740(str, x, y, font, 0, 0, data_020b8b6c);
            func_02027820((u8) data_0206b918[1]);
            break;
        }
        case 4:
            func_02022b60(arg0, 0);
            func_0203d0d8(0, 0, 0xFF, 0x30, 0, 0, data_020b8b6c);
            break;
        default:
            break;
    }
    return 0;
}
