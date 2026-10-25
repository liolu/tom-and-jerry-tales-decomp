#include "m2c.h"

void func_020015f0(void);
void func_0200160c(void);
void func_02001654(s32);
void func_020219d8(s32);
void func_02030f40(void *, void *, void *, void *);
void func_020314d0(void);
void func_020321ec(void);
void func_0203253c(void);
void func_02032bc8(void);
void func_020330b4(void);
void func_020352dc(s32, s32, s32, s32);
void func_0203a294(void);
void func_0203c700(void *, void *, s32, s32, s32, s32, s32);
void func_0203cd2c(void);
void func_0203cd5c(s32);
void func_0203cf6c(s32, s32, s32, s32, s32, s32, s32, s32);
void func_0203de64(s32);
void func_0203de74(s32);
void func_0203de84(s32);
void func_0203de98(s32);
extern s16 data_0206a554;
extern u8 data_0206a568;
extern u8 data_0206a580;
extern u8 data_0206e698;
extern u8 data_0206e6a4;
extern s32 data_02086d90[];
extern u8 data_02086d94;
extern s32 data_020b8b44;

void func_0200c51c(void) {
    func_0200160c();
    func_02001654(3);
    func_020219d8(4);
    func_020314d0();
    func_020321ec();
    func_0203253c();
    func_0203a294();
    func_02032bc8();
    func_020330b4();
    func_020352dc(1, 0x3F, 1, 0x1F);
    data_02086d90[4] = 1;
    func_020015f0();
    func_02030f40(&data_0206a568, &data_02086d94, &data_0206e6a4, &data_0206e698);
    func_0203c700(&data_0206a580, &data_0206e698, 0xD, 2, 1, 1, 1);
    func_0203cd2c();
    func_0203cf6c(0, 4, 0, 0, 0xC, 0, 0, 0);
    func_0203cd5c(data_020b8b44);
    func_0203de64(0);
    func_0203de98(data_02086d90[1]);
    func_0203de84(0);
    func_0203de74(0);
    data_0206a554 = 1;
}
