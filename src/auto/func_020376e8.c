#include "m2c.h"
typedef struct {
    s32 x, y, z, w;
} V4;
typedef struct Body {
    u8 pad0[0x10];
    u32 lo : 2;
    u32 shape : 3;
    u32 rest : 27;
    u8 pad14[0x20];
    s16 id;
    u16 active;
} Body;
typedef struct {
    s16 id;
    u16 pad;
    u16 type;
} Ent;
typedef s32 (*Filter)(u16, u16);
extern Filter data_020ac16c;
s32 func_020381c0(Body *, Body *);
s32 func_020370b0(Body *, Body *, V4 *, s32, s32 *);
s32 func_02037020(Body *, Body *, V4 *, s32, s32 *);
s32 func_020372f8(Body *, Body *, V4 *, s32, s32 *);
s32 func_02037134(Body *, Body *, V4 *, s32, s32 *);
s32 func_02037264(Body *, Body *, V4 *, s32, s32 *);
s32 func_020371cc(Body *, Body *, V4 *, s32, s32 *);
void func_02051a48(void);
Ent *func_0203a95c(s32);
void func_0203a58c(s32);
void func_02039280(Ent *, Ent *, s32, V4 *, s32);

s32 func_020376e8(Body *a, Body *b, V4 *out, s32 *arg, s32 p) {
    s32 r;
    s16 key;
    Ent *ea;
    Ent *eb;
    if (a->active == 0 || b->active == 0) {
        return 0;
    }
    if (a->id == b->id) {
        return 0;
    }
    if (func_020381c0(a, b) != 0) {
        return 0;
    }
    out->w = 0;
    out->z = 0;
    out->y = 0;
    out->x = 0;
    key    = (s16) (b->shape << 3) | a->shape;
    switch (key) {
        case 9:
            r = func_020370b0(a, b, out, p, arg);
            out->x *= -1;
            out->y *= -1;
            out->z *= -1;
            break;
        case 17:
            r = func_02037020(a, b, out, p, arg);
            out->x *= -1;
            out->y *= -1;
            out->z *= -1;
            break;
        case 10:
            r = func_02037020(b, a, out, p, arg);
            break;
        case 33:
            r = func_020372f8(a, b, out, p, arg);
            break;
        case 12:
            r = func_020372f8(b, a, out, p, arg);
            out->x *= -1;
            out->y *= -1;
            out->z *= -1;
            break;
        case 18:
            r = func_02037134(a, b, out, p, arg);
            break;
        case 20:
            r = func_02037264(a, b, out, p, arg);
            break;
        case 34:
            r = func_02037264(b, a, out, p, arg);
            out->x *= -1;
            out->y *= -1;
            out->z *= -1;
            break;
        case 36:
            r = func_020371cc(a, b, out, p, arg);
            break;
        default:
            r = 0;
            func_02051a48();
            break;
    }
    if (r != 0) {
        ea = func_0203a95c(a->id);
        eb = func_0203a95c(b->id);
        func_0203a58c(eb->id);
        if (data_020ac16c == NULL) {
            func_02039280(ea, eb, p, out, *arg);
        } else if (data_020ac16c(ea->type, eb->type) == 0) {
            func_02039280(ea, eb, p, out, *arg);
        }
    }
    return r;
}
