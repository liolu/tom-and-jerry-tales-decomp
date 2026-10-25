typedef struct {
    char pad[0x21];
    unsigned char f21;
    char pad2[6];
    int f28;
    char pad3[0x108 - 0x2C];
} Q;
typedef struct {
    int a;
    int b;
} P;
extern P data_02087810[];
extern Q data_0206ea1c[];
extern char data_0206e6a4;
int func_02003058(int, char *, int, int, int);
void func_020312cc(int, P *, char *);
int func_02032598(int);
void func_02024e08(char *arg0) {
    int var_r8;
    P *var_r9 = data_02087810;
    Q *q;
    for (var_r8 = 0; var_r8 < 5; var_r8++) {
        if (var_r8 == (unsigned char) arg0[0x7A] && (q = &data_0206ea1c[(unsigned char) arg0[0x100]], q->f21 != 0) &&
            q->f28 != 0) {
            data_02087810[var_r8].a = q->f28;
        } else {
            func_020312cc(func_02003058(0, arg0, var_r8, 0, 0), var_r9, &data_0206e6a4);
        }
        data_02087810[var_r8].b = func_02032598(func_02003058(3, arg0, var_r8, 0, 0));
        var_r9++;
    }
}
