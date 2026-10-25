#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 pad[3];
    s32 v[3];
    s32 f20;
    s32 pad2[6];
} S;

extern s32 func_02037020(S *, void *, s32 *, s32, s32);
extern s32 func_020370b0(S *, void *, s32 *, s32, s32);
extern s32 func_020372f8(S *, void *, s32 *, s32, s32);
extern s32 func_020381c0(S *, void *);
extern void func_02039d0c(s32 *, s32 *, s32);
extern void func_02051a48(void);

s32 func_02037384(s32 arg0, s32 arg1, u8 *arg2, s32 *arg3, s32 arg4, s32 arg5) {
    S s;
    s32 r;
    s32 m;
    s16 t;

    s.f4  = arg0;
    s.f20 = arg1;
    func_02039d0c(s.v, s.v, 0);
    if (*(u16 *) (arg2 + 0x36) == 0) {
        return 0;
    }
    if (func_020381c0(&s, arg2) != 0) {
        return 0;
    }
    t = (s16) (((u32) (*(s32 *) (arg2 + 0x10) << 27) >> 29) * 8) | 1;
    switch (t) {
        case 9:
            m       = -1;
            r       = func_020370b0(&s, arg2, arg3, arg4, arg5);
            arg3[0] = arg3[0] * m;
            arg3[1] = arg3[1] * m;
            arg3[2] = arg3[2] * m;
            break;
        case 17:
            m       = -1;
            r       = func_02037020(&s, arg2, arg3, arg4, arg5);
            arg3[0] = arg3[0] * m;
            arg3[1] = arg3[1] * m;
            arg3[2] = arg3[2] * m;
            break;
        case 33:
            r = func_020372f8(&s, arg2, arg3, arg4, arg5);
            break;
        default:
            r = 0;
            func_02051a48();
            break;
    }
    return r;
}
