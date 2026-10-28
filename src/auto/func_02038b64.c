#include "m2c.h"
typedef struct {
    s32 f0;
    s32 f4;
    u8 pad[0xC];
    s32 m[3];
    s32 x;
    s32 y;
    s32 z;
    s32 f24;
} A;
typedef struct {
    s32 x, y, z;
} V;
void VEC_Add(s32, void *, void *);
void func_020386ec(void *, void *, s32, void *, void *, void *);
void VEC_Subtract(void *, void *, void *);
s32 VEC_DotProduct(void *, void *);
void VEC_Normalize(void *, void *);
s32 FX_Div(s32, s32);
void func_02039d0c(void *, void *, s32);
s32 func_02038b64(A *a, A *b, s32 *out, s32 *tmp, s32 *res) {
    s32 s4[3];
    s32 s3[3];
    s32 s2[3];
    s32 s1[3];
    s32 t;
    s32 k;
    VEC_Add(a->f4, (u8 *) a + 0x14, s2);
    VEC_Add(b->f4, (u8 *) b + 0x14, s1);
    func_020386ec(s2, s1, b->f0, (u8 *) b + 0x24, s3, s4);
    VEC_Subtract(s3, s2, tmp);
    if (VEC_DotProduct(tmp, tmp) == 0) {
        return 0;
    }
    VEC_Normalize(tmp, s4);
    *res = VEC_DotProduct(s4, tmp) - *(s32 *) ((u8 *) a + 0x20);
    t    = FX_Div(*res, 0x2000);
    if (*res < 0) {
        k = -1;
        k += 0;
        *res = *res * k;
    }
    func_02039d0c(s4, tmp, t + *(s32 *) ((u8 *) a + 0x20));
    VEC_Add((s32) s2, tmp, tmp);
    out[0] = s4[0];
    out[1] = s4[1];
    out[2] = s4[2];
    out[3] = VEC_DotProduct(s4, tmp);
    return 1;
}
