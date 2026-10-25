#include "m2c.h"
typedef struct {
    u8 pad[0x110];
    s32 f110 : 1;
    u32 rest : 31;
    u8 pad2[0x18];
    s32 f12c;
    u8 pad3[0x1c];
    s32 f14c;
    s32 f150;
    s32 pad4[7];
} E;
extern E data_021afbcc[];
void func_02049a00(s32 *, s32, s32, s32);
void func_02049f00(E *);
E *func_02049b88(s32 *arg0, s32 arg1, s32 arg2) {
    E *e;
    if (*arg0 != 0) {
        func_02049a00(arg0, arg1, arg2, *arg0);
    }
    e = &data_021afbcc[arg1];
    if (e->f12c == 0) {
        return 0;
    }
    if (e->f110 != 0) {
        if (arg2 < e->f150) {
            return 0;
        }
        func_02049f00(e);
    }
    e->f150 = arg2;
    e->f110 = 1;
    e->f14c = (s32) arg0;
    *arg0   = (s32) e;
    return e;
}
