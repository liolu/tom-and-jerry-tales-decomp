#include "m2c.h"
typedef struct {
    u8 *empty;
    u8 *save;
} G;
extern G data_0206e214;
u8 *func_0205c3d4(u8 *str, u8 *delim) {
    u8 map[32];
    u8 *p;
    u8 *tok;
    u8 *d;
    u32 c;
    u32 n;
    u8 *q;
    q = map;
    n = 8;
    do {
        q[0] = 0;
        q[1] = 0;
        q[2] = 0;
        q[3] = 0;
        q += 4;
        n--;
    } while (n != 0);
    d = delim + 1;
    if (str != 0) {
        data_0206e214.save = str;
    }
    c = *delim;
    if (c != 0) {
        do {
            map[(u8) c >> 3] |= (u8) (1 << (c & 7));
            c = *d++;
        } while (c != 0);
    }
    p = data_0206e214.save;
    c = *p;
    p++;
    if (c != 0) {
        do {
            if (!(map[(u8) c >> 3] & (u8) (1 << (c & 7)))) {
                break;
            }
            c = *p++;
        } while (c != 0);
    }
    if (c == 0) {
        data_0206e214.save = data_0206e214.empty;
        return 0;
    }
    tok = p - 1;
    c   = *p++;
    if (c != 0) {
        do {
            if (map[(u8) c >> 3] & (u8) (1 << (c & 7))) {
                break;
            }
            c = *p++;
        } while (c != 0);
    }
    if (c == 0) {
        data_0206e214.save = data_0206e214.empty;
        return tok;
    }
    data_0206e214.save = p;
    p[-1]              = 0;
    return tok;
}
