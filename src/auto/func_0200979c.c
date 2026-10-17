#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203a58c();
extern void func_0205918c();
extern void func_020592b0();
extern char data_0206a32c[];
// clang-format off
asm void func_0200979c(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrsh r0, [r5, #0x0]
    bl func_0203a58c
    mov r4, r0
    ldr r1, [r4, #0x70]
    ldr r0, [r5, #0xb8]
    ldrsh r2, [r1, #0x0]
    ldr r1, =data_0206a32c
    strh r2, [r0, #0x0]
    ldr r2, [r4, #0x70]
    ldr r0, [r5, #0xb8]
    ldrsh r2, [r2, #0x2]
    strh r2, [r0, #0x2]
    ldr r2, [r4, #0x70]
    ldr r0, [r5, #0xb8]
    ldrsh r2, [r2, #0x4]
    strh r2, [r0, #0x4]
    ldr r0, [r4, #0x70]
    add r0, r0, #0x28
    bl func_020592b0
    cmp r0, #0x0
    beq L_02009824
    ldr r1, [r4, #0x70]
    ldr r0, [r5, #0xb8]
    ldrb r2, [r1, #0x7]
    add r1, r0, #0x7
    swpb r0, r2, [r1]
    ldr r0, [r5, #0xb8]
    ldr r1, [r4, #0x70]
    add r0, r0, #0x28
    add r1, r1, #0x28
    bl func_0205918c
    b L_02009834
L_02009824:
    ldr r0, [r5, #0xb8]
    mov r2, #0x0
    add r1, r0, #0x7
    swpb r0, r2, [r1]
L_02009834:
    ldr r0, [r4, #0x70]
    ldr r1, =data_0206a32c
    add r0, r0, #0x8
    bl func_020592b0
    cmp r0, #0x0
    beq L_02009878
    ldr r1, [r4, #0x70]
    ldr r0, [r5, #0xb8]
    ldrb r2, [r1, #0x6]
    add r1, r0, #0x6
    swpb r0, r2, [r1]
    ldr r0, [r5, #0xb8]
    ldr r1, [r4, #0x70]
    add r0, r0, #0x8
    add r1, r1, #0x8
    bl func_0205918c
    b L_02009888
L_02009878:
    ldr r0, [r5, #0xb8]
    mov r2, #0x0
    add r1, r0, #0x6
    swpb r0, r2, [r1]
L_02009888:
    ldr r1, [r4, #0x70]
    ldr r0, [r5, #0xb8]
    ldrsh r3, [r1, #0x48]
    mvn r1, #0x0
    mov r2, #0x0
    strh r3, [r0, #0x48]
    ldr r3, [r4, #0x70]
    ldr r0, [r5, #0xb8]
    ldrsh r3, [r3, #0x4a]
    strh r3, [r0, #0x4a]
    ldr r3, [r4, #0x70]
    ldr r0, [r5, #0xb8]
    ldrh r3, [r3, #0x4e]
    strh r3, [r0, #0x4c]
    ldr r0, [r5, #0xb8]
    strh r1, [r0, #0x50]
    ldr r0, [r5, #0xb8]
    strh r1, [r0, #0x52]
    ldr r0, [r5, #0xb8]
    add r1, r0, #0x4e
    swpb r0, r2, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
