#include "m2c.h"

typedef struct E {
    s32 pad[5];
    void (*fn)(void *);
    s32 a;
    s32 pad2;
    s32 pad3;
    u32 f0 : 2;
    u32 bit2 : 1;
    u32 f1 : 29;
} E;

typedef struct Q {
    s32 w0;
    s32 w1;
    s32 id;
} Q;

typedef struct G {
    s32 cur;
    s32 count;
    Q q[1];
} G;

extern G data_021a6d80;
extern E data_021a6f08[];

void func_0203fd34(void) {
    s32 i = 0;
    if (data_021a6d80.count > 0) {
        Q *q = data_021a6d80.q;
        do {
            s32 id = q->id;
            if (id >= 0) {
                E *e = &data_021a6f08[(u8) id];
                if (e->bit2 && id == e->a) {
                    void (*fn)(void *) = e->fn;
                    if (fn != 0) {
                        data_021a6d80.cur = id;
                        fn(q);
                        data_021a6d80.cur = -1;
                    }
                }
            }
            i++;
            q++;
        } while (i < data_021a6d80.count);
    }
    data_021a6d80.count = 0;
}
