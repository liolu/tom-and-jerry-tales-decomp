/* compiler: 2.0/sp1p5 -O1 */
#include "m2c.h"

void func_0200160c(void);
void func_02001654(s32);
void func_020219d8(s32);
void func_020314d0(void);
void func_020321ec(void);
void func_0203253c(void);
void func_0203a294(void);
void func_02032bc8(void);
void func_020330b4(void);
void func_020352dc(s32, s32, s32, s32);
void func_02033910(void *);
void func_020015f0(void);
void func_02030f40(void *, void *, void *, void *);
void func_0203cd2c(void);
void func_0203cf6c(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0203cff0(s32, s32, s32, s32, s32, s32, s32);
void func_0203d498(void *, void *, s32, s32, void *);
void func_0203cd5c(s32);
void func_0203de64(s32);
void func_0203de98(s32);
void func_0203de84(s32);
void func_0203de74(s32);
extern u8 data_0206e6a4[];
extern s32 data_02086d7c[];
extern u8 data_0206a508[];
extern u8 data_02086d84[];
extern u8 data_0206e698[];
extern u8 data_0206a520[];
extern u8 data_020b8b6c[];
extern s32 data_020b8b44[];

void func_0200bfdc(void) {
    func_0200160c();
    func_02001654(2);
    func_020219d8(4);
    *(volatile u32 *) 0x04000000 = (*(volatile u32 *) 0x04000000 & ~0x1F00) | 0x100;
    func_020314d0();
    func_020321ec();
    func_0203253c();
    func_0203a294();
    func_02032bc8();
    func_020330b4();
    func_020352dc(1, 0x3F, 1, 0x1F);
    func_02033910(data_0206e6a4);
    data_02086d7c[1] = 1;
    func_020015f0();
    func_02030f40(data_0206a508, data_02086d84, data_0206e6a4, data_0206e698);
    func_0203cd2c();
    func_0203cf6c(0, 4, 0, 0, 0xC, 0, 0, 0);
    func_0203cff0(1, 5, 0, 1, 0xD, 2, 1);
    {
        void *a = data_0206a520;
        void *t = data_020b8b6c;
        void *b = data_0206e698;
        func_0203d498(a, b, 0, 1, t);
    }
    func_0203cd5c(data_020b8b44[10]);
    func_0203cd5c(data_020b8b44[0]);
    func_0203de64(0);
    func_0203de98(data_02086d7c[2]);
    func_0203de84(0);
    func_0203de74(0);
}
