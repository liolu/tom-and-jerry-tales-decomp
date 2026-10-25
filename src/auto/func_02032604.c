typedef struct {
    char pad[0x54];
    unsigned int f0 : 1;
    unsigned int rest : 31;
    int g;
    char pad2[0x68 - 0x5C];
} R;
extern int data_0208a358;
extern R data_0208a360[];
extern char data_0206d1fc;
void func_02030ed4(int *, int);
void func_02030ee0(int *, int);
void func_020326c0(int, unsigned short, int);
int func_02040570(int *, char *, int);
void func_02051a48(void);
unsigned short func_02032604(int arg0) {
    int sp0;
    unsigned short var_r8;
    unsigned short var_r9;
    int r10;
    var_r9 = 0;
    var_r8 = var_r9;
    if (data_0208a358 > 0) {
        do {
            R *p = &data_0208a360[var_r8];
            if (p->f0 != 0) {
                func_02030ed4(&sp0, arg0);
                r10 = func_02040570(&p->g, &data_0206d1fc, arg0);
                if (r10 == 0) {
                    func_02051a48();
                }
                func_020326c0(r10, var_r8, arg0);
                func_02030ee0(&sp0, arg0);
                var_r9 += 1;
            }
            var_r8 += 1;
        } while (data_0208a358 > var_r8);
    }
    return var_r9;
}
