#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02030794();
extern void func_02030868();
extern void func_02030878();
extern char data_02087ef4[];
// clang-format off
asm void func_0202a930(void) {
    stmfd sp!, {r3, lr}
    sub sp, sp, #0x8
    bl func_02030868
    ldr r1, =data_02087ef4
    ldrh r1, [r1, #0xc]
    tst r0, r1
    addne sp, sp, #0x8
    movne r0, #0x1
    ldmnefd sp!, {r3, pc}
    add r0, sp, #0x0
    mov r1, #0x0
    bl func_02030794
    cmp r0, #0x0
    beq L_0202a97c
    ldrh r0, [sp, #0x4]
    cmp r0, #0x1
    addeq sp, sp, #0x8
    moveq r0, #0x0
    ldmeqfd sp!, {r3, pc}
L_0202a97c:
    ldr r0, =data_02087ef4
    ldrh r0, [r0, #0xc]
    tst r0, #0x4000
    addeq sp, sp, #0x8
    moveq r0, #0x0
    ldmeqfd sp!, {r3, pc}
    bl func_02030878
    cmp r0, #0x0
    bne L_0202a9cc
    ldr r0, =data_02087ef4
    ldrb r0, [r0, #0x4]
    cmp r0, #0x0
    beq L_0202a9cc
    bl func_02030878
    ldr r1, =data_02087ef4
    add sp, sp, #0x8
    add r1, r1, #0x4
    swpb r0, r0, [r1]
    mov r0, #0x1
    ldmfd sp!, {r3, pc}
L_0202a9cc:
    bl func_02030878
    ldr r1, =data_02087ef4
    add r1, r1, #0x4
    swpb r0, r0, [r1]
    mov r0, #0x0
    add sp, sp, #0x8
    ldmfd sp!, {r3, pc}
}
// clang-format on
