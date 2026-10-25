#include "m2c.h"
typedef struct {
    s32 m[16];
} MtxFx44;
s32 func_0204b77c(s32, s32);
s32 func_0204b820(void);
s64 func_0204b7fc(void);

static inline void FX_DivAsync(s32 numer, s32 denom) {
    *(s64 *) 0x4000290 = (s64) numer << 32;
    *(u64 *) 0x4000298 = (u32) denom;
}

void func_0204db74(s32 fovySin, s32 fovyCos, s32 aspect, s32 n, s32 f, s32 scaleW, s32 draw, MtxFx44 *mtx) {
    s32 one_tan;
    s32 t;
    s64 t2;
    volatile u32 *p;
    one_tan = func_0204b77c(fovyCos, fovySin);
    if (scaleW != 0x1000) {
        one_tan = (one_tan * scaleW) / 0x1000;
    }
    FX_DivAsync(one_tan, aspect);
    if (draw) {
        *(volatile u32 *) 0x4000440 = 0;
        p                           = (volatile u32 *) 0x4000458;
    }
    if (mtx) {
        mtx->m[1]  = 0;
        mtx->m[2]  = 0;
        mtx->m[3]  = 0;
        mtx->m[4]  = 0;
        mtx->m[6]  = 0;
        mtx->m[7]  = 0;
        mtx->m[8]  = 0;
        mtx->m[9]  = 0;
        mtx->m[11] = -scaleW;
        mtx->m[12] = 0;
        mtx->m[13] = 0;
        mtx->m[15] = 0;
    }
    t = func_0204b820();
    FX_DivAsync(0x1000, n - f);
    if (draw) {
        *p = t;
        *p = 0;
        *p = 0;
        *p = 0;
        *p = 0;
        *p = one_tan;
        *p = 0;
        *p = 0;
        *p = 0;
        *p = 0;
    }
    if (mtx) {
        mtx->m[0] = t;
        mtx->m[5] = one_tan;
    }
    t2 = func_0204b7fc();
    if (scaleW != 0x1000) {
        t2 = (t2 * scaleW) / 0x1000;
    }
    {
        s32 a = (s32) ((t2 * (f + n) + 0x80000000LL) >> 32);
        s32 b = (s32) ((t2 * (s32) (((s64) (n << 1) * f + 0x800) >> 12) + 0x80000000LL) >> 32);
        if (draw) {
            *p = a;
            *p = -scaleW;
            *p = 0;
            *p = 0;
            *p = b;
            *p = 0;
        }
        if (mtx) {
            mtx->m[10] = a;
            mtx->m[14] = b;
        }
    }
}
