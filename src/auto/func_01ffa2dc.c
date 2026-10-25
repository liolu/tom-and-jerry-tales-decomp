#include "m2c.h"

void func_01ffa0b0(void *, void *);
void *func_01ffa0d8(void *, void *, s32);
s32 func_01ffa154(void *, void *);
void *func_01ffa1d8(void *, void *, void *);
void func_01ffa220(void *, void *);
extern u8 data_02064348[];

void *func_01ffa2dc(void *a, void *b, void *out, s32 t) {
    s32 sp[4];
    s32 d;
    s32 w;
    s32 w2;
    void *r6;
    void *r4;

    if (t == 0) {
        func_01ffa0b0(a, out);
        return out;
    }
    func_01ffa0b0(b, &sp[2]);
    d = func_01ffa154(a, b);
    if (d < 0) {
        d = -d;
        func_01ffa0d8(&sp[2], &sp[2], -0x1000);
    }
    if (d > 0x1000) {
        d = 0x1000;
    }
    if (d > 0) {
        w = 0x1000 - t;
    } else {
        s32 ip = 0x1000 - t;
        s32 i1 = (s32) (((long long) ip * 0x1922 + 0x800) >> 12) >> 4;
        s32 i2 = (s32) (((long long) t * 0x1922 + 0x800) >> 12) >> 4;
        w      = *(s16 *) (data_02064348 + i1 * 4);
        t      = *(s16 *) (data_02064348 + i2 * 4);
    }
    r6 = func_01ffa0d8(a, &sp[0], w);
    r4 = func_01ffa0d8(&sp[2], &sp[2], t);
    r4 = func_01ffa1d8(r6, r4, out);
    func_01ffa220(r4, r4);
    return r4;
}
