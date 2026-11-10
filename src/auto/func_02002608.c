#include "m2c.h"
typedef struct {
    int x, y, z;
} V3;
typedef struct {
    int m[12];
} M43;
typedef struct {
    int m[9];
} M33;
typedef struct {
    char pad0[0x14];
    V3 v14;
    V3 v20;
    V3 v2c;
    M33 m38;
    V3 v5c;
    V3 v68;
    V3 v74;
    V3 v80;
    V3 v8c;
    int f98;
    int f9c;
    int fa0;
    int fa4;
    int fa8;
    int fac;
    int fb0;
    char pad[0xcc - 0xb4];
    int fcc;
    int fd0;
    int fd4;
} Obj;
typedef struct {
    char pad0[4];
    unsigned char f4;
    char pad5;
    short f6;
    char pad8[2];
    short fa;
    int fc;
    Obj *o;
} G;
typedef struct {
    char pad[0xbc];
    int fbc;
} Q;
extern G data_0206e9e8;
extern short data_02064348[];
extern int data_0206e67c;
extern Q data_0206e6d4;
extern short data_020693f0;
int FX_Div(int, int);
void func_0204db74(int, int, int, int, int, int, int, void *);
void VEC_Subtract(V3 *, V3 *, V3 *);
void G3i_LookAt_(V3 *, V3 *, V3 *, int, M43 *);
void func_0204b038(M43 *, M33 *);
void func_01ff9df0(V3 *, V3 *, V3 *, int);
int func_0203016c(int, int);
void VEC_Add(V3 *, V3 *, V3 *);

static inline int fxmul(int a, int b) {
    return (int) (((long long) a * b + 0x800) >> 12);
}
static inline int angleIdx(int x) {
    int h = (int) (((long long) x * 0xB60B60B60BLL + 0x80000000000LL) >> 32);
    return (int) ((unsigned) (h << 4) >> 16) >> 4;
}

void func_02002608(void) {
    V3 j;
    V3 k;
    M43 m;
    int saved;
    int r;
    V3 *pos;
    V3 *tgt;
    Obj *o;
    int amp;
    if (data_0206e9e8.o->fd4 != 0) {
        data_0206e9e8.o->fa4 = data_02064348[angleIdx(data_0206e9e8.o->fa0) * 2];
        data_0206e9e8.o->fa8 = data_02064348[angleIdx(data_0206e9e8.o->fa0) * 2 + 1];
        r                    = FX_Div(data_0206e9e8.o->fa4, data_0206e9e8.o->fa8);
        data_0206e9e8.o->f9c = fxmul(data_0206e9e8.o->fac, r) << 1;
        data_0206e9e8.o->f98 = (int) (((long long) data_0206e9e8.o->f9c * 0x1555LL + 0x800) >> 12);
        func_0204db74(data_0206e9e8.o->fa4, data_0206e9e8.o->fa8, 0x1555, data_0206e9e8.o->fac, data_0206e9e8.o->fb0, 0x1000,
                      1, 0);
        *(volatile int *) 0x400044C = 0;
        data_0206e9e8.o->fd4        = 0;
    }

    if (data_0206e9e8.f4 == 6) {
        VEC_Subtract(&data_0206e9e8.o->v2c, &data_0206e9e8.o->v20, &data_0206e9e8.o->v68);
        G3i_LookAt_(&data_0206e9e8.o->v2c, &data_0206e9e8.o->v14, &data_0206e9e8.o->v68, 1, &m);
        func_0204b038(&m, &data_0206e9e8.o->m38);
        data_0206e9e8.o->v5c = *(V3 *) &m.m[9];
        return;
    }
    if (data_0206e9e8.o->fd0 != 0) {
        saved                = data_0206e9e8.o->fcc;
        data_0206e9e8.o->fcc = 0x1000;
    }
    if (data_0206e67c == 0 && data_0206e6d4.fbc == 0) {
        func_01ff9df0(&data_0206e9e8.o->v74, &data_0206e9e8.o->v2c, &data_0206e9e8.o->v2c, data_0206e9e8.o->fcc);
        func_01ff9df0(&data_0206e9e8.o->v80, &data_0206e9e8.o->v68, &data_0206e9e8.o->v68, data_0206e9e8.o->fcc);
        func_01ff9df0(&data_0206e9e8.o->v8c, &data_0206e9e8.o->v14, &data_0206e9e8.o->v14, data_0206e9e8.o->fcc);
    }
    if (data_0206e9e8.o->fd0 != 0) {
        data_0206e9e8.o->fcc = saved;
        data_0206e9e8.o->fd0 = 0;
    }
    if (data_0206e9e8.fc != 0) {
        amp = data_0206e9e8.f6 >> 7;
        j.x = func_0203016c(-amp, amp);
        j.y = func_0203016c(-amp, amp);
        j.z = func_0203016c(-amp, amp);
        k.x = func_0203016c(-amp, amp);
        k.y = func_0203016c(-amp, amp);
        k.z = func_0203016c(-amp, amp);
        VEC_Add(&data_0206e9e8.o->v2c, &j, &j);
        VEC_Add(&data_0206e9e8.o->v68, &k, &k);
        pos              = &j;
        tgt              = &k;
        o                = data_0206e9e8.o;
        o->v2c           = *pos;
        data_0206e9e8.f6 = fxmul(data_0206e9e8.fa, data_0206e9e8.f6);
        if (data_0206e9e8.f6 <= data_020693f0) {
            data_0206e9e8.fc = 0;
        }
    } else {
        o   = data_0206e9e8.o;
        tgt = &o->v68;
        pos = &o->v2c;
    }
    G3i_LookAt_(pos, &o->v14, tgt, 1, &m);
    func_0204b038(&m, &data_0206e9e8.o->m38);
    data_0206e9e8.o->v5c = *(V3 *) &m.m[9];
}
