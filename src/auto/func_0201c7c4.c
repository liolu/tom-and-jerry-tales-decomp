#include "m2c.h"
typedef struct {
    u8 pad[0x30];
    u16 *buf;
} G;
extern G data_02087410;
void func_02051ee8(void *, void *, s32);
void func_0201c7c4(s8 *a) {
    s32 b  = (*a + 9) * 0x10;
    s32 i  = b + 8;
    s32 j  = b + 0xF;
    u16 *p = data_02087410.buf;
    u16 t  = *(u16 *) ((u8 *) p + i * 2);
    func_02051ee8(p + (b + 9), p + i, 0xE);
    p                           = data_02087410.buf;
    *(u16 *) ((u8 *) p + j * 2) = t;
}
