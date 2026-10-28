#include "m2c.h"
typedef struct {
    u8 pad[0x30];
    u16 *buf;
} G;
extern G data_02087410;
extern void MIi_CpuCopy16(void *, void *, s32);
void func_0201c688(s8 *arg0) {
    s32 base  = (*arg0 + 9) * 16;
    s32 a     = base + 0xA;
    u16 saved = data_02087410.buf[a];
    MIi_CpuCopy16(&data_02087410.buf[base + 0xB], &data_02087410.buf[a], 10);
    a                    = base + 0xF;
    data_02087410.buf[a] = saved;
}
