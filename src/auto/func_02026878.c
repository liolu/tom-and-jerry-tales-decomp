#include "m2c.h"

extern s32 func_0201d10c(s32);
extern void func_0204398c(void *);
extern void func_02043ab0(void *);
extern s16 func_02043fd0(void *);
extern void func_0205918c(void *, void *);
extern void *data_0206b920[];
extern void *data_0206b948[];
extern void *data_0206b954[];
extern void *data_0206b9a8[];
extern u8 data_0206c2e4[];
extern u8 data_0206c2ec[];
extern u8 data_0206c2f8[];
extern u8 data_0206c304[];
extern u8 data_0206e6d4[];
extern u8 data_0206fcac[];
extern u8 data_02071510[];
extern u8 data_020877d0[];
extern u8 data_02087df0[];

void func_02026878(u32 arg0) {
    u8 *var_r1;
    s32 var_r3;

    switch (arg0) {
        case 0:
            func_0205918c(data_02087df0, data_0206b9a8[(u32) (*(u16 *) (data_0206e6d4 + 0x5C) << 0x1D) >> 0x1D]);
            break;
        case 2:
            func_0205918c(data_02087df0, data_0206b954[(u32) (*(u16 *) (data_0206e6d4 + 0x5C) << 0x16) >> 0x1E]);
            break;
        case 1:
            func_0205918c(data_02087df0, data_0206b920[(u32) (*(u16 *) (data_0206e6d4 + 0x5C) << 0x15) >> 0x1F]);
            break;
        case 3:
            if (func_0201d10c(0x15) == 0) {
                return;
            }
            func_0205918c(data_02087df0, data_0206c2e4);
            break;
        case 7:
            func_0205918c(data_02087df0, data_0206b948[(u32) (*(u16 *) (data_0206e6d4 + 0x5C) << 0x13) >> 0x1E]);
            break;
        case 5:
            if (func_0201d10c(0x18) == 0) {
                return;
            }
            func_0205918c(data_02087df0, data_0206c2ec);
            break;
        case 6:
            if (func_0201d10c(0) == 0) {
                return;
            }
            func_0205918c(data_02087df0, data_0206c2f8);
            break;
        case 4:
            if (func_0201d10c(0x13) == 0) {
                return;
            }
            func_0205918c(data_02087df0, data_0206c304);
            break;
        default:
            return;
    }
    *(s16 *) (data_020877d0 + 0x1A) = func_02043fd0(data_02087df0);
    func_0204398c(data_02087df0);
    func_02043ab0(data_02087df0);
    var_r1 = data_02071510;
    var_r3 = 1;
    do {
        if (var_r1[8] != 0) {
            *(s32 *) (data_020877d0 + 0x34) = var_r3 * 0x1864 + (s32) data_0206fcac;
            return;
        }
        var_r1 += 0x1864;
        var_r3 += 1;
    } while (var_r3 < 0xF);
}
