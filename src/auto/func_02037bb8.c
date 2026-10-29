#include "m2c.h"

typedef struct {
    s32 v;
} P;
typedef struct Obj {
    u8 pad0[4];
    P *p;
    u8 pad8[0xC];
    s32 f14;
    u8 pad18[8];
    s32 f20;
    u8 pad24[0xC];
    s16 ia;
    s16 ib;
} Obj;
typedef struct {
    Obj *o;
    s32 lo;
    s32 hi;
} E;
extern u16 data_020a0f48;
extern E data_020a2e8c[];
extern E data_020a1bcc[];
extern s16 func_02037a38(s32);
extern s16 func_02037af8(s32);
extern void MIi_CpuCopy32(void *, void *, s32);

void func_02037bb8(Obj *obj) {
    s32 lo;
    s32 x;
    s16 j;
    s16 pos;
    s32 hi;
    x  = obj->p->v + obj->f14;
    lo = x - obj->f20;
    hi = obj->f20 + x;
    if (data_020a0f48 == 0) {
        pos = 0;
    } else {
        pos = func_02037a38(lo);
        for (j = data_020a0f48; pos < j; j--) {
            MIi_CpuCopy32(data_020a2e8c + (j - 1), data_020a2e8c + j, 12);
            data_020a2e8c[j].o->ia = j;
        }
    }
    obj->ia                     = pos;
    data_020a2e8c[(s16) pos].o  = obj;
    data_020a2e8c[(s16) pos].lo = lo;
    data_020a2e8c[(s16) pos].hi = hi;
    if (data_020a0f48 == 0) {
        pos = 0;
    } else {
        pos = func_02037af8(hi);
        for (j = data_020a0f48; pos < j; j--) {
            MIi_CpuCopy32(data_020a1bcc + (j - 1), data_020a1bcc + j, 12);
            data_020a1bcc[j].o->ib = j;
        }
    }
    obj->ib                     = pos;
    data_020a1bcc[(s16) pos].o  = obj;
    data_020a1bcc[(s16) pos].lo = lo;
    data_020a1bcc[(s16) pos].hi = hi;
    data_020a0f48               = data_020a0f48 + 1;
}
