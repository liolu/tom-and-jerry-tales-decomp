#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020145d8();
extern void func_02043ab0();
extern void func_02044460();
extern void func_02045d74();
extern char data_0206dd38[];
extern char data_0206e6d4[];
// clang-format off
asm void func_020142dc(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x3c]
    mov r0, r1, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_0201432c
    mov r0, r1, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_02014324
    bic r0, r1, #0x1
    orr r0, r0, #0x1
    add r1, r4, #0x3c
    swpb r0, r0, [r1]
    add r0, r4, #0x40
    bl func_02043ab0
    add r1, r4, #0x62
    mov r0, #0x1
    swpb r0, r0, [r1]
L_02014324:
    mov r0, #0x1
    ldmfd sp!, {r4, pc}
L_0201432c:
    add r0, r4, #0x40
    bl func_02044460
    cmp r0, #0x0
    beq L_02014368
    mov r0, r4
    bl func_020145d8
    ldrb r1, [r4, #0x3c]
    add r2, r4, #0x3c
    orr r1, r1, #0x10
    swpb r1, r1, [r2]
    ldrb r1, [r4, #0x3c]
    bic r1, r1, #0x1
    orr r1, r1, #0x1
    swpb r1, r1, [r2]
    ldmfd sp!, {r4, pc}
L_02014368:
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    ldr r2, =data_0206e6d4
    bic r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrh r1, [r4, #0x60]
    ldrh r3, [r2, #0x6a]
    add r0, r4, #0x40
    add r1, r3, r1
    strh r1, [r2, #0x6a]
    bl func_02045d74
    ldr r0, =data_0206dd38
    mov r1, #0x1000
    str r1, [r0, #0x0]
    mov r0, #0x2
    ldmfd sp!, {r4, pc}
}
// clang-format on
