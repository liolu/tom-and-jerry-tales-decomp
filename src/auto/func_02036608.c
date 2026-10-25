typedef struct {
    int v;
    unsigned short a;
    unsigned short f;
    unsigned short n;
    unsigned short pad;
    unsigned short c;
    unsigned short pad2;
} N;
typedef struct {
    char pad[0x40];
    int v;
    char pad2[0xc];
} E;
typedef struct {
    N *nodes;
    int x;
    E *elems;
} G;
extern G *data_027e0080;
extern unsigned short *func_020365ec(N *);
extern void func_02059514(void *, void *, void *, int);
extern char data_0206d24c, data_0206d260, data_0206d240, data_0206d26c;
void func_02036608(unsigned short idx) {
    unsigned short cnt;
    unsigned short l;
    N *n;
    unsigned short r;
    int lv, rv;
    n = &data_027e0080->nodes[idx];
    if (n->v != 0x80000000) {
        func_02059514(&data_0206d24c, &data_0206d260, &data_0206d240, 0xC0);
    }
    if (n->f != 0) {
        unsigned short *list;
        unsigned short i;
        if (n->c != 0xFFFF) {
            func_02059514(&data_0206d26c, &data_0206d260, &data_0206d240, 0xC3);
        }
        cnt  = n->n;
        list = func_020365ec(n);
        for (i = 0; i < cnt; i++) {
            int t = data_027e0080->elems[list[i]].v;
            if (t > n->v) {
                n->v = t;
            }
        }
    } else {
        l = n->a;
        func_02036608(l);
        r = n->a + 1;
        func_02036608(r);
        rv = data_027e0080->nodes[r].v;
        lv = data_027e0080->nodes[l].v;
        if (lv >= rv) {
            n->v = lv;
        } else {
            n->v = rv;
        }
    }
}
