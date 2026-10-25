#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    s32 a, b;
    s32 pad1[3];
    V v14;
    s32 pad2[3];
    V v2c;
    s32 pad3[12];
    V v68;
    V v74;
    V v80;
    V v8c;
    s32 pad4[2];
    s32 a0, a4, a8, ac, b0;
    s32 pad5[3];
    s32 c0, c4, c8, cc;
    s32 pad6[1];
    s32 d4;
} S;
typedef struct {
    s32 pad[4];
    S *p;
} G;
extern G data_0206e9e8;
void func_020016d0(void) {
    S *p;
    p                   = data_0206e9e8.p;
    p->v2c.x            = 0;
    p->v2c.y            = 0x7000;
    p->v2c.z            = -0x17000;
    p                   = data_0206e9e8.p;
    p->v68.x            = 0;
    p->v68.y            = 0x6000;
    p->v68.z            = -0x17000;
    p                   = data_0206e9e8.p;
    p->v14.x            = 0;
    p->v14.y            = 0;
    p->v14.z            = -0x1000;
    p                   = data_0206e9e8.p;
    p->v74.x            = 0;
    p->v74.y            = 0x7000;
    p->v74.z            = -0x17000;
    p                   = data_0206e9e8.p;
    p->v80.x            = 0;
    p->v80.y            = 0x6000;
    p->v80.z            = -0x17000;
    p                   = data_0206e9e8.p;
    p->v8c.x            = 0;
    p->v8c.y            = 0;
    p->v8c.z            = -0x1000;
    data_0206e9e8.p->c0 = -0x46000;
    data_0206e9e8.p->c4 = 0;
    data_0206e9e8.p->a0 = 0x12428;
    data_0206e9e8.p->d4 = 1;
    data_0206e9e8.p->a4 = 0x23a;
    data_0206e9e8.p->a8 = 0xfd8;
    data_0206e9e8.p->ac = 0x199;
    data_0206e9e8.p->b0 = 0xc8000;
    data_0206e9e8.p->a  = 0;
    data_0206e9e8.p->b  = 0;
    data_0206e9e8.p->c8 = 0x200;
    data_0206e9e8.p->cc = 0x2b8;
}
