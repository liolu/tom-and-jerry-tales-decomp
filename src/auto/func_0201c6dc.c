#include "m2c.h"

typedef struct {
    u8 pad[0x30];
    s32 buf;
} G;
void func_02051ee8(void *, void *, s32);
extern G data_02087410;

void func_0201c6dc(s8 *arg0) {
    u8 sp0[0x10];
    u16 temp_r4;
    s32 temp_r5;
    s32 temp_r6;
    temp_r5 = (*arg0 + 9) * 0x10;
    temp_r6 = temp_r5 + 7;
    temp_r4 = *(u16 *) (data_02087410.buf + ((temp_r5 + 0xF) * 2));
    func_02051ee8((void *) (data_02087410.buf + (temp_r6 * 2)), sp0, 0x10);
    func_02051ee8(sp0, (void *) (data_02087410.buf + ((temp_r5 + 8) * 2)), 0x10);
    ((u16 *) data_02087410.buf)[temp_r6] = temp_r4;
}
