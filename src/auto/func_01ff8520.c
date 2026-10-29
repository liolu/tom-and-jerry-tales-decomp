/* compiler: 2.0/sp1p5 */
#include "m2c.h"

typedef struct {
    s16 x, y, z;
    s16 n;
    s32 unk8;
    u8 m0, m1, w0, w1;
} SkinVtx;

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
    SkinVtx verts[1];
} SkinModel;

extern void *func_01ff8000(void *heap, s32 size);
extern void func_01ff8064(void *mtx, SkinVtx *in, s16 *out);
extern void MIi_CpuCopyFast(const void *src, void *dst, u32 size);

extern SkinVtx *data_027e0078;
extern u32 *data_027e0064;
extern u32 *data_027e0060;
extern s32 data_027e007c;

void func_01ff8520(SkinModel *model, u8 *mtx, void *heap) {
    s16 a[3];
    s16 b[3];
    u32 *p;
    s32 i;
    SkinVtx *v;
    SkinFace *f;
    u32 k;

    f             = (SkinFace *) &model->verts[model->nverts];
    v             = func_01ff8000(heap, model->nverts * 16);
    data_027e0078 = v;
    MIi_CpuCopyFast(model->verts, v, model->nverts * 16);
    for (i = model->nverts; i > 0; i--) {
        if (v->w0 == 0xFF) {
            func_01ff8064(mtx + v->m0 * 0x30, v, &v->x);
        } else {
            func_01ff8064(mtx + v->m0 * 0x30, v, a);
            func_01ff8064(mtx + v->m1 * 0x30, v, b);
            v->x = (a[0] * v->w0 + b[0] * v->w1) >> 8;
            v->y = (a[1] * v->w0 + b[1] * v->w1) >> 8;
            v->z = (a[2] * v->w0 + b[2] * v->w1) >> 8;
        }
        v++;
    }
    p              = data_027e0064 + 2;
    *data_027e0060 = 0x232022;
    for (i = model->nfaces; i > 0; i--) {
        k     = f->i0;
        p[1]  = f->t0;
        p[2]  = data_027e0078[k].n;
        p[3]  = ((u16 *) &data_027e0078[k])[0] | (((u16 *) &data_027e0078[k])[1] << 16);
        p[4]  = (u16) data_027e0078[k].z;
        k     = f->i1;
        p[6]  = f->t1;
        p[7]  = data_027e0078[k].n;
        p[8]  = ((u16 *) &data_027e0078[k])[0] | (((u16 *) &data_027e0078[k])[1] << 16);
        p[9]  = (u16) data_027e0078[k].z;
        k     = f->i2;
        p[11] = f->t2;
        p[12] = data_027e0078[k].n;
        p[13] = ((u16 *) &data_027e0078[k])[0] | (((u16 *) &data_027e0078[k])[1] << 16);
        p[14] = (u16) data_027e0078[k].z;
        f++;
        p += 15;
    }
    data_027e0060 = p;
    *p++          = 0x41;
    data_027e007c = (p - data_027e0064) * 4;
}
