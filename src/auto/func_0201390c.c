#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02011a34();
extern void func_02011a44();
extern char data_020692e8[];
extern char data_0206ace0[];
extern char data_0206ace4[];
extern char data_0206ace8[];
// clang-format off
asm void func_0201390c(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldrb r1, [r4, #0x3c]
    mov r0, r1, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_020139c8
    mov r0, r1, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_020139c0
    bic r0, r1, #0x1
    orr r0, r0, #0x1
    add r1, r4, #0x3c
    swpb r0, r0, [r1]
    ldr r0, [r4, #0x44]
    cmp r0, #0x0
    beq L_02013998
    ldrb r0, [r4, #0x50]
    cmp r0, #0x0
    bne L_02013970
    ldr r0, [r4, #0x40]
    bl func_02011a34
    ldr r0, [r4, #0x40]
    rsb r0, r0, #0x0
    bl func_02011a44
    b L_02013998
L_02013970:
    cmp r0, #0x1
    bne L_02013988
    ldr r0, [r4, #0x40]
    rsb r0, r0, #0x0
    bl func_02011a44
    b L_02013998
L_02013988:
    cmp r0, #0x2
    bne L_02013998
    ldr r0, [r4, #0x40]
    bl func_02011a34
L_02013998:
    ldr r0, [r4, #0x48]
    cmp r0, #0x0
    ldrne r0, =data_0206ace8
    movne r1, #0x0
    strne r1, [r0, #0x0]
    ldr r0, [r4, #0x4c]
    cmp r0, #0x0
    ldrne r0, =data_020692e8
    movne r1, #0x0
    strne r1, [r0, #0x0]
L_020139c0:
    mov r0, #0x1
    ldmfd sp!, {r4, pc}
L_020139c8:
    ldr r0, [r4, #0x44]
    cmp r0, #0x0
    beq L_020139ec
    ldr r0, =data_0206ace4
    ldr r0, [r0, #0x0]
    bl func_02011a34
    ldr r0, =data_0206ace0
    ldr r0, [r0, #0x0]
    bl func_02011a44
L_020139ec:
    ldr r0, [r4, #0x48]
    cmp r0, #0x0
    ldrne r0, =data_0206ace8
    movne r1, #0x1
    strne r1, [r0, #0x0]
    ldr r0, [r4, #0x4c]
    cmp r0, #0x0
    ldrne r0, =data_020692e8
    movne r1, #0x1
    strne r1, [r0, #0x0]
    mov r0, #0x2
    ldmfd sp!, {r4, pc}
}
// clang-format on
