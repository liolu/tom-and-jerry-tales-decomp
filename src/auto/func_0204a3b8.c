#include "m2c.h"

typedef struct Obj Obj;
struct Obj {
    u8 pad0[0xC0];
    u8 c0;
    u8 padc1[3];
    u16 c4;
    u8 padc6[0x110 - 0xC6];
    u32 flags;
    u8 pad114[0x13C - 0x114];
    s32 (*f13c)(s32, s32 *, s32 *, s32);
    s32 a140;
    s32 a144;
    s32 a148;
    u8 pad14c[0x15C - 0x14C];
    u32 a15c;
    s32 (*f160)(Obj *, s32);
    void (*f164)(Obj *);
};

s32 *NNS_SndArcGetStrmInfo(s32);
void func_0204ad24(Obj *, s32);

void func_0204a3b8(Obj *o) {
    s32 sp[4];
    s32 *r;
    u8 c;
    u16 w;
    u32 q;
    u32 m;

    sp[2] = o->a148;
    sp[3] = o->a144;
    sp[0] = o->a144;
    sp[1] = 0;
    if (o->f13c(0, &sp[2], &sp[0], o->a140) == 0) {
        return;
    }
    r = NNS_SndArcGetStrmInfo(sp[0]);
    if (r == 0) {
        return;
    }
    c = o->c0;
    w = o->c4;
    o->f164(o);
    func_0204ad24(o, *r);
    if (o->f160(o, *r) == 0) {
        return;
    }
    if (w != o->c4) {
        return;
    }
    if (c == 0 && o->c0 != 0) {
        return;
    }
    if (c != 0 && o->c0 == 0) {
        return;
    }
    o->a144 = sp[0];
    m       = (u32) o->c4 * (u32) sp[1];
    q       = m / 1000;
    o->a15c = q;
    if (q != 0 && o->c0 == 2) {
        o->flags |= 0x10;
    } else {
        o->flags &= ~0x10;
    }
    o->flags &= ~0x20;
}
