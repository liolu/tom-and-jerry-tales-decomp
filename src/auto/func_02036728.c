typedef struct {
    int x, y, z;
} V;
typedef struct {
    V v[3];          /* 0x00 */
    int d[3];        /* 0x24 */
    V n;             /* 0x30 */
    int w;           /* 0x3c */
    char pad[0x0a];  /* 0x40 */
    unsigned short f; /* 0x4a */
    char pad2[4];
} P;
typedef struct {
    char pad[8];
    P *p;
} G;
extern G *data_027e0080;
extern void VEC_Subtract(V *, V *, V *);
extern int VEC_DotProduct(V *, V *);
extern void VEC_CrossProduct(V *, V *, V *);
extern void VEC_Normalize(V *, V *);

void func_02036728(int idx, V *tri) {
    V a, c, b;
    P *p = data_027e0080->p + idx;
    int i;
    V *s, *d, *t;
    VEC_Subtract(tri + 1, tri, &a);
    if (a.x == 0 && a.y == 0 && a.z == 0) {
        p->f = 0xfd;
        return;
    }
    VEC_Normalize(&a, &a);
    VEC_Subtract(tri + 2, tri, &b);
    if (b.x == 0 && b.y == 0 && b.z == 0) {
        p->f = 0xfd;
        return;
    }
    VEC_Normalize(&b, &b);
    VEC_CrossProduct(&a, &b, &p->n);
    if (p->f == 0xfd || (p->n.x == 0 && p->n.y == 0 && p->n.z == 0)) {
        p->f = 0xfd;
        return;
    }
    {
        VEC_Normalize(&p->n, &p->n);
        if (p->n.x == 0 && p->n.y == 0 && p->n.z == 0) {
            p->f = 0xfd;
            return;
        }
        p->w = 0 - VEC_DotProduct(tri, &p->n);
        VEC_Subtract(tri, tri + 1, &a);
        VEC_Subtract(tri + 1, tri + 2, &c);
        VEC_CrossProduct(&p->n, &a, &p->v[0]);
        VEC_CrossProduct(&p->n, &c, &p->v[1]);
        VEC_CrossProduct(&p->n, &b, &p->v[2]);
        i = 0;
        s = &p->v[0];
        d = &p->v[0];
        t = tri;
        for (; i < 3; i++) {
            VEC_Normalize(d, s);
            p->d[i] = VEC_DotProduct(t, d);
            s++;
            d++;
            t++;
        }
        return;
    }
}
