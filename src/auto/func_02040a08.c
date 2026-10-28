#include "m2c.h"

typedef struct {
    s32 w[25];
} Big;

typedef struct {
    void *a;
    void *b;
    s32 c;
} Tri;

void func_02040d5c(void *, s32, s32);
void func_020415b8(Tri *);
Tri *func_02041610(void);
void func_02041640(void);
void func_02041654(s32, s32, s32);
s32 func_02041c34(s32, s32, s32);
void sprintf(void *, void *, ...);
s32 strcmp(void *, void *);
s32 func_0205c52c(s32, void *);
extern s32 data_0206dbc0;
extern u8 data_0206dbdc;
extern u8 data_0206dbf4;
extern u8 data_0206dc10;
extern u8 data_0206dc3c;
extern u8 data_0206dc40;
extern u8 data_0206dc48;
extern u8 data_0206dc50;
extern u8 data_0206dc58;
extern Tri data_021a7234;
extern u32 data_021a7224[];
extern Big data_021a7240;
extern Tri data_021a7244;

void func_02040a08(s32 arg0, s32 arg1, s32 arg2) {
    Big saveB;
    Tri cur;
    Tri saveT;
    u8 buf[0x40];

    saveB                        = data_021a7240;
    saveT                        = (*(Tri *) &data_021a7224[4]);
    (*(Tri *) &data_021a7224[4]) = data_021a7244;
    if (strcmp(data_021a7234.b, &data_0206dbdc) == 0) {
        data_021a7234.a = &data_0206dc3c;
        data_021a7234.b = &data_0206dc10;
        data_021a7234.c = 0;
        cur             = *func_02041610();
    } else {
        cur.a = (void *) arg0;
        cur.b = &data_0206dbf4;
        cur.c = func_02041c34(arg0, arg1, arg2);
    }
    func_02041640();
    func_020415b8(&cur);
    if (func_0205c52c(arg0, &data_0206dc48) != 0 || func_0205c52c(arg0, &data_0206dc50) != 0) {
        sprintf(buf, &data_0206dc58, data_0206dbc0, arg0);
    } else {
        sprintf(buf, &data_0206dc40, data_0206dbc0, arg0, &data_0206dc48);
    }
    func_02040d5c(buf, arg1, arg2);
    func_02041654(0, arg1, arg2);
    data_021a7240                = saveB;
    (*(Tri *) &data_021a7224[4]) = saveT;
}
