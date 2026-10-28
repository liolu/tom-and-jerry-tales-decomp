#include "m2c.h"

typedef struct {
    u8 pad0[0xCC];
    s32 fcc;
    s32 fd0;
    u8 pad1[0x30];
    s32 f104;
    u8 pad2[4];
    s32 f10c;
} P;

typedef struct {
    u8 pad0[0x28];
    s32 f28;
    s32 f2c;
    s32 f30;
} Q;

typedef struct {
    s32 f0;
    Q *f4;
} R;

typedef struct {
    u8 pad[0x18];
    s32 f18;
} Z;

void func_0200694c(s32 a, void *b);
void func_02006a04(s32 a, void *b);
void func_02006b08(s32 a);
void func_02012e28(void *a);
void VEC_Subtract(void *a, void *b, void *c);
void VEC_CrossProduct(void *a, void *b, void *c);
s32 VEC_Mag(void *a);
void VEC_Normalize(void *a, void *b);
void VEC_MultAdd(s32 a, void *b, void *c, void *d);
extern u8 data_02064104[];
extern s32 data_0206e694;
extern P data_0206e6d4;
extern u8 data_0206e7b0[];
extern u8 data_0206e7bc[];
extern u8 data_0206e7cc[];
extern R *data_0206ea14;
extern Z data_02086d08;
extern u8 data_02086fa8;

void func_0200b4d0(void) {
    u8 sp24[12];
    u8 sp18[12];
    u8 spC[12];
    u8 sp0[12];
    s32 temp_r0;
    s32 temp_r1;

    if (data_02086fa8 != 2) {
        data_0206e6d4.f10c = 0x147;
    } else {
        data_0206e6d4.f10c = data_0206ea14->f4->f30;
        VEC_Subtract(data_0206e7bc, (u8 *) data_0206ea14->f4 + 0xC, sp0);
        temp_r0 = VEC_Mag(sp0);
        if (data_0206e6d4.fcc != 0 && temp_r0 > 0x6800 && temp_r0 < 0x7800 && data_0206e6d4.f104 > data_0206ea14->f4->f28) {
            data_0206e6d4.fcc = 0;
        }
        if (data_0206e6d4.fcc != 0) {
            temp_r1 = data_0206ea14->f4->f28;
            if (data_0206e6d4.f104 < temp_r1 || (data_0206e6d4.f104 > temp_r1 && temp_r0 < 0x6800)) {
                data_0206e6d4.f10c += 0x999;
            } else if (data_0206e6d4.f104 > temp_r1 && temp_r0 > 0x7800) {
                temp_r1 = data_0206e6d4.f10c - 0xCC;
                temp_r1 -= 0x400;
                data_0206e6d4.f10c = temp_r1;
                if (temp_r1 <= 0) {
                    data_0206e6d4.f10c = 0;
                }
            }
        }
    }
    if (data_0206e6d4.f104 >= data_0206e6d4.fd0 - 0x28) {
        data_0206e6d4.f104 = 0;
    }
    func_02012e28(data_0206e7b0);
    VEC_CrossProduct(data_0206e7cc, data_02064104, sp24);
    VEC_Normalize(sp24, sp24);
    VEC_MultAdd(0x1666, sp24, data_0206e7bc, sp18);
    func_0200694c(4, sp18);
    VEC_MultAdd(-0x1666, sp24, data_0206e7bc, spC);
    func_0200694c(5, spC);
    if (data_02086d08.f18 != data_0206e694) {
        if (data_0206e694 != 0) {
            func_02006b08(4);
            func_02006b08(5);
        } else {
            func_02006a04(4, sp18);
            func_02006a04(5, spC);
        }
    }
    data_02086d08.f18 = data_0206e694;
}
