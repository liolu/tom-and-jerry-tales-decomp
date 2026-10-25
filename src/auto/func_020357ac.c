#include "m2c.h"
typedef struct {
    u8 *base;
    u8 pad[0x10];
    u16 n;
} S35;
s32 func_020357ac(S35 *s) {
    u8 *b   = s->base;
    s32 n   = s->n;
    s32 sum = 0;
    s32 i;
    for (i = 0; i < n; i++) {
        sum += (b + i)[0x1EA0];
    }
    return sum;
}
