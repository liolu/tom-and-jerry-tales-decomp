typedef struct {
    char pad[0xB4];
    int f;
    char pad2[4];
} E0;
typedef struct {
    short idx;
    short pad;
    int pad1;
    int a, b, c;
    char pad2[0x10];
    int d, e;
    int g;
    char pad3[0x7B0 - 0x30];
} E1;
extern E0 data_0208ece4[];
extern E1 data_02091be4[];
void func_01ffa724(int, int, int);
void func_02032914(int);
void func_02035164(void) {
    volatile int *reg = (volatile int *) 0x04000444;
    int i;
    E1 *p = data_02091be4;
    for (i = 0; i < 0x1E; i++, p++) {
        if (p->idx >= 0) {
            int t1, t2, t3;
            func_02032914(data_0208ece4[p->idx].f);
            reg[0]        = 0;
            t3            = p->c;
            t2            = p->b;
            t1            = p->a;
            reg[0x2C / 4] = t1;
            reg[0x2C / 4] = t2;
            reg[0x2C / 4] = t3;
            reg[0x28 / 4] = 0x4000;
            reg[0x28 / 4] = 0x4000;
            reg[0x28 / 4] = 0x4000;
            func_01ffa724(3, p->e, p->d - p->e);
            reg[1] = 1;
            p->d   = p->e;
        }
    }
}
