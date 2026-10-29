#include "m2c.h"
typedef struct {
    u8 pad0[6];
    s8 f6;
    u8 pad7[0xE - 7];
    s8 fe;
} Ofs;
extern u8 data_02063ea8[];
extern u8 *data_02063f08[];
extern s8 *data_02063f14[];
extern s8 *data_02063f2c[];
extern u8 data_02063e98[];
extern u8 *data_02063ed4[];
extern s8 *data_02063edc[];
extern s8 *data_02063ee4[];
extern Ofs data_02086fa8;
s32 func_02011430(void *);
s32 func_02011444(void *);
s32 func_0201144c(void *);
s32 func_02011460(void *);
void func_0203b96c(s32);
void func_0203c24c(u8, u16, u16);
void func_0201109c(void *ctx, s32 unused, u32 a, u32 *prevA, u32 b, u32 *prevB) {
    s8 *dyA2;
    s8 *dxA2;
    s8 *dyB2;
    u8 i;
    s8 *dyB;
    s8 *dxB;
    u8 *idB;
    s8 *dyA;
    s32 yb;
    s32 xb;
    s32 ya;
    u8 *idA2;
    s32 xa;
    s8 *dxA;
    u8 *idA;
    s8 *dxB2;
    u8 *idB2;
    xa = func_02011430(ctx);
    ya = func_02011444(ctx);
    xb = func_0201144c(ctx);
    yb = func_02011460(ctx);
    if (prevA == 0 || a != *prevA || prevB == 0 || b != *prevB) {
        func_0203b96c(1);
        i = 0;
        if (i < data_02063ea8[a]) {
            dyA = data_02063f2c[a];
            dxA = data_02063f14[a];
            idA = data_02063f08[a];
            do {
                func_0203c24c(idA[i], xa + dxA[i], data_02086fa8.f6 + (ya + dyA[i]));
                i++;
            } while (i < data_02063ea8[a]);
        }
        if (prevA != 0 && a != *prevA) {
            for (i = 0; i < data_02063ea8[*prevA]; i++) {
                func_0203c24c(data_02063f08[*prevA][i], 0x100, 0);
            }
        }
        i = 0;
        if (i < data_02063e98[b]) {
            dyB = data_02063ee4[b];
            dxB = data_02063edc[b];
            idB = data_02063ed4[b];
            do {
                func_0203c24c(idB[i], xb + dxB[i], data_02086fa8.fe + (yb + dyB[i]));
                i++;
            } while (i < data_02063e98[b]);
        }
        if (prevB != 0 && b != *prevB) {
            for (i = 0; i < data_02063e98[*prevB]; i++) {
                func_0203c24c(data_02063ed4[*prevB][i], 0x100, 0xC0);
            }
        }
        if (prevA != 0) {
            *prevA = a;
        }
        if (prevB != 0) {
            *prevB = b;
        }
    } else {
        func_0203b96c(1);
        i = 0;
        if (i < data_02063ea8[a]) {
            dyA2 = data_02063f2c[a];
            dxA2 = data_02063f14[a];
            idA2 = data_02063f08[a];
            do {
                func_0203c24c(idA2[i], xa + dxA2[i], data_02086fa8.f6 + (ya + dyA2[i]));
                i++;
            } while (i < data_02063ea8[a]);
        }
        i = 0;
        if (i < data_02063e98[b]) {
            dyB2 = data_02063ee4[b];
            dxB2 = data_02063edc[b];
            idB2 = data_02063ed4[b];
            do {
                func_0203c24c(idB2[i], xb + dxB2[i], data_02086fa8.fe + (yb + dyB2[i]));
                i++;
            } while (i < data_02063e98[b]);
        }
    }
}
