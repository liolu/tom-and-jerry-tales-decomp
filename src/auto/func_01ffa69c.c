void func_01ffa69c(int n, int a, int b, int c) {
    int o = n * 12;
    volatile int *q;
    *(int *) (0x04000000 + o + 0xB0) = a;
    q                                = (int *) (0x04000000 + (o + 0xB0));
    q[1]                             = b;
    q[2]                             = c;
}
