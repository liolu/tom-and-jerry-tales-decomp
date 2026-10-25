#include "m2c.h"
typedef struct {
    u8 pad0[0x24];
    s32 idx;
    u8 pad1[0x169C - 0x28];
    s32 tab[(0x1790 - 0x169C) / 4];
    s32 cur;
    u8 pad2[0x17A4 - 0x1794];
    s8 sel;
} O;
typedef struct {
    u8 pad[0x1864];
} E1;
void func_020296ec(O *, s32);
extern E1 data_0206fcac[];

void func_020036bc(O *o, s32 f) {
    s32 t;
    func_020296ec(o, o->cur);
    if (f != 0) {
        t = o->sel;
        if (t < 0) {
            return;
        }
        o->cur = *(s32 *) ((u8 *) data_0206fcac + t * 0x1864 + o->idx * 4 + 0x169C);
        return;
    }
    o->cur = o->tab[o->idx];
}
