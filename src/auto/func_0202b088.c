#include "m2c.h"

void func_0202b6b0(void);
void func_02030f40(void *, void *, void *, void *);
void func_0203b96c(s32);
void func_0203bc90(void *, void *, s32, s32, s32, s32, s32, s32);
extern u8 data_0206ca88;
extern u8 data_0206caa4;
extern u8 data_0206cabc;
extern u8 data_0206cad4;
extern u8 data_0206caec;
extern u8 data_0206cb04;
extern u8 data_0206cb1c;
extern u8 data_0206e698;
extern u8 data_0206e6a4;
extern s32 data_02087f80[];
extern u8 data_02087f9c;

void func_0202b088(void) {
    func_02030f40(&data_0206ca88, &data_02087f9c, &data_0206e6a4, &data_0206e698);
    func_0203b96c(0);
    func_0203bc90(&data_0206caa4, &data_0206e698, 0x2E, 0x20, 0xC0, 1, 0, 0);
    func_0203bc90(&data_0206cabc, &data_0206e698, 0x2F, 0x60, 0xC0, 1, 0, 0);
    func_0203bc90(&data_0206cad4, &data_0206e698, 0x30, 0xA0, 0xC0, 1, 0, 0);
    func_0203bc90(&data_0206caec, &data_0206e698, 0x31, 0x20, 0xC0, 1, 0, 0);
    func_0203bc90(&data_0206cb04, &data_0206e698, 0x32, 0x60, 0xC0, 1, 0, 0);
    func_0203bc90(&data_0206cb1c, &data_0206e698, 0x33, 0xA0, 0xC0, 1, 0, 0);
    data_02087f80[3] = 0xC0;
    data_02087f80[2] = 0xC0;
    data_02087f80[9] = 0xC0;
    data_02087f80[8] = 0xC0;
    data_02087f80[6] = 0xC0;
    data_02087f80[5] = 0xC0;
    func_0202b6b0();
}
