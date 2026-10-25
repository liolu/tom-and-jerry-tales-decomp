#include "m2c.h"

typedef struct {
    void *p;
    u32 f;
    s32 pad[4];
} E;
extern E data_0208e194[];

void func_020332dc(u8 *arg0, s32 arg1) {
    u16 i;
    u8 *base = arg0 + 0x14;
    E *e;
    for (i = 0; i < *(u32 *) (arg0 + 0x14); i++) {
        u8 *ip               = arg0 + i * 4;
        *(u32 *) (ip + 0x18) = (u32) (base + *(u32 *) (ip + 0x18));
    }
    e    = &data_0208e194[arg1];
    e->p = arg0;
    e->f &= ~1;
}
