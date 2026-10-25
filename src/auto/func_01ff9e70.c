extern short data_02064348[];
extern void func_0204aff0(void *);
extern void func_0204b008(void *, short, short);
extern void func_0204b014(int *);
extern void func_0204b404(int *, int *, int *);

void func_01ff9e70(int *a, int *b, int *c, int d) {
    int m[9];
    int v[3];
    int x;
    int idx;
    func_0204aff0(a);
    x   = (int) (((long long) d * 0xb60b60b60bLL + (0x800LL << 32)) >> 32);
    idx = (int) (((unsigned) x << 4) >> 16) >> 4;
    func_0204b008(a, data_02064348[idx * 2], data_02064348[idx * 2 + 1]);
    func_0204b014(m);
    m[0] = a[0];
    m[1] = a[1];
    m[3] = a[2];
    m[4] = a[3];
    v[0] = *b << 12;
    v[1] = *c << 12;
    func_0204b404(v, m, v);
    *b = (v[0] << 4) >> 16;
    *c = (v[1] << 4) >> 16;
}
