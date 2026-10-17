#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201520c();
extern void func_02015284();
extern char data_0206ea14[];
extern char data_0208705c[];
extern char data_0208706c[];
// clang-format off
asm void func_02015194(void) {
    stmfd sp!, {r4, r5, r6, lr}
    bl func_0201520c
    ldr r0, =data_0206ea14
    ldr r2, =data_0208705c
    ldr r0, [r0, #0x0]
    mov r4, #0x0
    ldr r0, [r0, #0x4]
    add r1, r2, #0x1
    ldrb r0, [r0, #0x2c]
    ldr r3, =data_0208706c
    mov r5, r4
    swpb r0, r0, [r1]
    ldrb r0, [r2, #0x1]
    add r6, r3, r0, lsl #0x3
L_020151cc:
    ldrsh r0, [r6, #0x0]
    cmp r4, r0
    ldmeqfd sp!, {r4, r5, r6, pc}
    ldr r0, [r6, #0x4]
    add r0, r0, r5
    bl func_02015284
    add r0, r4, #0x1
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    cmp r4, #0x4b
    add r5, r5, #0x6c
    blt L_020151cc
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
