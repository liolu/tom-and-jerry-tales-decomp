extern void func_020219d4(void);
extern void func_0203b96c(int);
extern void func_0203c1e8(int, int, int, unsigned short);
typedef struct {
    unsigned char t;
    signed char a;
    signed char b;
    signed char c;
    int p;
    int q;
    int d;
} S;
extern S data_02086dac;
void func_0200dab8(void) {
    func_0203b96c(1);
    if (data_02086dac.d != 0) {
        func_0203c1e8(3, 0, 0x10, (unsigned short) (data_02086dac.a * 12 + 0x10));
        func_0203c1e8(2, 1, 0x90, (unsigned short) (data_02086dac.c * 12 + 0x10));
    } else {
        func_0203c1e8(2, 0, 0x10, (unsigned short) (data_02086dac.a * 12 + 0x10));
        func_0203c1e8(3, 1, 0x90, (unsigned short) (data_02086dac.c * 12 + 0x10));
    }
    switch (data_02086dac.t) {
        case 0:
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            break;
        case 2:
            func_020219d4();
            break;
    }
}
