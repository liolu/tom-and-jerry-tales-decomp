#include "m2c.h"
void MIi_CpuCopy16(void *, void *, s32);
typedef struct {
    u8 pad[0x30];
    u16 *p;
} D;
extern D data_02087410;
void func_0201c818(s8 *arg0) {
    u8 buf[8];
    u16 t;
    s32 base = (*arg0 + 9) * 16;
    s32 i    = base + 11;
    s32 k    = base + 15;
    s32 m    = base + 12;
    t        = data_02087410.p[k];
    MIi_CpuCopy16(data_02087410.p + i, buf, 8);
    MIi_CpuCopy16(buf, data_02087410.p + m, 8);
    data_02087410.p[i] = t;
}
