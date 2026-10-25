typedef struct {
    unsigned f0 : 1, f1 : 1, f2 : 1, f3 : 1;
} F;
typedef struct T {
    unsigned a;
    void (*f1)(void);
    void (*f2)(void);
    unsigned c, d, e;
    unsigned g;
    unsigned h;
    unsigned i;
    F flags;
} T;
extern int data_021a6d80;
extern T data_021a6f08[16];

int func_0203ff6c(T *p) {
    int i;
    int idx = -1;
    T *q;
    int saved;
    T *t = data_021a6f08;
    for (i = 0; i < 16; i++, t++) {
        if (!t->flags.f2) {
            idx = i;
            break;
        }
    }
    if (idx == -1) {
        return -1;
    }
    q                       = &data_021a6f08[idx];
    q->a                    = p->a;
    q->f1                   = p->f1;
    q->f2                   = p->f2;
    saved                   = data_021a6d80;
    q->c                    = p->c;
    q->d                    = p->d;
    q->e                    = p->e;
    q->g                    = ((q->g + 0x100) & 0x3FFFFF00) | idx;
    q->h                    = saved;
    q->i                    = 0;
    *(unsigned *) &q->flags = ((*(unsigned *) &q->flags & ~1) | 7) & ~8;
    data_021a6d80           = q->g;
    if (q->f1 != 0) {
        q->f1();
    }
    if (q->flags.f0 && q->f2 != 0) {
        q->f2();
    }
    data_021a6d80 = saved;
    return q->g;
}
