#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203b96c();
extern void func_0203c24c();
extern char data_02063fc8[];
extern char data_02063fd0[];
extern char data_0206b230[];
extern char data_020875a8[];
// clang-format off
asm void func_0201f828(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r0, #0x1
    bl func_0203b96c
    cmp r4, #0x0
    beq L_0201f8e4
    ldr r6, =data_0206b230
    ldrb r0, [r6, #0x5]
    cmp r0, #0x60
    bne L_0201f864
    ldr r1, =data_020875a8
    mov r0, #0x1
    add r2, r1, #0xa
    swpb r1, r0, [r2]
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_0201f864:
    ldr r5, =data_02063fc8
    ldr r4, =data_02063fd0
    mov r7, #0x0
L_0201f870:
    cmp r7, #0x3
    bhs L_0201f8a4
    ldrb r0, [r6, r7]
    cmp r0, #0x20
    bls L_0201f8d0
    sub r0, r0, #0x10
    add r1, r6, r7
    swpb r0, r0, [r1]
    ldrb r0, [r5, r7]
    ldrb r1, [r4, r7]
    ldrb r2, [r6, r7]
    bl func_0203c24c
    b L_0201f8d0
L_0201f8a4:
    add r3, r6, r7
    ldrb r0, [r3, #-0x3]
    cmp r0, #0x80
    bhs L_0201f8d0
    ldrb r2, [r3, #0x0]
    ldrb r0, [r5, r7]
    ldrb r1, [r4, r7]
    sub r2, r2, #0x10
    swpb r2, r2, [r3]
    ldrb r2, [r3, #0x0]
    bl func_0203c24c
L_0201f8d0:
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x6
    blo L_0201f870
    b L_0201f988
L_0201f8e4:
    ldr r6, =data_0206b230
    ldrb r0, [r6, #0x2]
    cmp r0, #0xc0
    bne L_0201f90c
    ldr r0, =data_020875a8
    mov r2, #0x0
    add r1, r0, #0xa
    swpb r0, r2, [r1]
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
L_0201f90c:
    ldr r5, =data_02063fc8
    ldr r4, =data_02063fd0
    mov r7, #0x0
L_0201f918:
    cmp r7, #0x3
    bhs L_0201f94c
    ldrb r0, [r6, r7]
    cmp r0, #0xc0
    bhs L_0201f978
    add r0, r0, #0x10
    add r1, r6, r7
    swpb r0, r0, [r1]
    ldrb r0, [r5, r7]
    ldrb r1, [r4, r7]
    ldrb r2, [r6, r7]
    bl func_0203c24c
    b L_0201f978
L_0201f94c:
    ldrb r0, [r6, #0x5]
    cmp r0, #0xc0
    bhs L_0201f978
    ldrb r1, [r6, r7]
    add r2, r6, r7
    ldrb r0, [r5, r7]
    add r1, r1, #0x10
    swpb r1, r1, [r2]
    ldrb r1, [r4, r7]
    ldrb r2, [r6, r7]
    bl func_0203c24c
L_0201f978:
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x6
    blo L_0201f918
L_0201f988:
    mov r0, #0x0
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
