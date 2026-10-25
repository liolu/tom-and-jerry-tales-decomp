#include "m2c.h"
typedef struct {
    s16 pad[0x26];
    s16 v;
} Q;
typedef struct {
    s32 p0;
    s32 p1;
    u32 f : 1;
    u32 r : 31;
    u8 pad[0x70 - 0xC];
    Q *q;
} E;
typedef struct {
    s16 i;
    u8 pad[0xBC - 2];
} H;
extern E data_020ac17c[];
extern H data_020aecfc[];
extern u32 func_02039e28(s32);
extern u32 func_02040bc4(s32, s32, s32);
void func_02009d80(s32 a, s32 b, s32 c, s32 d) {
    E *e = &data_020ac17c[data_020aecfc[b].i];
    u32 r;
    if (e->f == 0) {
        return;
    }
    r = func_02039e28(a);
    if (r == 0xFFFFFFFF) {
        r = func_02040bc4(a, c, d);
    }
    e->q->v = r;
}
