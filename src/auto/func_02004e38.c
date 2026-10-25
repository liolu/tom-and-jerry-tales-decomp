#include "m2c.h"
void func_0203179c(void *);
void func_02032604(void *);
s32 func_02033a2c(void *, void *);
void func_02033d1c(s32, s32 *);
s32 *func_0203a95c(s16);
extern u8 data_0206e698[];
void func_02004e38(void *arg0, s32 arg1) {
    s32 v[3];
    s32 *t = func_0203a95c(arg1);
    v[0]   = t[11];
    v[1]   = t[12];
    v[2]   = t[13];
    func_02033d1c(func_02033a2c(arg0, data_0206e698), v);
    func_02032604(data_0206e698);
    func_0203179c(data_0206e698);
}
