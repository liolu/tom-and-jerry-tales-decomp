#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    s32 f0, f4;
    u8 p0[0x14 - 8];
    u8 v14[12];
    u8 p1[0x2c - 0x20];
    u8 v2c[12];
    u8 p2[0x68 - 0x38];
    u8 v68[12];
    u8 v74[12];
    u8 v80[12];
    u8 v8c[12];
    u8 p3[0xa0 - 0x98];
    s32 fa0;
    u8 p4[4];
    s32 fa8;
    s32 fac;
    s32 fb0;
    u8 p5[0xc8 - 0xb4];
    s32 fc8;
    s32 fcc;
    u8 p6[0xd4 - 0xd0];
    s32 fd4;
} Q;
typedef struct {
    u8 pad[0x10];
    Q *q;
    s32 f14;
} G;
extern G data_0206e9e8;
extern void func_02001d4c(void);
extern void func_02002b94(int);

void func_020017e0(void) {
    Q *q;
    func_02002b94(0);
    func_02001d4c();
    q                    = data_0206e9e8.q;
    *(V *) q->v68        = *(V *) q->v80;
    *(V *) q->v2c        = *(V *) q->v74;
    *(V *) q->v14        = *(V *) q->v8c;
    q->fa0               = 0x12428;
    data_0206e9e8.q->fd4 = 1;
    data_0206e9e8.q->fac = 0x28;
    data_0206e9e8.q->fb0 = 0x9c4000;
    data_0206e9e8.q->f0  = 0;
    data_0206e9e8.q->f4  = 0;
    data_0206e9e8.q->fc8 = 0x200;
    data_0206e9e8.q->fcc = 0xae0;
    data_0206e9e8.f14    = 0;
}
