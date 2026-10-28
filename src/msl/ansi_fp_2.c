#include "m2c.h"

s32 __must_round();
M2C_UNK __dorounddecup(void *, s32);
typedef struct {
    s8 a;
    u8 pad1;
    s16 len;
    u8 n;
    u8 buf[0x20];
} B;

void __rounddec(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 <= 0) {
        return;
    }
    if (arg1 >= (s32) M2C_FIELD(arg0, u8 *, 4)) {
        return;
    }
    temp_r0                  = __must_round(arg0, arg1);
    M2C_FIELD(arg0, u8 *, 4) = (u8) arg1;
    if (temp_r0 < 0) {
        return;
    }
    __dorounddecup(arg0, arg1);
}

void __ull2dec(B *b, u64 v) {
    u8 *p;
    u8 *q;
    u8 t;
    b->a = 0;
    b->n = 0;
    if (v != 0) {
        do {
            u8 k      = b->n++;
            b->buf[k] = (u8) (v % 10);
            v         = v / 10;
        } while (v != 0);
    }
    p = b->buf;
    q = p + b->n - 1;
    while (p < q) {
        t    = *p;
        *p++ = *q;
        *q-- = t;
    }
    b->len = b->n - 1;
}
