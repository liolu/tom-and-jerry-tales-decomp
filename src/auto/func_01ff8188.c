#include "m2c.h"

typedef struct {
    s16 x, y, z;
    u16 nx, ny, nz;
    u8 m0, m1, w0, w1;
} SkinVtxN;

typedef struct {
    u32 i0 : 10;
    u32 i1 : 10;
    u32 i2 : 10;
    u32 pad : 2;
    u32 t0, t1, t2;
} SkinFace;

typedef struct {
    s32 unk0;
    s32 nverts;
    s32 nfaces;
    s32 unkC;
    SkinVtxN verts[1];
} SkinModelN;

extern void *func_01ff8000(void *heap, s32 size);
extern void func_01ff8064(void *mtx, void *in, s16 *out);
extern void func_01ff8104(void *mtx, void *in, s16 *out);
extern void MIi_CpuCopyFast(const void *src, void *dst, u32 size);

extern SkinVtxN *data_027e0078;
extern u32 *data_027e0070;
extern u32 *data_027e006c;
extern s32 data_027e0068;

void func_01ff8188(SkinModelN *model, u8 *mtx, void *heap) {
    s16 a[3];
    s16 b[3];
    u32 *p;
    s32 i;
    SkinVtxN *v;
    SkinFace *f;
    u32 k;

    f             = (SkinFace *) &model->verts[model->nverts];
    v             = func_01ff8000(heap, model->nverts * 16);
    data_027e0078 = v;
    MIi_CpuCopyFast(model->verts, v, model->nverts * 16);
    for (i = model->nverts; i > 0; i--) {
        if (v->w0 == 0xFF) {
            func_01ff8064(mtx + v->m0 * 0x30, v, &v->x);
            func_01ff8104(mtx + v->m0 * 0x30, &v->nx, (s16 *) &v->nx);
        } else {
            func_01ff8064(mtx + v->m0 * 0x30, v, a);
            func_01ff8064(mtx + v->m1 * 0x30, v, b);
            v->x = (a[0] * v->w0 + b[0] * v->w1) >> 8;
            v->y = (a[1] * v->w0 + b[1] * v->w1) >> 8;
            v->z = (a[2] * v->w0 + b[2] * v->w1) >> 8;
            func_01ff8104(mtx + v->m0 * 0x30, &v->nx, a);
            func_01ff8104(mtx + v->m1 * 0x30, &v->nx, b);
            v->nx = (a[0] * v->w0 + b[0] * v->w1) >> 8;
            v->ny = (a[1] * v->w0 + b[1] * v->w1) >> 8;
            v->nz = (a[2] * v->w0 + b[2] * v->w1) >> 8;
        }
        v++;
    }
    p              = data_027e0070 + 2;
    *data_027e006c = 0x232122;
    for (i = model->nfaces; i > 0; i--) {
        k    = f->i0;
        p[1] = f->t0;
        p[2] = (((u16 *) &data_027e0078[k])[3] >> 3) | ((((u16 *) &data_027e0078[k])[4] >> 3) << 10) |
               ((((u16 *) &data_027e0078[k])[5] >> 3) << 20);
        p[3] = ((u16 *) &data_027e0078[k])[0] | (((u16 *) &data_027e0078[k])[1] << 16);
        p[4] = (u16) data_027e0078[k].z;
        k    = f->i1;
        p[6] = f->t1;
        p[7] = (((u16 *) &data_027e0078[k])[3] >> 3) | ((((u16 *) &data_027e0078[k])[4] >> 3) << 10) |
               ((((u16 *) &data_027e0078[k])[5] >> 3) << 20);
        p[8]  = ((u16 *) &data_027e0078[k])[0] | (((u16 *) &data_027e0078[k])[1] << 16);
        p[9]  = (u16) data_027e0078[k].z;
        k     = f->i2;
        p[11] = f->t2;
        p[12] = (((u16 *) &data_027e0078[k])[3] >> 3) | ((((u16 *) &data_027e0078[k])[4] >> 3) << 10) |
                ((((u16 *) &data_027e0078[k])[5] >> 3) << 20);
        p[13] = ((u16 *) &data_027e0078[k])[0] | (((u16 *) &data_027e0078[k])[1] << 16);
        p[14] = (u16) data_027e0078[k].z;
        f++;
        p += 15;
    }
    data_027e006c = p;
    *p++          = 0x41;
    data_027e0068 = (p - data_027e0070) * 4;
}
