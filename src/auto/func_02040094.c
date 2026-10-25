#include "m2c.h"
typedef struct E {
    u8 pad[0x18];
    s32 f18;
    s32 f1c;
    u8 pad2[4];
    u32 lo : 2;
    u32 b : 1;
    u32 hi : 29;
} E;
extern E data_021a6f08[16];
extern s32 func_0203ff1c(s32, s32, s32);
void func_02040094(s32 arg0) {
    s32 i;
    E *p;
    s16 k;
    E *q;
    p = data_021a6f08;
    i = 0;
    do {
        if (p->b && arg0 == p->f1c) {
            func_02040094(p->f18);
        }
        i++;
        p++;
    } while (i < 16);
    k    = (u8) arg0;
    q    = (E *) ((u8 *) data_021a6f08 + k * 0x28);
    q->b = 0;
    if (*(s32 *) ((u8 *) &data_021a6f08[0].f1c + k * 0x28) == -1) {
        return;
    }
    func_0203ff1c(*(s32 *) ((u8 *) &data_021a6f08[0].f1c + k * 0x28), 3, 0);
}
