typedef struct {
    int pad[4];
    int *p;
} G;
extern G data_0206e9e8;
static inline void set3(int *v, int a, int b, int c) {
    v[0] = a;
    v[1] = b;
    v[2] = c;
}
void func_02001a7c(void) {
    G *g = &data_0206e9e8;
    set3(g->p + 0x2c / 4, 0, 0, 0x3000);
    set3(g->p + 0x68 / 4, 0, 0, 0);
    set3(g->p + 0x14 / 4, 0, 0x1000, 0);
    set3(g->p + 0x74 / 4, 0, 0, 0x3000);
    set3(g->p + 0x80 / 4, 0, 0, 0);
    set3(g->p + 0x8c / 4, 0, 0x1000, 0);
    g->p[0xc0 / 4] = 0;
    g->p[0xc4 / 4] = 0;
    g->p[0xa0 / 4] = 0x5000;
    g->p[0xac / 4] = 0x199;
    g->p[0xb0 / 4] = 0xc8000;
    g->p[0]        = 0;
    g->p[1]        = 0;
    g->p[0xc8 / 4] = 0x200;
    g->p[0xcc / 4] = 0x2b8;
}
