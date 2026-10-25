/* compiler: 2.0/sp1p5 -O2,p */
#include "m2c.h"

void func_0204674c(void *, s16);
void func_02046790(void *, void *);
void func_02047818(void *);
s32 func_02049848(s32);
void func_0204a058(void *, s32);
void func_020508c8(void *);
void func_02054c5c(void *);

extern s32 data_021af530;
extern u8 data_021af53c[];
extern u8 data_021af548[];
extern u8 data_021af560[];
extern u8 data_021af6e0[];
extern u8 data_021afbcc[];
extern u8 data_021b01a0[];

void func_02049744(s32 arg0, s32 arg1) {
    s32 i;
    s32 j;
    u8 *e;
    if (data_021af530 != 0) {
        func_02049848(arg1);
        return;
    }
    data_021af530 = 1;
    func_0204674c(data_021af53c, 0);
    i = 0;
    while (i < 8) {
        func_02046790(data_021af53c, data_021af560 + i * 0x30);
        i++;
    }
    func_020508c8(data_021af548);
    j                                    = 0;
    *(u8 **) ((u8 *) &data_021af530 + 8) = data_021b01a0;
    while (j < 4) {
        e = data_021afbcc + j * 0x170;
        *(u32 *) (e + 0x110) &= ~1;
        func_02054c5c(e + 0x5C);
        func_02047818(e);
        *(s32 *) (e + 0x148) = j;
        *(u8 *) (e + 0x124)  = 0;
        *(s32 *) (e + 0x12C) = 0;
        *(s32 *) (e + 0x130) = 0;
        *(s32 *) (e + 0x120) = 0;
        j++;
    }
    func_02049848(arg1);
    func_0204a058(data_021af6e0, arg0);
}
