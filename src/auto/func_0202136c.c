#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201c54c();
// clang-format off
asm void func_0202136c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x4]
    cmp r0, #0x0
    moveq r0, #0x0
    streq r0, [r4, #0x2c]
    beq L_02021394
    cmp r0, #0x1
    moveq r0, #0x0
    streq r0, [r4, #0x2c]
L_02021394:
    ldrb r0, [r4, #0x57]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    beq L_020213ac
    ldrsb r0, [r4, #0x54]
    bl func_0201c54c
L_020213ac:
    ldrb r0, [r4, #0x3c]
    add r2, r4, #0x3c
    add r1, r4, #0x57
    bic r0, r0, #0x2
    swpb r0, r0, [r2]
    mov lr, #0x1
    ldrb r0, [r4, #0x3c]
    add r3, r4, #0x55
    mov ip, #0x4
    bic r0, r0, #0x1
    swpb r0, r0, [r2]
    ldrb r0, [r4, #0x57]
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
    str lr, [r4, #0x38]
    ldrb r0, [r4, #0x3c]
    bic r0, r0, #0x10
    swpb r0, r0, [r2]
    swpb r0, ip, [r3]
    ldmfd sp!, {r4, pc}
}
// clang-format on
