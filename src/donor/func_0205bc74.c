/* compiler: 2.0/sp1p5 -O2,p */
/* func_02023594 from projets/heroes-of-mana/src/auto/func_02023594.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef struct Thr {
    unsigned char pad[0x6C];
    int id;
} Thr;
typedef struct TInfo {
    int w0;
    Thr *cur;
} TInfo;
typedef struct Cs {
    int w[3];
    int v;
} Cs;
extern int func_0205dd98(void *, int);
extern int func_020509fc(void *);
extern void OS_LockMutex(void *);
extern void func_02050964(void *);
extern int __pformatter(void *, void *, char *, void *);
extern unsigned char data_0206ded4[];
extern unsigned char data_021b4070[];
extern TInfo OSi_ThreadInfo;
extern Cs __cs_id;
extern Cs __cs_ref;
extern unsigned char func_0205bc04;
int func_0205bc74(char *fmt, ...) {
    int r;
    if (func_0205dd98(data_0206ded4, -1) >= 0) {
        return -1;
    }
    if (func_020509fc(data_021b4070) == 0) {
        __cs_id.v  = OSi_ThreadInfo.cur->id;
        __cs_ref.v = 1;
    } else if (__cs_id.v == OSi_ThreadInfo.cur->id) {
        __cs_ref.v = __cs_ref.v + 1;
    } else {
        OS_LockMutex(data_021b4070);
        __cs_id.v  = OSi_ThreadInfo.cur->id;
        __cs_ref.v = 1;
    }
    r          = __pformatter(&func_0205bc04, data_0206ded4, fmt, (void *) ((((unsigned int) &fmt) & ~3) + 4));
    __cs_ref.v = __cs_ref.v - 1;
    if (__cs_ref.v == 0) {
        func_02050964(data_021b4070);
    }
    return r;
}
