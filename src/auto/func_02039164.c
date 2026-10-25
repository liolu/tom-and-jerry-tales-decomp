typedef struct {
    int x, y, z;
} V;
int func_01ff99e8(V *a, V *b, int c, int *d, V *e, V *f);
void func_0204b918(int a, int *b, V *c);
void func_0204b94c(V *a, V *b, V *c);
int func_0204b980(V *a, V *b);
void func_0204baa0(V *a, V *b);

int func_02039164(int *a0, int *a1, int *a2, V *a3, int *a4) {
    V v5c, v50, v44, v38, v2c, v20, v14, v8;
    func_0204b918(a0[1], a0 + 5, &v14);
    func_0204b918(a1[1], a1 + 5, &v8);
    func_01ff99e8(&v14, &v8, a1[0], a1 + 9, &v50, &v2c);
    if (func_01ff99e8(&v50, &v14, a0[0], a0 + 9, &v5c, &v20) == 0) {
        return 0;
    }
    func_0204b94c(&v50, &v5c, &v44);
    if (func_0204b980(&v44, &v44) == 0) {
        return 0;
    }
    func_0204baa0(&v44, &v38);
    *a4   = func_0204b980(&v44, &v38);
    *a3   = v5c;
    a2[0] = v38.x;
    a2[1] = v38.y;
    a2[2] = v38.z;
    a2[3] = func_0204b980(&v38, a3);
    return 1;
}
