#include "m2c.h"
typedef struct {
    s16 id;
    u8 pad[2];
    u8 name[0xC];
    s32 f10;
    s16 f14;
    s16 f16;
} E;
extern u16 data_020b8140;
extern E data_020b82fc[];
s32 func_0203b1d4(void);
void MIi_CpuCopy32(void *, void *, s32);
s32 func_0203b2c4(void *src, s16 id) {
    s32 idx;
    E *e;
    idx = func_0203b1d4();
    e   = &data_020b82fc[idx];
    if (idx == data_020b8140) {
        data_020b8140++;
    }
    e->id = id;
    MIi_CpuCopy32(src, e->name, 0xC);
    e->f10 = 0;
    e->f14 = 0;
    e->f16 = 0;
    return idx;
}
