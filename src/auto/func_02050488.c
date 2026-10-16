/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

extern int func_020517f8(void);
extern void func_0205180c(int);
extern void func_0204febc(void *);
extern void func_020503c0(void);
typedef struct Node {
    char pad[0x68];
    struct Node *next;
    int pad2;
    int value;
} Node;
typedef struct {
    char pad[0x2c];
    Node *head;
} ListHead;
extern ListHead data_021b0460;
extern Node data_021b0494;

/* OSi_WaitOnExitProc from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_WaitOnExitProc.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
int func_02050488(Node *target, int newval) {
    Node *cur;
    Node *prev;
    int intr;

    prev = 0;
    cur  = data_021b0460.head;
    intr = func_020517f8();
    while (cur != 0 && cur != target) {
        prev = cur;
        cur  = cur->next;
    }
    if (cur == 0 || cur == &data_021b0494) {
        func_0205180c(intr);
        return 0;
    }
    if (cur->value != newval) {
        if (prev == 0) {
            data_021b0460.head = target->next;
        } else {
            prev->next = target->next;
        }
        target->value = newval;
        func_0204febc(target);
        func_020503c0();
    }
    func_0205180c(intr);
    return 1;
}
