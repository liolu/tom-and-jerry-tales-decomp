#include "m2c.h"

extern char SDK_AUTOLOAD_DTCM_START[];
void OS_IrqHandler_ThreadSwitch(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void OS_IrqHandler(void) {
    stmdb sp!, {lr}
    mov ip, #0x4000000
    add ip, ip, #0x210
    ldr r1, [ip, #-0x8]
    cmp r1, #0x0
    ldmeqia sp!, {pc}
    ldmia ip, {r1, r2}
    ands r1, r1, r2
    ldmeqia sp!, {pc}
    mov r3, #0x80000000
L_01ffa460:
    clz r0, r1
    bics r1, r1, r3, lsr r0
    bne L_01ffa460
    mov r1, r3, lsr r0
    str r1, [ip, #0x4]
    rsbs r0, r0, #0x1f
    ldr r1, =SDK_AUTOLOAD_DTCM_START
    ldr r0, [r1, r0, lsl #0x2]
    ldr lr, =OS_IrqHandler_ThreadSwitch
    bx r0
}
// clang-format on
