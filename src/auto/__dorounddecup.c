#include "m2c.h"
typedef struct {
    u8 length;
    u8 text[32];
    u8 unused;
} decimal_sig;
typedef struct {
    s8 sign;
    s8 unused;
    s16 exp;
    decimal_sig sig;
} decimal;

void __dorounddecup(decimal *d, s32 digits) {
    u8 *b = d->sig.text;
    u8 *i = b + digits - 1;
    while (1) {
        if (*i < 9) {
            (*i)++;
            return;
        }
        if (i == b) {
            *i = 1;
            d->exp++;
            return;
        }
        *i-- = 0;
    }
}
