#include "m2c.h"
typedef struct N {
    u8 pad[8];
    u8 flags;
    u8 p2[3];
    struct N *next[1];
} N;
N *func_02022d94(N *arg0, s32 arg1) {
    N *p = arg0;
    while (p != NULL && (p = p->next[arg1]) != NULL) {
        if ((p->flags & 8) && (p->flags & 0x20)) {
            return p;
        }
    }
    return arg0;
}
