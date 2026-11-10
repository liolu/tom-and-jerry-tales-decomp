#include "m2c.h"
typedef struct {
    s32 x, y, z;
} V3;
typedef struct {
    s16 def;
    u8 pad2[2];
    V3 pos;
    s32 phase;
    s16 level;
    u16 timer;
} Light;
typedef struct {
    u8 falloff;
    u8 anim;
    u16 r : 5;
    u16 g : 5;
    u16 b : 5;
    u16 pad : 1;
    s32 inner;
    s32 radius;
    s16 hi;
    s16 lo;
    s16 decay;
    s16 floor;
    u16 tmin;
    u16 tmax;
    s32 speed;
    u8 pad1c[0x2C - 0x1C];
} LightDef;
extern s32 data_0206d4c4;
extern u16 data_020b8140;
extern Light data_020b82fc[];
extern LightDef data_020b8144[];
extern s16 data_02064348[];
s32 func_02030144(void);
void func_02030134(s32);
s32 abs(s32);
s32 FX_Sqrt(s32);
s32 FX_Div(s32, s32);
Light *func_0203b398(s32);
LightDef *func_0203b3ac(s16);
void VEC_Normalize(V3 *, V3 *);
s32 func_0203016c(s32, s32);
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800LL) >> 12);
}
static inline LightDef *getDef(s32 i) {
    return &data_020b8144[i];
}
s32 func_0203b3c0(V3 *pos, V3 *dirs, u16 *colors) {
    s32 str[4];
    s32 i;
    s32 n;
    s32 s2;
    Light *L2;
    s32 seed;
    LightDef *def2;
    Light *L;
    s32 d;
    s32 s;
    s32 k;
    int r;
    LightDef *def;
    s32 dx;
    s32 amp;
    s32 j;
    s32 idx[4];
    V3 amb;
    s32 dy;
    s32 max;
    s32 dz;
    V3 *out;
    seed = func_02030144();
    if (data_0206d4c4 == 0) {
        return 0;
    }
    func_02030134(seed + 0x2775);
    idx[0] = -1;
    str[0] = 0;
    for (i = 0; i < data_020b8140; i++) {
        L = &data_020b82fc[i];
        if (L->def < 0) {
            continue;
        }
        def = getDef(L->def);
        r   = L->pos.x;
        dx  = pos->x - r;
        dy  = pos->y - L->pos.y;
        dz  = pos->z - L->pos.z;
        r   = def->radius;
        if (abs(dx) > r || abs(dy) > r || abs(dz) > r) {
            continue;
        }
        d = FX_Sqrt((dx >> 6) * (dx >> 6) + (dy >> 6) * (dy >> 6) + (dz >> 6) * (dz >> 6));
        if (def->falloff == 0) {
            s = 0x1000 - FX_Div(d, def->radius);
            if (s < 0) {
                s = 0;
            }
        } else if (def->falloff == 1) {
            if (d <= def->inner) {
                s = 0x1000;
            } else {
                s = 0x1000 - FX_Div(d - def->inner, def->radius - def->inner);
                if (s < 0) {
                    s = 0;
                }
            }
        }
        if (s == 0) {
            continue;
        }
        if (pos->x == L->pos.x && pos->y == L->pos.y && pos->z == L->pos.z) {
            continue;
        }
        for (j = 0; j < 3; j++) {
            if (s > str[j]) {
                for (k = 2; k > j; k--) {
                    idx[k] = idx[k - 1];
                    str[k] = str[k - 1];
                }
                idx[j] = i;
                str[j] = s;
                break;
            }
        }
    }
    n   = 0;
    out = dirs;
    for (j = 0; j < 3; out++, j++) {
        i  = idx[j];
        s2 = str[j];
        if (i == -1) {
            break;
        }
        L2     = func_0203b398(i);
        def2   = func_0203b3ac(L2->def);
        out->x = pos->x - L2->pos.x;
        out->y = pos->y - L2->pos.y;
        out->z = pos->z - L2->pos.z;
        VEC_Normalize(&dirs[j], out);
        if (out->x == 0x1000) {
            out->x = 0xFFF;
        }
        if (out->y == 0x1000) {
            out->y = 0xFFF;
        }
        if (out->z == 0x1000) {
            out->z = 0xFFF;
        }
        if (def2->anim == 1) {
            if (L2->level > def2->floor) {
                L2->level -= def2->decay;
                if (L2->level < def2->floor) {
                    L2->level = def2->floor;
                }
            }
            if (L2->timer == 0) {
                L2->level += func_0203016c(def2->lo, def2->hi);
                if (L2->level > 0x1000) {
                    L2->level = 0x1000;
                }
                L2->timer = func_0203016c(def2->tmin, def2->tmax);
            } else {
                L2->timer--;
            }
            s2 = FX_Mul(s2, L2->level);
            if (s2 > 0x1000) {
                s2 = 0x1000;
            }
        } else if (def2->anim == 2) {
            amp = def2->hi - def2->lo;
            L2->phase += def2->speed;
            if (L2->phase >= 12867.95264) {
                L2->phase -= 12867.95264;
            }
            {
                s32 h = (s32) (((s64) L2->phase * 0x28BE60DB9391LL + 0x80000000000LL) >> 32);
                s32 t = (s32) ((u32) (h << 4) >> 16) >> 4;
                s2    = FX_Mul(s2, def2->lo + FX_Mul(amp, data_02064348[t * 2]));
            }
            if (s2 > 0x1000) {
                s2 = 0x1000;
            }
        }
        colors[j] =
            ((def2->r * s2 + 0x7F) >> 12) | (((def2->g * s2 + 0x7F) >> 12) << 5) | (((def2->b * s2 + 0x7F) >> 12) << 10);
        n++;
    }
    max = 0;
    for (j = 0; j < n; j++) {
        if (str[j] > max) {
            max = str[j];
        }
    }
    amb.x = 0x200;
    amb.y = 0x200;
    amb.z = -0xBFF;
    VEC_Normalize(&amb, &amb);
    dirs[n]   = amb;
    k         = 0x1000 - FX_Mul(max, 0xC00);
    k         = (k * 0x16 + 0x7F) >> 12;
    colors[n] = k | (k << 5) | (k << 10);
    func_02030134(seed);
    return n + 1;
}
