#include "m2c.h"
typedef struct {
    s32 a;
    s32 lo;
    s32 hi;
} Rng;
typedef struct Obj Obj;
struct Obj {
    s32 p0;
    s32 *f4;
    u8 p8[0xc];
    u8 f14[0xc];
    s32 f20;
    u8 p24[0xc];
    s16 f30;
    s16 f32;
    u8 p34[4];
    Obj *f38;
};
typedef struct {
    s16 id;
    u16 f2;
    u16 f4;
    u8 p6[0xa2];
    Obj *fa8;
} Ent;
typedef struct {
    u16 p0;
    u16 p2;
    u16 f4;
    u8 p6[0xa2];
    Obj *fa8;
} Own;
typedef struct {
    u8 p[0x10];
    u8 pa[0x1e];
    u16 f2e;
} Rec;
typedef struct {
    u8 b[16];
} B16;
typedef struct {
    u8 b[12];
} B12;
extern u32 func_0203adac(void);
extern void func_020376e8(Obj *, void *, void *, void *, void *);
extern Ent *func_0203a95c(s16);
extern void func_0204b918(s32 *, void *, void *);
extern u32 func_02036eb4(void *, s32);
extern void func_02036f18(void *);
extern void func_020374e8(Obj *, void *, void *, void *, void *);
extern u16 data_020a0f48;
extern Rng data_020a2e8c[];
extern Rng data_020a1bcc[];
extern s32 data_027e0080;
extern s32 (*data_020ac160)(u16, u16);

void func_02039a08(Own *arg0) {
    u32 sp4;
    B16 sp28;
    Ent *e;
    s32 k;
    u8 *spC;
    u16 i;
    u16 j;
    Obj *o;
    B12 sp1c;
    u32 cnt;
    Obj *q;
    B12 sp10;
    s32 lo;
    s32 d;
    u8 *sp8;
    Obj *r;
    s32 hi;
    u16 m;

    sp4 = func_0203adac();
    for (o = arg0->fa8; o != 0; o = o->f38) {
        lo = *o->f4 - o->f20;
        hi = *o->f4 + o->f20;
        if (o->f30 < o->f32) {
            for (i = 0; i < data_020a0f48; i++) {
                if (hi < data_020a2e8c[i].lo) {
                    break;
                }
                if (lo <= data_020a2e8c[i].hi) {
                    func_020376e8(o, (void *) data_020a2e8c[i].a, &sp28, &spC, &sp1c);
                }
            }
        } else {
            for (i = 0; i < data_020a0f48; i++) {
                if (lo > data_020a1bcc[i].hi) {
                    break;
                }
                if (hi >= data_020a1bcc[i].lo) {
                    func_020376e8(o, (void *) data_020a1bcc[i].a, &sp28, &spC, &sp1c);
                }
            }
        }
    }
    for (m = 0; sp4 > (u32) m; m++) {
        e = func_0203a95c((s16) m);
        if (e->id != -1 && (q = e->fa8) != 0) {
            do {
                for (r = arg0->fa8; r != 0; r = r->f38) {
                    func_020376e8(r, q, &sp28, &spC, &sp1c);
                }
                q = q->f38;
            } while (q != 0);
        }
    }
    if (data_027e0080 != 0) {
        for (o = arg0->fa8; o != 0; o = o->f38) {
            k = o->f20;
            if (k < 0x1117) {
                k = 0x1117;
            }
            func_0204b918(o->f4, o->f14, &sp10);
            if (func_02036eb4(&sp10, k) != 0) {
                func_02036f18(&sp8);
                cnt = func_02036eb4(&sp10, o->f20);
                if (cnt != 0) {
                    func_02036f18(&sp8);
                    for (j = 0; cnt > j; j++) {
                        if (data_020ac160 == 0) {
                            func_020374e8(o, sp8 + j * 0x30 + 0x10, &sp28, &spC, &sp1c);
                        } else {
                            d = j * 0x30;
                            if (data_020ac160(arg0->f4, *(u16 *) (sp8 + d + 0x2e)) == 0) {
                                func_020374e8(o, sp8 + d + 0x10, &sp28, &spC, &sp1c);
                            }
                        }
                    }
                }
            }
        }
    }
}
