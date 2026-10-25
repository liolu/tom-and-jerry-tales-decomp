#include "m2c.h"
extern u8 data_027e0000[];
extern char SDK_IRQ_STACKSIZE[];
void func_0204eff4(void) {
    *(u32 *) ((u32) data_027e0000 + 0x3F80 - sizeof(u32))             = 0xFDDB597D;
    *(u32 *) ((u32) data_027e0000 + 0x3F80 - (s32) SDK_IRQ_STACKSIZE) = 0x7BF9DD5B;
}
