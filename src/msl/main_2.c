#include "m2c.h"

void OS_GetOwnerInfo(u8 *buf);
void func_020012c0(void);
void func_020306b0(void);
void func_02031440(void *);
s32 func_0204221c(s32 a);
void OS_SNPrintf(void *, s32, void *, s32);
void CARD_SetPulledOutCallback(void *);
void func_0201daa4(void *);
void func_0203fcf0(void);
void func_0203ff6c(void *);
s32 CARD_IsPulledOut(void);
void func_020011f4(void);
void func_02000d2c(void);
void func_020301e8(s32);
void func_0203fd34(void);
void func_0203fdd8(void);
void func_02051868(void);
void func_0203fe48(void);
void func_02022144(s32);
void func_020402ac(void);
void NNS_SndMain(void);
void func_020301f4(void);
void func_020011c8(void);
extern s32 data_0206dcb8;
extern u8 data_0206e628[];
extern u8 data_020692c0[];
extern u8 data_0206e5e8[];
extern u8 data_0206e5a8[];
extern u8 data_0206e6d4[];
extern u8 data_02063dd8[];
extern s32 data_02088438;
extern u32 data_02088448;

void main(void) {
    u8 buf[0x50];
    OS_GetOwnerInfo(buf);
    switch (buf[0]) {
        case 2:
            data_0206dcb8 = 3;
            break;
        case 3:
            data_0206dcb8 = 2;
            break;
        case 5:
            data_0206dcb8 = 5;
            break;
        case 4:
            data_0206dcb8 = 6;
            break;
        default:
            data_0206dcb8 = 1;
            break;
    }
    func_020012c0();
    func_020306b0();
    func_02031440(func_020011f4);
    OS_SNPrintf(data_0206e628, 0x40, data_020692c0, func_0204221c(9));
    OS_SNPrintf(data_0206e5e8, 0x40, data_020692c0, func_0204221c(10));
    OS_SNPrintf(data_0206e5a8, 0x40, data_020692c0, func_0204221c(11));
    CARD_SetPulledOutCallback(func_020011c8);
    func_0201daa4(data_0206e6d4);
    func_0203fcf0();
    func_0203ff6c(data_02063dd8);
    while (1) {
        if (CARD_IsPulledOut() != 0) {
            func_020011f4();
        }
        func_02000d2c();
        func_020301e8(1);
        func_020306b0();
        func_0203fd34();
        func_0203fdd8();
        func_02051868();
        func_0203fe48();
        func_02022144(data_02088438);
        func_020402ac();
        NNS_SndMain();
        if (data_02088448 < 2) {
            func_02051868();
        }
        func_020301f4();
    }
}
