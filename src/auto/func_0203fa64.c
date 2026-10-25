typedef struct {
    int f0, f4, f8, fc, f10, f14, f18, f1c, f20, f24, f28;
} D;
extern D data_0206db50;
extern char data_020ba3fc, data_020ba3e8, data_020ba3ec, data_020ba3f0;
extern int data_020ba3e0[];
int func_0203fcd8(void);
void func_02049984(char *, int, int);
void func_020499c4(char *, int, int);
void func_0203fa64(int arg0) {
    char *r4;
    int r5 = func_0203fcd8();
    switch (r5) {
        case 0:
            r4                = &data_020ba3fc;
            data_0206db50.f28 = arg0;
            break;
        case 1:
            r4                = &data_020ba3e8;
            data_0206db50.f24 = arg0;
            break;
        case 2:
            r4                = &data_020ba3ec;
            data_0206db50.f20 = arg0;
            break;
        case 3:
            r4                = &data_020ba3f0;
            data_0206db50.f1c = arg0;
            break;
    }
    if (data_020ba3e0[1] == 0) {
        return;
    }
    func_02049984(r4, arg0, 0);
    switch (r5) {
        case 0:
            func_020499c4(r4, data_0206db50.f0, 0);
            break;
        case 1:
        case 2:
        case 3:
            func_020499c4(r4, data_0206db50.f8, 0);
            break;
    }
}
