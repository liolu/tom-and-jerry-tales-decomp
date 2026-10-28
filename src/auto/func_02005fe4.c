#include "m2c.h"

void func_02006074(u8 *);
void VEC_Subtract(u8 *, u8 *, void *);
extern s32 data_020692ec;
extern u8 data_0206fcac[];

void func_02005fe4(void) {
    u8 sp0[12];
    s32 var_r7;
    s32 var_r8;
    u8 *var_r9;
    u8 *var_r10;
    var_r9 = data_0206fcac;
    var_r7 = 0;
    do {
        if (var_r9[8] != 0) {
            if (data_020692ec != 4) {
                func_02006074(var_r9);
            }
            var_r8  = 0;
            var_r10 = data_0206fcac;
            do {
                VEC_Subtract(var_r10 + 0xA0, var_r9 + 0x34, sp0);
                var_r10 += 0x1864;
                var_r8 += 1;
            } while (var_r8 < 0xF);
        }
        var_r9 += 0x1864;
        var_r7 += 1;
    } while (var_r7 < 0xF);
}
