typedef struct {
    char pad[0x20];
    unsigned char b20;
} Q;
typedef struct {
    char p0[4];
    Q *q;
    char p8[0x14];
    char sub[0x10];
    unsigned char b2c, b2d, b2e, b2f;
    int i30;
    char p34[8];
    unsigned char b3c, b3d;
    short s3e;
    unsigned char b40, b41;
} N;
extern char data_021ae558[];
extern short data_020686c0[];
extern N *func_020468f8(void *, void *);
extern void func_02047644(void *);
extern void func_020476e4(void *);
extern int func_0204af8c(void *);
extern void func_0204afc0(void *);
extern int func_0204afd8(void *);
extern void func_02052448(int);
extern void func_02052480(int, int);
extern int func_02052ce8(int);
extern int func_02052fc4(void);

void func_02047268(void) {
    N *n;
    N *next;
    int mask;
    mask = func_02052fc4();
    n    = func_020468f8(data_021ae558, 0);
    if (n == 0) {
        return;
    }
    do {
        int v;
        short b, c, a;
        next = func_020468f8(data_021ae558, n);
        if (n->b2d == 0) {
            if (func_02052ce8(n->i30) != 0) {
                n->b2d = 1;
            }
        }
        if (n->b2d != 0 && !(mask & (1 << n->b3c))) {
            func_020476e4(n);
        } else {
            func_0204afc0(n->sub);
            b = data_020686c0[n->b41];
            c = data_020686c0[n->b40];
            a = data_020686c0[n->q->b20];
            v = data_020686c0[func_0204af8c(n->sub) >> 8];
            v += a + (c + b);
            if (v < -0x2d3) {
                v = -0x2d3;
            } else if (v > 0) {
                v = 0;
            }
            if (v != n->s3e) {
                func_02052480(n->b3c, v);
                n->s3e = v;
            }
            if (n->b2c == 2 && func_0204afd8(n->sub) != 0) {
                func_02047644(n);
            }
            if (n->b2f != 0) {
                func_02052448(n->b3c);
                n->b2f = 0;
            }
        }
        n = next;
    } while (n != 0);
}
