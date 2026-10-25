typedef struct {
    char pad[0x64];
} Big;
void func_0201191c(unsigned char);
void func_02011a60(Big *, int);
void func_02011bdc(Big *);
void func_0204f490(Big *, void *, void *, int);
extern char data_0206a8f8;
void func_0200e2f8(char *arg0) {
    Big sp0;
    unsigned char temp_r0;
    unsigned char var_r8;
    unsigned char temp_r9;
    temp_r9 = arg0[0x10];
    func_0201191c(temp_r9);
    for (var_r8 = 0; var_r8 < temp_r9; var_r8++) {
        func_0204f490(&sp0, &data_0206a8f8, arg0, var_r8 + 1);
        temp_r0 = arg0[0x11];
        switch (temp_r0) {
            case 0:
                func_02011bdc(&sp0);
                break;
            case 1:
                func_02011a60(&sp0, 1);
                break;
            case 2:
                func_02011a60(&sp0, 0);
                break;
            default:
                func_02011bdc(&sp0);
                break;
        }
    }
}
