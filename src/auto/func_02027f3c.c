#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203b96c();
extern void func_0203c24c();
extern char data_0206baec[];
extern char data_0206baf4[];
extern char data_0206bafc[];
extern char data_020877d0[];
// clang-format off
asm void func_02027f3c(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r0, #0x1
    bl func_0203b96c
    cmp r4, #0x0
    beq L_02027fa8
    ldr r0, =data_020877d0
    ldrb r0, [r0, #0x10]
    cmp r0, #0x0
    bne L_02027fa8
    ldr r6, =data_0206baec
    ldr r5, =data_0206baf4
    ldr r4, =data_0206bafc
    mov r7, #0x0
L_02027f74:
    ldrb r0, [r6, r7]
    ldrb r1, [r5, r7]
    ldrb r2, [r4, r7]
    bl func_0203c24c
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x6
    blo L_02027f74
    ldr r0, =data_020877d0
    mov r2, #0x1
    add r1, r0, #0x10
    swpb r0, r2, [r1]
    b L_02028000
L_02027fa8:
    cmp r4, #0x0
    bne L_02028000
    ldr r0, =data_020877d0
    ldrb r0, [r0, #0x10]
    cmp r0, #0x0
    beq L_02028000
    ldr r6, =data_0206baec
    ldr r5, =data_0206baf4
    mov r7, #0x0
    mov r4, #0xc0
L_02027fd0:
    ldrb r0, [r6, r7]
    ldrb r1, [r5, r7]
    mov r2, r4
    bl func_0203c24c
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x6
    blo L_02027fd0
    ldr r0, =data_020877d0
    mov r2, #0x0
    add r1, r0, #0x10
    swpb r0, r2, [r1]
L_02028000:
    mov r0, #0x0
    bl func_0203b96c
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
