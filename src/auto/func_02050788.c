/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02050788 from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_02050788.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
extern int func_020517f8(void);
extern void func_0205180c(int state);
extern void func_020502b8(void *queue);
extern void func_02050308(void *queue);
extern long long func_02062f0c(int a, int b);
int func_02050788(char *q, void **out, int flags) {
    int enabled = func_020517f8();
    while (*(int *) (q + 0x1c) == 0) {
        if ((flags & 1) == 0) {
            func_0205180c(enabled);
            return 0;
        }
        func_020502b8(q + 8);
    }
    if (out != 0) {
        *out = (*(void ***) (q + 0x10))[*(int *) (q + 0x18)];
    }
    *(int *) (q + 0x18) = (int) (func_02062f0c(*(int *) (q + 0x18) + 1, *(int *) (q + 0x14)) >> 32);
    *(int *) (q + 0x1c) = *(int *) (q + 0x1c) - 1;
    func_02050308(q);
    func_0205180c(enabled);
    return 1;
}
