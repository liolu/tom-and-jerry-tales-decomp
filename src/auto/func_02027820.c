#include "m2c.h"
typedef struct {
    u8 pad[0x14];
    s32 off;
} Obj;
void func_0203b96c(s32);
void func_02027794(void);
void func_0203c24c(s32, s32, s32);
void func_02027730(s32);
void *func_0204221c(void *);
s32 func_0203d8d8(void *, Obj *);
void func_0203d740(void *, u16, u16, Obj *, s32, s32, void *);
extern u8 data_0206bb5c[];
extern u8 data_0206bb68[];
extern u8 data_0206bb74[];
extern s32 data_0206b918[];
extern Obj *data_0206e690;
extern void *data_0206b9f0[];
extern u8 data_020b8b6c[];

void func_02027820(s32 arg0) {
    Obj *o;
    void *h;
    u16 y;
    u16 x;
    func_0203b96c(0);
    func_02027794();
    switch (arg0) {
        case 1:
            func_0203c24c(data_0206bb5c[1], data_0206bb68[1], data_0206bb74[1]);
            break;
        case 0:
            func_0203c24c(data_0206bb5c[0], data_0206bb68[0], data_0206bb74[0]);
            break;
        case 2:
            func_0203c24c(data_0206bb5c[2], data_0206bb68[2], data_0206bb74[2]);
            func_0203c24c(data_0206bb5c[3], data_0206bb68[3], data_0206bb74[3]);
            break;
        case 3:
            func_0203c24c(data_0206bb5c[4], data_0206bb68[4], data_0206bb74[4]);
            break;
        case 5:
            func_0203c24c(data_0206bb5c[7], data_0206bb68[7], data_0206bb74[7]);
            break;
        case 4:
            func_0203c24c(data_0206bb5c[5], data_0206bb68[5], data_0206bb74[5]);
            func_0203c24c(data_0206bb5c[6], data_0206bb68[6], data_0206bb74[6]);
            break;
        case 6:
            func_0203c24c(data_0206bb5c[8], data_0206bb68[8], data_0206bb74[8]);
            break;
        case 7:
            func_02027730(1);
            break;
        default:
            break;
    }
    func_0203c24c(9, 9, 0x9c);
    o = data_0206e690;
    h = func_0204221c(data_0206b9f0[data_0206b918[1]]);
    y = 14 - ((u16) (*(u8 *) ((s32) o + o->off) + 6) >> 1);
    x = 128 - (func_0203d8d8(h, o) >> 1);
    func_0203d740(h, x, y, o, 0, 0, data_020b8b6c);
}
