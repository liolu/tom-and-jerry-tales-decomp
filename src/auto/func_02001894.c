#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    s32 w[0x40];
} S;
typedef struct {
    u8 pad[0x10];
    S *p;
} G;
extern G data_0206e9e8;

void func_02001894(void) {
    {
        S *s     = data_0206e9e8.p;
        s->w[11] = 0;
        s->w[12] = 28672;
        s->w[13] = -94208;
    }
    {
        S *s     = data_0206e9e8.p;
        s->w[26] = 0;
        s->w[27] = 24576;
        s->w[28] = -94208;
    }
    {
        S *s    = data_0206e9e8.p;
        s->w[5] = 0;
        s->w[6] = 0;
        s->w[7] = -4096;
    }
    {
        S *s     = data_0206e9e8.p;
        s->w[29] = 0;
        s->w[30] = 28672;
        s->w[31] = -94208;
    }
    {
        S *s     = data_0206e9e8.p;
        s->w[32] = 0;
        s->w[33] = 24576;
        s->w[34] = -94208;
    }
    {
        S *s     = data_0206e9e8.p;
        s->w[35] = 0;
        s->w[36] = 0;
        s->w[37] = -4096;
    }
    data_0206e9e8.p->w[48] = -286720;
    data_0206e9e8.p->w[49] = 0;
    data_0206e9e8.p->w[40] = 110592;
    data_0206e9e8.p->w[41] = 570;
    data_0206e9e8.p->w[42] = 4056;
    data_0206e9e8.p->w[43] = 40;
    data_0206e9e8.p->w[44] = 10240000;
    data_0206e9e8.p->w[0]  = 0;
    data_0206e9e8.p->w[1]  = 0;
    data_0206e9e8.p->w[50] = 512;
    data_0206e9e8.p->w[51] = 696;
}
