#include "m2c.h"

typedef struct {
    u8 pad[8];
    s32 *tab;
    u16 cnt;
    u8 pad2[6];
} E14;
extern struct {
    s32 x;
    E14 *ents;
} data_02086ff4;

s32 func_02011cd8(s32 idx, s32 key) {
    E14 *e   = &data_02086ff4.ents[idx];
    s32 lo   = 0;
    s32 *tab = e->tab;
    s32 hi   = (u16) (e->cnt - 1);
    s32 mid  = (u32) (hi << 15) >> 16;
    while (1) {
        if (key >= tab[mid]) {
            if (hi - mid > 1) {
                lo = mid;
            } else {
                return mid;
            }
        } else {
            if (mid - lo > 1) {
                hi = mid;
            } else {
                return lo;
            }
        }
        mid = (u32) ((hi + lo) << 15) >> 16;
    }
}
