#include "m2c.h"

void func_02026cf4(s32 a, s32 b);
extern s32 data_0206b994[];
extern s32 data_0206b964[];
extern s32 data_0206b930[];
extern s32 data_0206b984[];
extern s32 data_0206b928[];
extern s32 data_0206b93c[];

typedef struct {
    u8 pad[0x5C];
    u16 a : 3;
    u16 b : 3;
    u16 c : 2;
    u16 d : 2;
    u16 e : 1;
    u16 f : 2;
} S;
extern S data_0206e6d4;

void func_02026b08(void) {
    u16 i;

    i = 0;
    do {
        func_02026cf4(0, data_0206b994[i]);
        i += 1;
    } while (i < 5);
    i = 0;
    do {
        func_02026cf4(0, data_0206b964[i]);
        i += 1;
    } while (i < 4);
    i = 0;
    do {
        func_02026cf4(0, data_0206b930[i]);
        i += 1;
    } while (i < 3);
    i = 0;
    do {
        func_02026cf4(0, data_0206b984[i]);
        i += 1;
    } while (i < 4);
    i = 0;
    do {
        func_02026cf4(0, data_0206b928[i]);
        i += 1;
    } while (i < 2);
    i = 0;
    do {
        func_02026cf4(0, data_0206b93c[i]);
        i += 1;
    } while (i < 3);
    func_02026cf4(data_0206b994[data_0206e6d4.a], 0);
    func_02026cf4(data_0206b964[data_0206e6d4.b], 0);
    func_02026cf4(data_0206b930[data_0206e6d4.c], 0);
    func_02026cf4(data_0206b984[data_0206e6d4.d], 0);
    func_02026cf4(data_0206b928[data_0206e6d4.e], 0);
    func_02026cf4(data_0206b93c[data_0206e6d4.f], 0);
}
