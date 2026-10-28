#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    s32 *a;
    s32 *b;
    s32 *c;
} W;
s32 func_020386ec(void *, void *, s32, void *, void *, void *);
void func_02039d0c(void *, void *, s32);
void VEC_Add(s32, void *, void *);
void VEC_Subtract(void *, void *, void *);
s32 VEC_DotProduct(void *, void *);
void VEC_CrossProduct(void *, void *, void *);
void VEC_Normalize(void *, void *);

s32 func_02038c8c(W *arg0, W *arg1, V *arg2, V *arg3, s32 *arg4) {
    V sp68;
    V sp5C;
    V sp50;
    V sp44;
    V sp38;
    V sp2C;
    V sp20;
    V sp14;
    V sp8;
    s32 r4;
    s32 r0;
    s32 d;

    VEC_Add(((s32 *) arg0)[1], (u8 *) arg0 + 0x14, &sp14);
    VEC_Add(((s32 *) arg1)[1], (u8 *) arg1 + 0x14, &sp8);
    r4 = func_020386ec(&sp14, &sp8, ((s32 *) arg1)[0], (u8 *) arg1 + 0x24, &sp5C, &sp2C);
    r0 = func_020386ec(&sp8, &sp14, ((s32 *) arg0)[0], (u8 *) arg0 + 0x24, &sp68, &sp20);
    if (r4 == 0 || r0 == 0) {
        return 0;
    }
    if (r4 > 1 && r0 > 1) {
        if (r4 == 2 && r0 == 2) {
            VEC_CrossProduct(&sp2C, &sp20, &sp38);
            if (VEC_DotProduct(&sp38, &sp38) == 0) {
                VEC_Subtract((void *) ((s32 *) arg0)[2], (void *) ((s32 *) arg1)[2], &sp38);
            }
            VEC_Normalize(&sp38, &sp38);
        } else {
            VEC_Subtract((void *) ((s32 *) arg0)[2], (void *) ((s32 *) arg1)[2], &sp38);
            VEC_Normalize(&sp38, &sp38);
        }
    } else if (r4 == 1) {
        sp38 = sp2C;
    } else {
        sp38 = sp20;
    }
    VEC_Subtract(&sp5C, &sp8, &sp50);
    VEC_Subtract(&sp68, &sp5C, &sp44);
    if (VEC_DotProduct(&sp38, &sp50) < 0) {
        func_02039d0c(&sp38, &sp38, -0x1000);
    }
    d     = VEC_DotProduct(&sp38, &sp44);
    *arg4 = d;
    if (d < 0) {
        *arg4 = (s32) (((s64) d * -0x1000 + 0x800) >> 12);
    }
    sp44.x = (s32) ((((s64) sp44.x << 11) + 0x800) >> 12);
    sp44.y = (s32) ((((s64) sp44.y << 11) + 0x800) >> 12);
    sp44.z = (s32) ((((s64) sp44.z << 11) + 0x800) >> 12);
    VEC_Add((s32) &sp5C, &sp44, arg3);
    arg2->x           = sp38.x;
    arg2->y           = sp38.y;
    arg2->z           = sp38.z;
    ((s32 *) arg2)[3] = VEC_DotProduct(&sp38, arg3);
    return 1;
}
