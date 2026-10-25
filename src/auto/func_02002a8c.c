#include "m2c.h"

typedef struct V {
    s32 x;
    s32 y;
    s32 z;
} V;

typedef struct W {
    u8 pad0[0x14];
    V v14;
    u8 pad1[0x2c - 0x20];
    V v2c;
    u8 pad2[0x68 - 0x38];
    V v68;
    V v74;
    V v80;
    V v8c;
    s32 padx[2];
    s32 a0;
    u8 pad3[0xac - 0xa4];
    s32 ac;
    s32 b0;
    u8 pad4[0xcc - 0xb4];
    s32 cc;
    u8 pad5[4];
    s32 d4;
} W;

typedef struct G {
    u8 pad[0x10];
    W *w;
} G;

extern G data_0206e9e8;

void func_02002a8c(void) {
    W *w1 = data_0206e9e8.w;
    W *w2;
    W *w3;
    W *w4;
    w1->v2c.x           = 0;
    w1->v2c.y           = 0x2800;
    w1->v2c.z           = 0x5000;
    w2                  = data_0206e9e8.w;
    w2->v74             = w2->v2c;
    w2->v68.x           = 0;
    w2->v68.y           = 0x800;
    w2->v68.z           = 0;
    w3                  = data_0206e9e8.w;
    w3->v80             = w3->v68;
    w3->v14.x           = 0;
    w3->v14.y           = 0x1000;
    w3->v14.z           = 0;
    w4                  = data_0206e9e8.w;
    w4->v8c             = w4->v14;
    w4->a0              = 0x10000;
    data_0206e9e8.w->d4 = 1;
    data_0206e9e8.w->ac = 0x28;
    data_0206e9e8.w->b0 = 0xFA000;
    data_0206e9e8.w->cc = 0x2B8;
}
