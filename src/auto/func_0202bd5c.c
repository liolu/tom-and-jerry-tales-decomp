extern void func_020312e0(void *, void *);
extern void func_02051a48(void);
extern void func_0205bdf4(void *, void *, void *, void *, void *);
extern char data_0206cb58;
extern char data_0206cb60;
extern char data_0206cb68;
extern char data_0206cb70;
extern char data_0206cb78;
extern char data_0206cb84;
extern char data_0206cb90;
extern char data_0206cb98;
extern char data_0206cb9c;
extern char data_0206cba4;
extern char data_0206cba8;
extern char data_0206cbb0;
extern char data_0206cbbc;
extern char data_0206e7e8;
extern char data_020880c0;
void func_0202bd5c(unsigned int a, unsigned int b) {
    void *r4;
    void *r5;
    switch (a) {
        case 1:
            r4 = &data_0206cb58;
            break;
        case 0:
            r4 = &data_0206cb60;
            break;
        case 2:
            r4 = &data_0206cb68;
            break;
        case 3:
            r4 = &data_0206cb70;
            break;
        case 5:
            r4 = &data_0206cb78;
            break;
        case 4:
            r4 = &data_0206cb84;
            break;
        case 6:
            r4 = &data_0206cb90;
            break;
        default:
            func_02051a48();
            break;
    }
    switch (b) {
        case 0:
        case 1:
            r5 = &data_0206cb98;
            break;
        case 4:
            r5 = &data_0206cb9c;
            break;
        case 2:
            r5 = &data_0206cba4;
            break;
        case 3:
            r5 = &data_0206cba8;
            break;
        default:
            func_02051a48();
            break;
    }
    func_0205bdf4(&data_0206e7e8, &data_0206cbb0, &data_0206cbbc, r4, r5);
    func_020312e0(&data_0206e7e8, &data_020880c0);
}
