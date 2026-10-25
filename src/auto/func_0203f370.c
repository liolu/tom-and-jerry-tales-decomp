typedef unsigned long long u64;
typedef struct {
    unsigned int z;
    unsigned int lo;
    unsigned int hi;
    unsigned int prio;
} T;
typedef struct {
    u64 t;
    unsigned int a;
    unsigned int b;
} TT;
typedef struct {
    unsigned int prio;
    unsigned int a;
    unsigned int b;
    unsigned int c;
} PP;
extern T data_020ba4c0[12];
extern TT data_020ba4c4[12];
extern PP data_020ba4cc[12];
extern int func_02047060(int);
extern u64 func_0205168c(void);
int func_0203f370(unsigned int arg0) {
    unsigned short a = 0;
    unsigned short b = 0;
    unsigned short i = 0;
    u64 now;
    u64 t;
    while (1) {
        if (func_02047060(i + 4) == 0) {
            data_020ba4cc[i].prio = arg0;
            t                     = func_0205168c();
            data_020ba4c4[i].t    = t;
            return i;
        }
        if (*(u64 *) &data_020ba4c0[i].lo < *(u64 *) &data_020ba4c0[a].lo) {
            a = i;
        }
        if (data_020ba4c0[i].prio < data_020ba4c0[b].prio) {
            b = i;
        }
        i++;
        if (i >= 12) {
            break;
        }
    }
    now = func_0205168c();
    if (data_020ba4c4[a].t + 0xE1960 < now) {
        data_020ba4cc[a].prio = arg0;
        t                     = func_0205168c();
        data_020ba4c4[a].t    = t;
        return a;
    }
    if (data_020ba4cc[b].prio >= arg0) {
        return -1;
    }
    data_020ba4cc[b].prio = arg0;
    t                     = func_0205168c();
    data_020ba4c4[b].t    = t;
    return b;
}
