typedef struct {
    int a;
    int k;
    int c;
} E;
extern unsigned short data_020a0f48;
extern E data_020a2e8c[];
extern E data_020a2e90[];

typedef struct {
    volatile unsigned short cnt;
    char pad[14];
    volatile int numer;
    volatile int numer_hi;
    volatile int denom;
    volatile int denom_hi;
    volatile int result;
} DIV;

short func_02037a38(int key) {
    unsigned lo = 0;
    int hi      = data_020a0f48;
    DIV *d      = (DIV *) 0x4000280;
    for (;;) {
        int mid;
        d->cnt      = 0;
        d->numer    = lo + hi;
        d->denom    = 2;
        d->denom_hi = 0;
        if (lo == hi) {
            if (lo < data_020a0f48) {
                if (key <= data_020a2e90[lo].a) {
                    return lo;
                }
                return lo + 1;
            }
            return lo;
        }
        while (d->cnt & 0x8000) {
        }
        mid = d->result;
        if (key < data_020a2e8c[mid].k) {
            hi = mid;
        } else {
            lo = mid + 1;
        }
    }
}
