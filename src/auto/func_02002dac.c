#include "m2c.h"
typedef struct {
    s32 x, y, z;
} Vec;
typedef struct {
    u8 pad[0x14];
    Vec up;
    u8 pad20[0xC];
    Vec pos;
    u8 pad38[0x30];
    Vec target;
    u8 pad74[0x24];
    s32 tanX;
    s32 tanY;
    u8 padA0[0xC];
    s32 dist;
} Cam;
typedef struct {
    u8 pad[0xA0];
    Vec pos;
} Actor;
extern Cam *data_0206e9e8[];
extern Actor *data_0206ea14;
s32 FX_Div(s32, s32);
void VEC_Subtract(Vec *, Vec *, Vec *);
void VEC_Normalize(Vec *, Vec *);
void func_02002d50(Vec *, Vec *, Vec *, Vec *);
s32 VEC_DotProduct(Vec *, Vec *);
void VEC_MultAdd(s32, Vec *, Vec *, Vec *);

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}

void func_02002dac(s32 *pt, Vec *out) {
    s32 sx;
    s32 sy;
    s32 rx;
    s32 ry;
    s32 d;
    Vec right;
    Vec up;
    Vec back;
    Vec dir;
    Vec tmp;
    Vec fwd;
    sx = pt[0] - 128;
    sy = 96 - pt[1];
    rx = FX_Div(FX_Mul(data_0206e9e8[4]->tanX, sx << 12), 0x100000);
    ry = FX_Div(FX_Mul(data_0206e9e8[4]->tanY, sy << 12), 0xC0000);
    VEC_Subtract(&data_0206e9e8[4]->target, &data_0206e9e8[4]->pos, &fwd);
    VEC_Normalize(&fwd, &fwd);
    func_02002d50(&fwd, &right, &up, &back);
    dir.x = FX_Mul(back.x, -data_0206e9e8[4]->dist) + (FX_Mul(right.x, rx) + FX_Mul(up.x, ry));
    dir.y = FX_Mul(back.y, -data_0206e9e8[4]->dist) + (FX_Mul(right.y, rx) + FX_Mul(up.y, ry));
    dir.z = FX_Mul(back.z, -data_0206e9e8[4]->dist) + (FX_Mul(right.z, rx) + FX_Mul(up.z, ry));
    VEC_Normalize(&dir, &dir);
    VEC_Subtract(&data_0206ea14->pos, &data_0206e9e8[4]->pos, &tmp);
    tmp.y += 0x51E;
    d = VEC_DotProduct(&dir, &data_0206e9e8[4]->up);
    if (d != 0) {
        d = FX_Div(VEC_DotProduct(&tmp, &data_0206e9e8[4]->up), d);
        VEC_MultAdd(d, &dir, &data_0206e9e8[4]->pos, out);
    } else {
        out->x = 0;
        out->y = 0;
        out->z = 0;
    }
}
