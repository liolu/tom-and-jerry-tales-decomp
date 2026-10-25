#include "m2c.h"

void func_0201c54c(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202122c(void) {
    stmdb sp!, {r4, lr}
    mov r4, r0
    ldrsb r0, [r4, #0x54]
    bl func_0201c54c
    ldrb r0, [r4, #0x57]
    add r1, r4, #0x57
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmia sp!, {r4, pc}
}
// clang-format on
