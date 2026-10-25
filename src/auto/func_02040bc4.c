#include "m2c.h"

typedef struct {
    s32 b[25];
} Big;
typedef struct {
    s32 w[3];
} Small;
typedef struct {
    void *name;
    void *p;
    s32 id;
} Rec;

void func_02041640(void);
s32 func_02041c34(void *, s32, s32);
s16 *func_0203a95c(s32);
void func_020415b8(void *);
s32 func_0205c52c(void *, void *);
void func_0205bdf4(void *, void *, s32, void *, ...);
void func_02040d5c(void *, s32, s32);
void func_02041654(s32, s32, s32);
void func_020413f0(void *, void *, s32, s32, s32, s32);
void func_0203a388(s32);
extern Big data_021a7240;
extern Small data_021a7234;
extern u8 data_0206dbf4[];
extern u8 data_0206dc48[];
extern u8 data_0206dc50[];
extern s32 data_0206dbc0;
extern u8 data_0206dc58[];
extern u8 data_0206dc40[];
extern u8 data_0206dc10[];

s16 func_02040bc4(void *name, s32 a1, s32 a2) {
    Rec rec;
    Small small;
    u8 buf[0x40];
    Big big;
    s16 r;

    big   = data_021a7240;
    small = data_021a7234;
    func_02041640();
    rec.name = name;
    rec.p    = data_0206dbf4;
    rec.id   = func_02041c34(name, a1, a2);
    r        = *func_0203a95c((s16) rec.id);
    func_020415b8(&rec);
    if (func_0205c52c(name, data_0206dc48) != 0 || func_0205c52c(name, data_0206dc50) != 0) {
        func_0205bdf4(buf, data_0206dc58, data_0206dbc0, name);
    } else {
        func_0205bdf4(buf, data_0206dc40, data_0206dbc0, name, data_0206dc48);
    }
    func_02040d5c(buf, a1, a2);
    func_02041654(0, a1, a2);
    func_020413f0(data_0206dbf4, data_0206dc10, rec.id, 0, a1, a2);
    data_021a7240 = big;
    data_021a7234 = small;
    func_0203a388((u16) rec.id);
    return r;
}
