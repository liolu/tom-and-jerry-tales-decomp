extern int *func_01ff8000(int, int);
extern double func_0205d8c4(int);
extern int func_020617bc(double);
int *func_02042058(int *src, int unused, int n) {
    int *dst = func_01ff8000(n, 0x1C);
    int i    = 0;
    do {
        dst[i] = func_020617bc(0.5 + 4096.0 * func_0205d8c4(src[i]));
        i++;
    } while (i < 7);
    return dst;
}
