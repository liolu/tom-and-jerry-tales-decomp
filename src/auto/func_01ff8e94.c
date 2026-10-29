#include "m2c.h"

typedef struct {
    s32 x, y, z;
} VecFx32;

typedef struct {
    VecFx32 n;
    s32 d;
} ColPlane;

typedef struct {
    VecFx32 edgeN[3];
    s32 edgeD[3];
    ColPlane plane;
    u8 unk40[4];
    u16 vtx[3];
    u16 attr;
    u16 flag;
    u16 pad;
} ColTri;

typedef struct {
    u8 unk0[8];
    ColTri *tris;
    VecFx32 *verts;
} ColMesh;

typedef struct {
    ColPlane plane;
    VecFx32 pos;
    VecFx32 dir;
    s32 dist;
    u16 idx;
    u16 attr;
} ColHit;

typedef struct {
    u16 tested;
    u16 count;
    u16 unk4;
    u16 unk6;
    u16 flagged;
    u16 rejected;
    s32 enabled;
} ColState;

typedef struct {
    u8 unk0[8];
    u16 count;
} ColCell;

extern ColState data_020a0b78;
extern ColHit data_020a0b88[];
extern ColMesh *data_027e0080;

extern u16 *func_020365ec(ColCell *cell);
extern void MIi_CpuCopyFast(const void *src, void *dst, u32 size);
extern s32 func_01ff8ac4(VecFx32 *pos, VecFx32 *a, VecFx32 *b, VecFx32 *c, ColPlane *plane, VecFx32 *out);
extern void VEC_Subtract(const VecFx32 *a, const VecFx32 *b, VecFx32 *ab);
extern s32 VEC_DotProduct(const VecFx32 *a, const VecFx32 *b);
extern void VEC_Normalize(const VecFx32 *src, VecFx32 *dst);
extern int abs(int);

static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}

s32 func_01ff8e94(VecFx32 *pos, s32 radius, ColCell *cell, VecFx32 *out) {
    ColTri t;
    VecFx32 near;
    VecFx32 dir;
    VecFx32 diff;
    VecFx32 v0;
    VecFx32 v1;
    VecFx32 v2;
    int best;
    int t2;
    u16 *list;
    int found;
    u16 n;
    u16 j;

    int rr;
    u16 cnt;
    u16 i;
    ColHit *e;
    int hit;
    u16 k;
    ColTri *tri;
    int dd;
    int d2;
    j    = data_020a0b78.count - 1;
    n    = cell->count;
    best = 0;
    list = func_020365ec(cell);
    rr   = FX_Mul(radius, radius);
    for (i = 0; i < n; i++) {
        tri = &data_027e0080->tris[list[i]];
        hit = 1;
        if (tri->flag != 0) {
            data_020a0b78.flagged++;
            continue;
        }
        tri->flag++;
        MIi_CpuCopyFast(tri, &t, sizeof(ColTri));
        if (abs(abs(VEC_DotProduct(&t.plane.n, pos)) - abs(t.plane.d)) - radius > 0) {
            data_020a0b78.rejected++;
            continue;
        }
        dd = VEC_DotProduct(&t.edgeN[0], pos) - t.edgeD[0] - radius;
        if (dd > 0) {
            data_020a0b78.rejected++;
            continue;
        }
        dd = VEC_DotProduct(&t.edgeN[1], pos) - t.edgeD[1] - radius;
        if (dd > 0) {
            data_020a0b78.rejected++;
            continue;
        }
        dd = VEC_DotProduct(&t.edgeN[2], pos) - t.edgeD[2] - radius;
        if (dd > 0) {
            data_020a0b78.rejected++;
            continue;
        }
        if (data_020a0b78.enabled != 0) {
            v0 = data_027e0080->verts[t.vtx[0]];
            v1 = data_027e0080->verts[t.vtx[1]];
            v2 = data_027e0080->verts[t.vtx[2]];
            func_01ff8ac4(pos, &v0, &v1, &v2, &t.plane, &near);
            data_020a0b78.tested++;
            VEC_Subtract(pos, &near, &diff);
            d2 = VEC_DotProduct(&diff, &diff);
            if (best == 0) {
                *out = near;
                best = d2;
            }
            if (best - d2 >= 0) {
                *out = near;
                best = d2;
            }
            if (d2 <= rr && d2 > 0) {
                hit = 1;
            } else {
                hit = 0;
            }
        }
        if (hit) {
            if (data_020a0b78.enabled != 0) {
                t2 = VEC_DotProduct(&near, &t.plane.n);
                VEC_Normalize(&diff, &dir);
                dd = VEC_DotProduct(&diff, &dir);
            }
            found = 0;
            hit   = data_020a0b78.enabled;
            if (hit != 0) {
                cnt = data_020a0b78.count;
                for (j = 0; j < cnt && found == 0; j++) {
                    if (list[i] == data_020a0b88[j].idx) {
                        found = 1;
                    }
                    if (dd < data_020a0b88[j].dist) {
                        break;
                    }
                }
            } else {
                j++;
            }
            if (found == 0 && j < 20) {
                cnt = data_020a0b78.count;
                for (k = cnt; k >= j + 1 && k < 20; k--) {
                    data_020a0b88[k] = data_020a0b88[k - 1];
                }
                e        = &data_020a0b88[j];
                e->plane = tri->plane;
                if (hit != 0) {
                    e->plane.d = t2;
                    e->dir     = dir;
                    e->pos     = near;
                    e->dist    = dd;
                }
                e->attr = t.attr;
                e->idx  = list[i];
                if (cnt < 20) {
                    data_020a0b78.count++;
                }
            }
        } else {
            data_020a0b78.rejected++;
        }
    }
    return best;
}
