#include "m2c.h"

void func_02030ed4(void *, s32);
void func_02030ee0(void *, s32);
void func_02033be0(s32, u16);
void func_02033c6c(u16, u16);
s32 func_02040570(void *, void *, s32);
typedef struct {
    u8 p[0xA4];
    u8 sub[0x14];
    s32 v;
} A;
typedef struct {
    s16 id;
    u8 p[0x7AA];
    u32 fl : 1;
} B;
extern u8 data_0206d220[];
extern u16 data_0208ecd4;
extern A data_0208ece4[];
extern B data_02091be4[];

u16 func_02033ad0(s32 arg) {
    u8 sp[4];
    u16 i = 0;
    u16 n = 0;
    u16 j;
    for (i = 0; data_0208ecd4 > i; i++) {
        A *a = &data_0208ece4[i];
        if (a->v != 0) {
            func_02030ed4(sp, arg);
            func_02033be0(func_02040570(a->sub, data_0206d220, arg), i);
            func_02030ee0(sp, arg);
            a->v = 0;
            n++;
        }
    }
    j = 0;
    do {
        B *b = &data_02091be4[j];
        if (b->fl) {
            s16 id = b->id;
            if (data_0208ece4[id].v == 0) {
                func_02033c6c(j, id);
            }
        }
        j++;
    } while (j < 0x1E);
    return n;
}
