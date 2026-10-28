typedef struct {
    unsigned short cnt;
    short s2;
    int v4;
    int v8;
    int vc;
} G;
typedef struct {
    int a, b, c;
} E;
extern G data_0208872c;
extern E data_0208873c[];
int GX_GetBankForTex(void);
int GX_GetBankForTexPltt(void);
void OS_Terminate(void);

void func_020314d0(void) {
    int m = GX_GetBankForTex();
    int k = GX_GetBankForTexPltt();
    int t6, t6b, t7;
    char *t7b, *t8;
    unsigned short i;
    unsigned short cnt;
    data_0208872c.vc  = 0;
    data_0208872c.v8  = 0;
    data_0208872c.s2  = 0;
    data_0208872c.cnt = 0;
    if (m == 0) {
        OS_Terminate();
    }
    i = 0;
    do {
        if (m & (1 << i)) {
            data_0208872c.cnt++;
        }
        i++;
    } while (i < 4);
    cnt = data_0208872c.cnt;
    i   = 0;
    do {
        if (i < cnt) {
            t7                                     = i * 12;
            t8                                     = (char *) data_0208873c + t7;
            t6                                     = i << 17;
            ((E *) t8)->b                          = t6;
            *(int *) ((char *) data_0208873c + t7) = t6;
            ((E *) t8)->c                          = t6 + 0x20000;
        } else {
            t6b                                     = i * 12;
            t7b                                     = (char *) data_0208873c + t6b;
            ((E *) t7b)->c                          = -1;
            ((E *) t7b)->b                          = -1;
            *(int *) ((char *) data_0208873c + t6b) = -1;
        }
        i++;
    } while (i < 4);
    data_0208872c.v4 = 0;
    if (m == 0) {
        OS_Terminate();
    }
    if (k & 0x10) {
        data_0208872c.v4 += 0x10000;
    }
    if (k & 0x20) {
        data_0208872c.v4 += 0x4000;
    }
    if (k & 0x40) {
        data_0208872c.v4 += 0x4000;
    }
}
