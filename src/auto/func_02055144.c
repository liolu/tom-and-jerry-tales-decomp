#include "m2c.h"
typedef struct {
    u32 a, b, c;
} V3;
typedef struct {
    u8 pad0[8];
    u32 f8;
    u32 flags;
    u8 pad1[0x20];
    V3 pos;
} Obj;
extern s32 func_02054738(Obj *, s32);
s32 func_02055144(Obj *o, V3 *v) {
    o->f8  = v->a;
    o->pos = *v;
    if (func_02054738(o, 2) == 0) {
        return 0;
    }
    o->flags |= 0x20;
    return 1;
}
