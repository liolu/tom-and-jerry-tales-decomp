#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02007450();
extern void func_020222b8();
extern char data_0206ace8[];
extern char data_02086d09[];
// clang-format off
asm void func_02013510(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r0, [r4, #0x3c]
    mov r1, r0, lsl #0x1e
    movs r1, r1, lsr #0x1f
    bne L_02013564
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_0201355c
    ldr r0, =data_0206ace8
    mov r1, #0x0
    str r1, [r0, #0x0]
    mov r0, #0x7
    bl func_02007450
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_0201355c:
    mov r0, #0x1
    ldmfd sp!, {r4, pc}
L_02013564:
    mov r3, #0x4
    ldr r4, =data_02086d09
    sub r0, r3, #0x14
    mov r1, #0x1e
    mov r2, #0x3
    swpb r3, r3, [r4]
    bl func_020222b8
    mov r0, #0x2
    ldmfd sp!, {r4, pc}
}
// clang-format on
