#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02016a94();
extern void func_0203eb58();
extern void func_0203edf0();
extern void OS_Terminate();
extern char data_0206e6d4[];
extern char data_02087090[];
extern char data_02087098[];
// clang-format off
asm void func_02016510(void) {
    stmfd sp!, {r3, lr}
    sub sp, sp, #0x8
    ldr r0, =data_0206e6d4
    ldr r2, =data_02087090
    ldrb r0, [r0, #0x0]
    mvn r1, #0x0
    swpb r0, r0, [r2]
    ldrsb r0, [r2, #0x0]
    cmp r0, r1
    addeq sp, sp, #0x8
    moveq r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr ip, =0xdeadc0de
    ldr r3, =0x29a6666
    add r2, sp, #0x0
    mov r0, #0x1f8
    mov r1, #0x8
    str ip, [sp, #0x0]
    str r3, [sp, #0x4]
    bl func_0203eb58
    cmp r0, #0x0
    beq L_0201657c
    mvn r0, #0x2
    bl func_02016a94
    add sp, sp, #0x8
    mvn r0, #0x0
    ldmfd sp!, {r3, pc}
L_0201657c:
    ldr r0, =data_02087090
    ldrsb r3, [r0, #0x0]
    cmp r3, #0x0
    beq L_020165a0
    cmp r3, #0x1
    beq L_020165cc
    cmp r3, #0x2
    beq L_020165f8
    b L_02016624
L_020165a0:
    ldr r0, =data_02087098
    mov r1, #0x50
    mla r2, r3, r1, r0
    mov r0, #0x0
    mov r3, r0
    bl func_0203edf0
    ldr r1, =data_02087090
    ldrh r2, [r1, #0x4]
    orr r2, r2, #0x1
    strh r2, [r1, #0x4]
    b L_02016634
L_020165cc:
    ldr r0, =data_02087098
    mov r1, #0x50
    mla r2, r3, r1, r0
    mov r0, #0xa8
    mov r3, #0x0
    bl func_0203edf0
    ldr r1, =data_02087090
    ldrh r2, [r1, #0x4]
    orr r2, r2, #0x2
    strh r2, [r1, #0x4]
    b L_02016634
L_020165f8:
    ldr r0, =data_02087098
    mov r1, #0x50
    mla r2, r3, r1, r0
    mov r0, #0x150
    mov r3, #0x0
    bl func_0203edf0
    ldr r1, =data_02087090
    ldrh r2, [r1, #0x4]
    orr r2, r2, #0x4
    strh r2, [r1, #0x4]
    b L_02016634
L_02016624:
    bl OS_Terminate
    add sp, sp, #0x8
    mvn r0, #0x0
    ldmfd sp!, {r3, pc}
L_02016634:
    cmp r0, #0x0
    addeq sp, sp, #0x8
    moveq r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mvn r0, #0x2
    bl func_02016a94
    mvn r0, #0x0
    add sp, sp, #0x8
    ldmfd sp!, {r3, pc}
}
// clang-format on
