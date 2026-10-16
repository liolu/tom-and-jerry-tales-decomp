/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0205082c from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/func_0205082c.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int func_020517f8(void);
extern void func_0205180c(int state);
extern void func_020502b8(void *queue);
extern void func_02050308(void *queue);
extern long long func_02062f0c(int a, int b);
int func_0205082c(char *q, void *msg, int flags) {
    int enabled = func_020517f8();
    void **slots;
    while (*(int *) (q + 0x14) <= *(int *) (q + 0x1c)) {
        if ((flags & 1) == 0) {
            func_0205180c(enabled);
            return 0;
        }
        func_020502b8(q);
    }
    *(int *) (q + 0x18) = (int) (func_02062f0c(*(int *) (q + 0x18) + *(int *) (q + 0x14) - 1, *(int *) (q + 0x14)) >> 32);
    slots               = *(void ***) (q + 0x10);
    slots[*(int *) (q + 0x18)] = msg;
    *(int *) (q + 0x1c)        = *(int *) (q + 0x1c) + 1;
    func_02050308(q + 8);
    func_0205180c(enabled);
    return 1;
}
