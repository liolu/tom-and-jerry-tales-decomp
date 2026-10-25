#include "m2c.h"

typedef struct N {
    s16 v;
    s16 pad;
    struct N *next;
} N;
typedef struct {
    u16 cnt;
    u8 pad[6];
    u32 fl : 1;
    u8 pad2[0x60];
    N *list;
} S;
extern N *data_020ac164;
extern N *func_01ff8000(int, int);
extern S *func_0203a58c(s16);
extern s16 *func_0203a95c(s16);

void func_02041880(s16 arg0, int arg1, int arg2) {
    S *s;
    N *n;
    N **pp;
    N *c;
    s = func_0203a58c(*func_0203a95c(arg1));
    if (!s->fl) {
        return;
    }
    s->cnt++;
    n = data_020ac164;
    if (n != 0) {
        data_020ac164 = n->next;
    } else {
        n = func_01ff8000(arg2, 8);
    }
    n->v    = arg0;
    n->next = 0;
    pp      = &s->list;
    c       = s->list;
    if (c != 0) {
        do {
            pp = &c->next;
            c  = c->next;
        } while (c != 0);
    }
    *pp = n;
}
