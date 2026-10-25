typedef struct {
    char pad[0xA6C];
    int cnt;
    int max;
} S;
extern S data_021a90a4;
extern int data_0206e694;
extern char data_021a910c[];
extern char data_021a9110[];
int func_020452a4(void);
void func_020463a0(void) {
    int i;
    int idx;
    int n;
    char *r;
    unsigned char *p;
    i             = 0;
    n             = data_021a90a4.cnt;
    idx           = i - 1;
    data_0206e694 = 0;
    for (; i < n; i++) {
        if (data_021a90a4.cnt == 0) {
            r = 0;
        } else {
            idx++;
            if (idx < data_021a90a4.max) {
                p = (unsigned char *) data_021a910c + idx * 0x50;
                do {
                    if (p[0x50] == 0) {
                        r = data_021a9110 + idx * 0x50;
                        goto done;
                    }
                    p += 0x50;
                    idx++;
                } while (idx < data_021a90a4.max);
            }
            r = 0;
        }
    done:
        if (r != 0) {
            if (func_020452a4() != 0) {
                data_0206e694 = 1;
            }
        }
    }
}
