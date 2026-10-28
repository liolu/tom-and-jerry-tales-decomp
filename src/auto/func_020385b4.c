#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    s32 x, y, z, w;
} V4;
extern s32 VEC_DotProduct(V *, V *);
extern void func_02039d0c(V *, void *, s32);
extern void VEC_Subtract(V *, void *, V *);

void func_020385b4(V *arg0, V4 *arg1, V *arg2, V *arg3) {
    u8 sp[12];
    s32 t;
    arg3->x = arg1->x;
    arg3->y = arg1->y;
    arg3->z = arg1->z;
    t       = VEC_DotProduct(arg0, arg3) - arg1->w;
    *arg2   = *arg0;
    if (t < 0) {
        arg3->x = -arg3->x;
        arg3->y = -arg3->y;
        arg3->z = -arg3->z;
    }
    func_02039d0c(arg3, sp, t);
    VEC_Subtract(arg2, sp, arg2);
}
