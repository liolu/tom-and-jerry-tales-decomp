extern void func_020470cc(void *, int);
extern void func_020499c4(void *, int, int);
extern int data_0206db50;
extern char data_020ba3e0[];
extern char data_020ba3fc[];
void func_0203f7d8(int a) {
    data_0206db50 = a;
    func_020470cc(data_020ba3e0, a);
    func_020499c4(data_020ba3fc, data_0206db50, 0);
}
