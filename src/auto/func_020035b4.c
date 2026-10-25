#include "m2c.h"

typedef struct {
    s32 x, y, z;
} V;
typedef struct {
    u8 pad[0x1E8C];
    s32 n;
} W;
typedef struct {
    u8 p0[0xC];
    s32 mode;
    u8 p1[0xA0 - 0x10];
    s32 f_a0;
    u8 p2[4];
    s32 f_a8;
    u8 p3[0xC4 - 0xAC];
    V v1;
    V v2;
    u8 p4[0x104 - 0xDC];
    W *w;
} S;
extern void func_02003658(void *, s32, void *);

void func_020035b4(S *s) {
    s32 i;
    s32 n;
    s32 minv;
    s32 best;
    s32 *ip;
    s32 mode;
    mode = s->mode;
    n    = s->w->n;
    minv = 0x7FFFFFFF;
    best = 0;
    if (mode == 0) {
        best = 31;
    } else {
        i = 0;
        if (n > 0) {
            ip = (s32 *) s;
            do {
                if (mode != 1 || (i != 0x2C && i != 0x2D)) {
                    s32 v = ip[0x158 / 4];
                    if (v < minv) {
                        best = i;
                        minv = v;
                    }
                }
                i++;
                ip += 5;
            } while (i < n);
        }
    }
    s->v2 = s->v1;
    func_02003658(s, best, &s->v1);
    s->v1.x = s->f_a0;
    s->v1.z = s->f_a8;
}
