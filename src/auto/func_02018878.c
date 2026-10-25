#include "m2c.h"
typedef struct {
    s32 x, y;
} P;
s32 func_02018878(P *a, P *b, P *c, P *d) {
    s32 A, B, C;
    s32 fc, fd, fa, fb;
    s32 s0, s1;
    A  = b->y - a->y;
    B  = a->x - b->x;
    C  = b->x * a->y - a->x * b->y;
    fc = A * c->x + B * c->y + C;
    fd = A * d->x + B * d->y + C;
    if (fc != 0 && fd != 0) {
        s0 = (fd < 0) ? -1 : 1;
        s1 = (fc < 0) ? -1 : 1;
        if (s1 == s0) {
            return 0;
        }
    }
    A  = d->y - c->y;
    B  = c->x - d->x;
    C  = d->x * c->y - c->x * d->y;
    fa = A * a->x + B * a->y + C;
    fb = A * b->x + B * b->y + C;
    if (fa != 0 && fb != 0) {
        s0 = (fb < 0) ? -1 : 1;
        s1 = (fa < 0) ? -1 : 1;
        if (s1 == s0) {
            return 0;
        }
    }
    return 1;
}
