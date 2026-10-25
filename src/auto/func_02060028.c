#include "m2c.h"
typedef struct {
    s8 a;
    u8 pad1;
    s16 len;
    u8 n;
    u8 buf[0x20];
} B;
void func_02060028(B *b, u64 v) {
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
