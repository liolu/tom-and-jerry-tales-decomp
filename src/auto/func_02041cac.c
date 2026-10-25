#include "m2c.h"

typedef struct {
    u8 pad0[0x10];
    u32 flags;
    u8 pad14[0xC];
    s32 f20;
    s32 f24;
    s32 f28;
    s32 f2c;
} Obj;
typedef struct {
    s32 f0;
    s32 f4;
    f64 *f8;
} In;

extern Obj *func_01ff8000(s32, s32);
extern s32 func_0204b7c8(void);
extern void func_0204b980(void *, void *);
extern void func_02051a48(void);
extern s32 func_0205c108(void *, s32);
extern f64 func_0205d8c4(s32);
extern s32 func_020617bc(f64);
extern char data_0206dc90[];
extern char data_0206dc98[];
extern char data_0206dca0[];

Obj *func_02041cac(s32 *arg0, s32 arg1, s32 arg2) {
    Obj *o;
    s32 z;
    s32 key;
    o   = func_01ff8000(arg2, 0x3C);
    key = arg0[0];
    if (func_0205c108(data_0206dc90, key) == 0) {
        s32 t;
        o->flags = (o->flags & ~0x1C) | 4;
        t        = func_020617bc(0.5 + 4096.0 * func_0205d8c4(arg0[2]));
        o->f20   = t;
        o->f24   = t;
        o->f28   = 0;
        o->f2c   = 0;
    } else if (func_0205c108(data_0206dc98, key) == 0) {
        o->flags = (o->flags & ~0x1C) | 0x10;
        o->f24   = func_020617bc(0.5 + 4096.0 * func_0205d8c4(arg0[2]));
        o->f28   = func_020617bc(0.5 + 4096.0 * func_0205d8c4(arg0[3]));
        o->f2c   = func_020617bc(0.5 + 4096.0 * func_0205d8c4(arg0[4]));
        func_0204b980(&o->f24, &o->f24);
        o->f20 = func_0204b7c8();
    } else if (func_0205c108(data_0206dca0, key) == 0) {
        o->flags = (o->flags & ~0x1C) | 8;
        o->f24   = func_020617bc(0.5 + 4096.0 * func_0205d8c4(arg0[2]));
        o->f28   = func_020617bc(0.5 + 4096.0 * func_0205d8c4(arg0[3]));
        o->f2c   = 0;
        func_0204b980(&o->f24, &o->f24);
        o->f20 = func_0204b7c8();
    } else {
        func_02051a48();
    }
    z                          = 0;
    *(s16 *) ((u8 *) o + 0x36) = 1;
    *(s32 *) ((u8 *) o + 4)    = z;
    *(s32 *) ((u8 *) o + 0)    = z;
    *(s16 *) ((u8 *) o + 0x34) = z - 1;
    o->flags &= ~0x20;
    *(s32 *) ((u8 *) o + 0x38) = z;
    *(s32 *) ((u8 *) o + 0x14) = z;
    *(s32 *) ((u8 *) o + 0x18) = z;
    *(s32 *) ((u8 *) o + 0x1c) = z;
    return o;
}
