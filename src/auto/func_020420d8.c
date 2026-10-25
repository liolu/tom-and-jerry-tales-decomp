double func_0205d8c4(int);
int func_020617bc(double);
int *func_01ff8000(int, int);
int *func_020420d8(int *arg0, int arg1, int arg2) {
    int *r4 = func_01ff8000(arg2, 0xC);
    r4[0]   = func_020617bc(4096.0 * func_0205d8c4(arg0[0]) + 0.5);
    r4[1]   = func_020617bc(4096.0 * func_0205d8c4(arg0[1]) + 0.5);
    r4[2]   = func_020617bc(4096.0 * func_0205d8c4(arg0[2]) + 0.5);
    return r4;
}
