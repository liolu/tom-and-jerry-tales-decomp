#include "m2c.h"
typedef struct {
    char b[0x28];
} T28;
typedef struct {
    s32 count;
    s32 sel;
    char *names;
    u8 padc[8];
    s32 dirty;
} Menu;
typedef struct {
    s32 x, y, z;
} Vec;
extern T28 data_020b8b44[];
extern Menu data_02087e30;
extern char data_02087e90[];
extern char data_0206c4ac[];
extern s32 data_0206c450;
extern u8 data_0206e6a4[];
extern u8 data_0206e698[];
extern u8 *data_0206e9f8;
extern char data_0206c4b0[];
extern char data_0206c4b8[];
int *func_02040228(void);
void func_020016a4(void);
void func_0203d098(void *);
int func_0203dea8(void);
int func_0203deb8(void);
int func_0203dec8(void);
u8 *func_0203ded8(void);
void func_02028d68(void);
s32 func_0203d8d8(char *, u8 *);
void func_0203d740(char *, u16, u16, u8 *, int, int, void *);
int func_020306fc(int);
int func_020306c0(int);
int sprintf(char *, const char *, ...);
void func_0203ff1c(int, int, void *);
void func_02040094(int);
void func_02033df8(s32);
s32 func_02033d00(char *, Vec *, void *, void *);
void func_02032604(void *);
void func_0203179c(void *);
void func_020343a4(int, void *);
double _dflt(int);
double _ddiv(double, double);

void func_020289e8(void) {

    char buf[32];
    int *p;
    char *s;
    u8 *font;
    u16 y;
    u16 x;
    p = func_02040228();
    func_020016a4();
    func_0203d098(&data_020b8b44[func_0203dea8()]);
    if (data_02087e30.dirty != 0) {
        func_02028d68();
        data_02087e30.dirty = 0;
    }
    s = data_02087e30.names + data_02087e30.sel * 64;
    {
        int t6 = func_0203dea8();
        int t5 = func_0203dec8();
        int t4 = func_0203deb8();
        font   = func_0203ded8();
        y      = 0x9A - ((u16) (font[*(s32 *) (font + 0x14)] + 6) >> 1);
        x      = 0x80 - (func_0203d8d8(s, font) >> 1);
        func_0203d740(s, x, y, font, t4, t5, &data_020b8b44[t6]);
    }
    if (func_020306fc(3) != 0) {
        sprintf(data_02087e90, data_0206c4ac, 1);
        func_0203ff1c(p[7], 2, data_02087e90);
        func_02040094(p[6]);
    } else if (func_020306fc(12) != 0) {
        Vec v = {0, 0, 0};
        if (data_0206c450 != -1) {
            func_02033df8(data_0206c450);
        }
        data_0206c450 = func_02033d00(data_02087e30.names + data_02087e30.sel * 64, &v, data_0206e6a4, data_0206e698);
        func_02032604(data_0206e698);
        func_0203179c(data_0206e698);
    }
    if (func_020306c0(12) != 0) {
        if (func_020306fc(8) != 0) {
            data_02087e30.sel++;
        } else if (func_020306fc(9) != 0) {
            data_02087e30.sel--;
        }
        if (data_02087e30.sel < 0) {
            data_02087e30.sel = data_02087e30.count - 1;
        }
        if (data_02087e30.sel > data_02087e30.count - 1) {
            data_02087e30.sel = 0;
        }
    }
    func_020343a4(1, data_0206e9f8 + 0x50);
    sprintf(buf, data_0206c4b0, *(s32 *) (data_0206e9f8 + 0x2C) / 4096.0);
    {
        int t6 = func_0203dea8();
        int t5 = func_0203dec8();
        int t4 = func_0203deb8();
        func_0203d740(buf, 0x18, 0xB2, func_0203ded8(), t4, t5, &data_020b8b44[t6]);
    }
    sprintf(buf, data_0206c4b8, *(s32 *) (data_0206e9f8 + 0x34) / 4096.0);
    {
        int t6 = func_0203dea8();
        int t5 = func_0203dec8();
        int t4 = func_0203deb8();
        func_0203d740(buf, 0x80, 0xB2, func_0203ded8(), t4, t5, &data_020b8b44[t6]);
    }
}
