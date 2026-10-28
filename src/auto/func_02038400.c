typedef struct {
    int a, b, c;
} V3;
int func_01ff99e8(V3 *, V3 *, int, int, V3 *, V3 *);
void VEC_Subtract(V3 *, V3 *, V3 *);
int VEC_DotProduct(V3 *, V3 *);
int func_02038400(V3 *arg0, int arg1, int arg2, V3 *arg3, int arg4, int arg5) {
    V3 sp2C;
    V3 sp20;
    V3 sp14;
    V3 sp8;
    int v;
    unsigned a;
    unsigned b;
    a = (unsigned short) func_01ff99e8(arg0, arg3, arg4, arg5, &sp20, &sp8);
    b = (unsigned short) func_01ff99e8(&sp20, arg0, arg1, arg2, &sp2C, &sp8);
    VEC_Subtract(&sp2C, &sp20, &sp14);
    v = VEC_DotProduct(&sp14, &sp14);
    if ((int) (b + a) > 0) {
        v *= -1;
    }
    return v;
}
