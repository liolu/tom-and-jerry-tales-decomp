extern unsigned int data_020692ec;
extern char data_0206acbc;
extern char data_02086fa8;
extern char data_02086fd0;
extern char data_02086fd8;
void func_020301ec(char *, int);
void func_020301f0(void);
void func_0201109c(unsigned char, void *, int, void *, int, void *);
void func_02011468(unsigned char);
void func_02010e5c(void) {
    func_020301ec(&data_0206acbc, 0);
    func_020301f0();
    switch (data_020692ec) {
        case 1:
            func_0201109c(*(unsigned char *) (&data_02086fa8 + 8), &data_02086fa8 + 0xA, *(int *) (&data_02086fa8 + 0x24),
                          &data_02086fd0, *(int *) (&data_02086fa8 + 0x2C), &data_02086fd8);
            func_02011468(*(unsigned char *) (&data_02086fa8 + 0x10));
            break;
        case 0:
        case 2:
        case 3:
        case 4:
            break;
    }
}
