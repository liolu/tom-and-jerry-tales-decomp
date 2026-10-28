#include "m2c.h"

extern u8 SDK_AUTOLOAD_DTCM_START[];
extern char SDK_IRQ_STACKSIZE[];

void OS_SetIrqStackChecker(void) {
    *(u32 *) ((u32) SDK_AUTOLOAD_DTCM_START + 0x3F80 - sizeof(u32))             = 0xFDDB597D;
    *(u32 *) ((u32) SDK_AUTOLOAD_DTCM_START + 0x3F80 - (s32) SDK_IRQ_STACKSIZE) = 0x7BF9DD5B;
}
