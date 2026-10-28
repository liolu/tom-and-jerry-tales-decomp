typedef struct {
    int x, y, z;
} V;
int func_01ff99e8(V *a, V *b, int c, int *d, V *e, V *f);
void VEC_Add(int a, int *b, V *c);
void VEC_Subtract(V *a, V *b, V *c);
int VEC_DotProduct(V *a, V *b);
void VEC_Normalize(V *a, V *b);

int func_02039164(int *a0, int *a1, int *a2, V *a3, int *a4) {
    V v5c, v50, v44, v38, v2c, v20, v14, v8;
    VEC_Add(a0[1], a0 + 5, &v14);
    VEC_Add(a1[1], a1 + 5, &v8);
    func_01ff99e8(&v14, &v8, a1[0], a1 + 9, &v50, &v2c);
    if (func_01ff99e8(&v50, &v14, a0[0], a0 + 9, &v5c, &v20) == 0) {
        return 0;
    }
    VEC_Subtract(&v50, &v5c, &v44);
    if (VEC_DotProduct(&v44, &v44) == 0) {
        return 0;
    }
    VEC_Normalize(&v44, &v38);
    *a4   = VEC_DotProduct(&v44, &v38);
    *a3   = v5c;
    a2[0] = v38.x;
    a2[1] = v38.y;
    a2[2] = v38.z;
    a2[3] = VEC_DotProduct(&v38, a3);
    return 1;
}
