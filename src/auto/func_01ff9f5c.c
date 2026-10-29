/* compiler: 2.0/sp1p5 */
#include "m2c.h"
typedef struct {
    s32 x, y, z, w;
} Quat;
typedef struct {
    s32 _00, _01, _02, _10, _11, _12, _20, _21, _22, _30, _31, _32;
} MtxFx43;
static inline s32 FX_Mul(s32 a, s32 b) {
    return (s32) (((s64) a * b + 0x800) >> 12);
}
void func_01ff9f5c(Quat *q, MtxFx43 *m) {
    s32 xx = FX_Mul(q->x, q->x);
    s32 xy = FX_Mul(q->x, q->y);
    s32 xz = FX_Mul(q->x, q->z);
    s32 xw = FX_Mul(q->x, q->w);
    s32 yy = FX_Mul(q->y, q->y);
    s32 yz = FX_Mul(q->y, q->z);
    s32 yw = FX_Mul(q->y, q->w);
    s32 zz = FX_Mul(q->z, q->z);
    s32 zw = FX_Mul(q->z, q->w);
    m->_00 = 0x1000 - 2 * (yy + zz);
    m->_10 = 2 * (xy - zw);
    m->_20 = 2 * (xz + yw);
    m->_01 = 2 * (xy + zw);
    m->_11 = 0x1000 - 2 * (xx + zz);
    m->_21 = 2 * (yz - xw);
    m->_02 = 2 * (xz - yw);
    m->_12 = 2 * (yz + xw);
    m->_22 = 0x1000 - 2 * (xx + yy);
    m->_30 = m->_31 = m->_32 = 0;
}
