#include "m2c.h"

s32 func_0205c258(const u8 *s, const u8 *set) {
    u8 map[32];
    const u8 *p;
    u32 i;
    u8 *q;
    u32 c;
    q = map;
    i = 8;
    do {
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
        q[3] = 0;
        q += 4;
    } while (--i != 0);
    c = *set;
    p = set + 1;
    if (c != 0) {
        do {
            map[(u8) c >> 3] |= (u8) (1 << (c & 7));
            c = *p++;
        } while (c != 0);
    }
    c = *s;
    p = s + 1;
    if (c != 0) {
        do {
        } while ((map[(u8) c >> 3] & (u8) (1 << (c & 7))) && (c = *p++) != 0);
    }
    return p - s - 1;
}
