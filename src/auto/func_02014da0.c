#include "m2c.h"
typedef struct {
    s16 a;
    s16 n2;
    s16 n1;
} C;
typedef struct {
    s32 a;
    s32 *p1;
    s32 *p2;
} D;
extern C data_0206ad40;
extern D data_02087048;
s16 func_02014da0(s32 arg0) {
    s16 i = 0;
    s32 *p;
    s32 n;
    s32 *q;
    s32 m;
    if (arg0 == 0) {
        n = data_0206ad40.n1;
        if (n > 0) {
            p = data_02087048.p1;
            do {
                if (p[i] == 0) {
                    return i;
                }
                i++;
            } while (n > i);
        }
        return -1;
    }
    m = data_0206ad40.n2;
    if (m > 0) {
        q = data_02087048.p2;
        do {
            if (q[i] == 0) {
                return i;
            }
            i++;
        } while (m > i);
    }
    return -1;
}
