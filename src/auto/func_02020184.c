typedef struct {
    char p0[0x14];
    int f14;
    int f18;
    char p1[0xc];
    int f28;
    int f2c;
    char p2[0x1c];
    int f4c;
} S;
extern S data_020875a8;
extern unsigned char data_0206b25c[], data_0206b26c[];
extern char data_020876ec, data_0206b708, data_0206b778, data_020b8b6c;
extern int data_0206e690, data_020692ec;
extern void func_0203d0d8(int, int, int, int, int, int, void *);
extern void func_0203d740(void *, int, int, int, int, int, void *);
extern int func_0204221c(int);
extern void func_0204f490();
void func_02020184(void) {
    int t = data_020875a8.f2c;
    if (data_020875a8.f28 != t) {
        data_020875a8.f28 = t;
        func_0204f490(&data_020876ec, &data_0206b708, func_0204221c(0x4F), t >> 12);
        func_0203d0d8(data_0206b25c[0], data_0206b26c[0], 0x8C, 0x19, 0, 0, &data_020b8b6c);
        func_0203d740(&data_020876ec, data_0206b25c[0], data_0206b26c[0], data_0206e690, 0, 0, &data_020b8b6c);
    }
    if (data_020875a8.f4c != data_020875a8.f18) {
        data_020875a8.f4c = data_020875a8.f18;
        func_0204f490(&data_020876ec, &data_0206b778, data_020875a8.f18 >> 12);
        func_0203d0d8(data_0206b25c[1], data_0206b26c[1], 0x32, 0x19, 0, 0, &data_020b8b6c);
        func_0203d740(&data_020876ec, data_0206b25c[1], data_0206b26c[1], data_0206e690, 0, 0, &data_020b8b6c);
    }
    if (data_020692ec != 1) {
        return;
    }
    *(unsigned short *) 0x04001040 = ((((data_020875a8.f14 >> 12) & 0xFF) + 0x4E) << 8 & 0xFF00) | 0xB2;
    *(unsigned short *) 0x04001044 = 0x3F4A;
}
