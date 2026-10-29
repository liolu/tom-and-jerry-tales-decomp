/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

/* MTX_RotY33_(mtx, sin, cos): 3x3 rotation about Y.
 * ASM: written in assembly in the original NitroSDK (FX_mtx33.c); pret/pokediamond
 * arm9/lib/NitroSDK/src/FX_mtx33.c has the same instructions. No C matches it. */
// clang-format off
asm void func_0204b070(void) {
    str r2, [r0, #0x0]
    str r2, [r0, #0x20]
    mov r3, #0x0
    str r3, [r0, #0x4]
    str r3, [r0, #0xc]
    str r3, [r0, #0x14]
    str r3, [r0, #0x1c]
    neg r2, r1
    mov r3, #0x1
    lsl r3, r3, #0xc
    str r1, [r0, #0x18]
    str r2, [r0, #0x8]
    str r3, [r0, #0x10]
    bx lr
}
// clang-format on
