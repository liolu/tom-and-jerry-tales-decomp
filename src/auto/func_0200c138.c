/* compiler: 2.0/sp1p2 */
extern char data_0206a538[];
extern char data_0206a53c[];
extern char data_0206a544[];
extern char data_0206a54c[];
extern int *data_0206e9f8;
extern int data_0206ea14;
extern int data_02086d7c[];
extern char data_02086d88[];
typedef struct {
    char b[0x28];
} T28;
extern T28 data_020b8b44[];
void func_020016a4(void);
void func_02003e84(void);
void func_0200c364(void);
void func_020222b8(int, int, int);
int func_020306c0(int);
int func_020306fc(int);
void func_0203ac18(void);
void func_0203d098(void *);
void func_0203d740(void *, int, int, int, int, int, void *);
int func_0203dea8(void);
int func_0203deb8(void);
int func_0203dec8(void);
int func_0203ded8(void);
void func_0203ff1c(int, int, void *);
void func_02040094(int);
int *func_02040228(void);
void func_0204398c(void *);
void func_02043ab0(void *);
void func_0204f490(void *, void *, int);
int sprintf(char *, const char *, ...);
double _dflt(int);
double _ddiv(double, double);

void func_0200c138(void) {
    char buf[32];
    int *p = func_02040228();
    if (func_020306fc(3) != 0) {
        func_0204f490(data_02086d88, data_0206a538, 1);
        func_0203ff1c(p[7], 2, data_02086d88);
        func_02040094(p[6]);
    }
    if (func_020306fc(9) != 0) {
        if (func_020306c0(8) != 0 && data_0206ea14 != 0) {
            p = (int *) data_0206a53c;
            func_0204398c(p);
            func_02043ab0(p);
        }
    }
    func_020016a4();
    if (data_02086d7c[1] != 0) {
        func_0200c364();
        func_020222b8(0, 8, 3);
        data_02086d7c[1] = 0;
    }
    {
        int t = func_0203dea8();
        func_0203d098(&data_020b8b44[t]);
    }
    sprintf(buf, data_0206a544, data_0206e9f8[11] / 4096.0);
    {
        int t6 = func_0203dea8();
        int t5 = func_0203dec8();
        int t4 = func_0203deb8();
        int t3 = func_0203ded8();
        func_0203d740(buf, 0x18, 0xB2, t3, t4, t5, &data_020b8b44[t6]);
    }
    sprintf(buf, data_0206a54c, data_0206e9f8[13] / 4096.0);
    {
        int t6 = func_0203dea8();
        int t5 = func_0203dec8();
        int t4 = func_0203deb8();
        int t3 = func_0203ded8();
        func_0203d740(buf, 0x80, 0xB2, t3, t4, t5, &data_020b8b44[t6]);
    }
    func_02003e84();
    func_0203ac18();
}
