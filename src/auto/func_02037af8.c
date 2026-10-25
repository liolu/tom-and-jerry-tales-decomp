#include "m2c.h"
typedef struct {
    u16 cnt;
    u8 pad[14];
    u32 num;
    u32 pad3;
    u32 den;
    u32 den_hi;
    u32 res;
} Div;
typedef struct {
    s32 a;
    s32 b;
    s32 key;
} Ent;
extern u16 data_020a0f48;
extern Ent data_020a1bcc[];
extern Ent data_020a1bd4[];
s32 func_02037af8(s32 key) {
    volatile Div *d = (volatile Div *) 0x4000280;
    u32 lo          = 0;
    s32 hi          = data_020a0f48;
    for (;;) {
        d->cnt    = 0;
        d->num    = lo + hi;
        d->den    = 2;
        d->den_hi = 0;
        if (lo == hi) {
            if (lo < data_020a0f48) {
                if (key <= data_020a1bd4[lo].a) {
                    return (s16) lo;
                }
                return (s16) (lo + 1);
            }
            return (s16) lo;
        } else {
            s32 mid;
            while (d->cnt & 0x8000) {
            }
            mid = d->res;
            if (key <= data_020a1bcc[mid].key) {
                hi = mid;
            } else {
                lo = mid + 1;
            }
        }
    }
}
