#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8000();
extern void func_020132c4();
extern void func_02015240();
extern void func_02051fd0();
extern char data_0208705c[];
extern char data_0208706c[];
extern char data_02087070[];
// clang-format off
asm void func_020150e4(void) {
    stmfd sp!, {r4, lr}
    ldr r1, =data_02087070
    mov r4, r0
    ldr r0, [r1, r4, lsl #0x3]
    cmp r0, #0x0
    bne L_02015120
    ldr r0, =data_0208705c
    ldr r1, =0x1fa4
    ldr r0, [r0, #0x4]
    bl func_01ff8000
    ldr r1, =data_02087070
    ldr r2, =0x1fa4
    str r0, [r1, r4, lsl #0x3]
    mov r1, #0x0
    bl func_02051fd0
L_02015120:
    mov r0, r4
    bl func_02015240
    ldr lr, =data_0208706c
    mov ip, r4, lsl #0x3
    ldrsh r3, [lr, ip]
    ldr r2, =data_02087070
    mov r1, #0x6c
    add r3, r3, #0x1
    strh r3, [lr, ip]
    ldr r2, [r2, r4, lsl #0x3]
    smlabb r4, r0, r1, r2
    mov r0, r4
    bl func_020132c4
    ldrb r0, [r4, #0x68]
    add r1, r4, #0x68
    ldr r2, =data_0208705c
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    mov r0, r4
    ldr r3, [r2, #0xc]
    add r1, r3, #0x1
    str r1, [r2, #0xc]
    strh r3, [r4, #0xc]
    ldmfd sp!, {r4, pc}
}
// clang-format on
