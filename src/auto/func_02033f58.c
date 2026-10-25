#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    s32 life;
    s32 size;
    s32 dsize;
    s32 r, g, b;
    s32 dr, dg, db;
    s32 alpha;
    s32 dalpha;
    u32 lo : 8;
    u32 mid : 16;
    u32 hi : 8;
    V3 pos;
    V3 vel;
    u8 pad48[0x54 - 0x48];
    s16 rot;
    s16 drot;
    u16 phase;
    s16 speed;
    s32 dist;
} Particle;
typedef struct {
    u8 pad0[8];
    V3 origin;
    V3 center;
    u8 pad20[0x2C - 0x20];
    Particle parts[1];
} Emitter;
typedef struct {
    u8 pad0[4];
    s32 type;
    s32 local;
    u8 pad0c;
    u8 count;
    u8 pad0e[0x14 - 0xE];
    s32 sphere;
    s32 p18, p1c, p20, p24, p28, p2c;
    s32 radial;
    s32 p34, p38;
    V3 dir;
    s32 p48, p4c;
    u8 pad50[0x60 - 0x50];
    s32 p60, p64;
    u8 pad68[0x70 - 0x68];
    u8 f70;
    u8 f71;
    u8 f72;
    u8 f73;
    s32 f74;
    s32 p78, p7c, p80, p84;
    u16 col0;
    u16 col1;
    s32 p8c, p90, p94, p98, p9c, pa0;
} Params;
extern V3 data_02064110;
extern V3 data_02064104;
s32 func_0203016c(s32, s32);
void func_01ff9e70(s32 *, s32 *, s32 *, s32);
void VEC_Normalize(V3 *, V3 *);
void func_02039d0c(V3 *, V3 *, s32);
void VEC_Add(V3 *, V3 *, V3 *);
void OS_Terminate(void);
s32 abs(s32);
s32 FX_Div(s32, s32);
s32 VEC_Mag(V3 *);
s32 VEC_Distance(V3 *, V3 *);
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
void func_02033f58(Emitter *e, Params *p, u32 i) {
    Particle *pt;
    V3 dir;
    s32 tmp[4];
    s32 x;
    s32 y;
    s32 z;
    s32 r, a, b;
    s32 life;
    pt       = &e->parts[i];
    pt->life = func_0203016c(p->p60, p->p64);
    if (p->sphere != 0) {
        r = func_0203016c(p->p18, p->p1c);
        a = func_0203016c(p->p20, p->p24);
        b = func_0203016c(p->p28, p->p2c);
        x = 0;
        y = 0;
        z = r;
        func_01ff9e70(tmp, &x, &z, a);
        func_01ff9e70(tmp, &x, &y, b);
        pt->pos.x = x;
        pt->pos.y = y;
        pt->pos.z = z;
    } else {
        pt->pos.x = func_0203016c(p->p18, p->p1c);
        pt->pos.y = func_0203016c(p->p20, p->p24);
        pt->pos.z = func_0203016c(p->p28, p->p2c);
    }
    pt->vel = data_02064110;
    if (p->radial != 0) {
        if (pt->pos.x == 0 && pt->pos.y == 0 && pt->pos.z == 0) {
            dir.z = 0;
            dir.x = 0;
            dir.y = 0x1000;
        } else {
            VEC_Normalize(&pt->pos, &dir);
        }
        func_02039d0c(&dir, &pt->vel, func_0203016c(p->p34, p->p38));
    }
    if (p->dir.x != 0 || p->dir.y != 0 || p->dir.z != 0) {
        func_02039d0c(&p->dir, &dir, func_0203016c(p->p48, p->p4c));
        VEC_Add(&dir, &pt->vel, &pt->vel);
    }
    if (p->local == 0) {
        VEC_Add(&pt->pos, &e->origin, &pt->pos);
    }
    life = pt->life << 12;
    if (life <= 0x1000) {
        OS_Terminate();
    }
    pt->size   = func_0203016c(p->p78, p->p7c);
    pt->dsize  = FX_Div(abs(pt->size - func_0203016c(p->p80, p->p84)), life);
    pt->r      = (p->col0 & 0x1F) << 12;
    pt->g      = ((p->col0 & 0x3E0) >> 5) << 12;
    pt->b      = ((p->col0 & 0x7C00) >> 10) << 12;
    pt->dr     = FX_Div(((p->col1 & 0x1F) << 12) - pt->r, life - 0x1000);
    pt->dg     = FX_Div((((p->col1 & 0x3E0) >> 5) << 12) - pt->g, life - 0x1000);
    pt->db     = FX_Div((((p->col1 & 0x7C00) >> 10) << 12) - pt->b, life - 0x1000);
    pt->alpha  = func_0203016c(p->p8c, p->p90);
    pt->dalpha = FX_Div(abs(pt->alpha - func_0203016c(p->p94, p->p98)), life);
    r          = func_0203016c(p->p9c, p->pa0);
    pt->rot    = 0;
    pt->drot   = FX_Mul(FX_Div(r, 0x1E000), 0x10000);
    pt->mid    = p->f74;
    if (p->f71 == 0) {
        pt->lo = 0;
    } else {
        pt->lo = p->f73 - 1;
    }
    if (p->type != 3) {
        return;
    }
    if (p->local != 0) {
        pt->dist = VEC_Mag(&pt->pos);
    } else {
        pt->dist = VEC_Distance(&pt->pos, &e->center);
    }
    pt->phase = i * 0x6488 / p->count;
    pt->speed = VEC_Mag(&pt->vel);
    if (pt->speed == 0) {
        pt->vel   = data_02064104;
        pt->speed = 0x190;
    } else {
        func_02039d0c(&pt->vel, &pt->vel, FX_Div(0x1000, pt->speed));
    }
}
