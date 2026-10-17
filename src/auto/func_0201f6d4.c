#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a0f8();
extern void func_0201f4e8();
extern void func_020222b8();
extern void func_0202274c();
extern void func_0203d0d8();
extern char data_020875a8[];
extern char data_0208760c[];
extern char data_020b8bbc[];
// clang-format off
asm void func_0201f6d4(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldr r0, =data_0208760c
    mov r1, #0x0
    mov r2, #0x1
    bl func_0202274c
    ldr r1, =data_020875a8
    ldr r1, [r1, #0x10]
    cmp r1, #0x13
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, pc}
    tst r0, #0x1000000
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, pc}
    ands r4, r0, #0xff
    bne L_0201f7d8
    cmp r1, #0x14
    beq L_0201f74c
    cmp r1, #0x12
    bne L_0201f74c
    mov r0, #0x23
    bl func_0200a0f8
    mvn r0, #0xf
    mov r1, #0x10
    mov r2, #0x3
    bl func_020222b8
    ldr r0, =data_020875a8
    mov r1, #0x14
    str r1, [r0, #0x10]
    b L_0201f7d8
L_0201f74c:
    cmp r1, #0x10
    bne L_0201f794
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr ip, =data_020b8bbc
    str r0, [sp, #0x4]
    mov r0, #0x5
    mov r1, #0xa5
    mov r2, #0xfa
    mov r3, #0x19
    str ip, [sp, #0x8]
    bl func_0203d0d8
    ldr r1, =data_020875a8
    mov r2, #0x11
    mov r0, #0x23
    str r2, [r1, #0x10]
    bl func_0200a0f8
    b L_0201f7d8
L_0201f794:
    cmp r1, #0x14
    beq L_0201f7d8
    ldr r0, =data_020875a8
    ldrb r0, [r0, #0xa]
    cmp r0, #0x0
    bne L_0201f7d8
    mov r0, #0x23
    bl func_0200a0f8
    ldr r2, =data_020875a8
    mov r0, #0xd
    str r0, [r2, #0x10]
    add r1, r2, #0x66
    mov r0, #0x0
    swpb r0, r0, [r1]
    mov r1, #0x1
    ldr r0, [r2, #0x70]
    bl func_0201f4e8
L_0201f7d8:
    cmp r4, #0x1
    ldreq r0, =data_020875a8
    ldreq r0, [r0, #0x10]
    cmpeq r0, #0x12
    addne sp, sp, #0xc
    ldmnefd sp!, {r3, r4, pc}
    mov r0, #0x23
    bl func_0200a0f8
    mvn r0, #0xf
    mov r1, #0xa
    mov r2, #0x3
    bl func_020222b8
    ldr r0, =data_020875a8
    mov r1, #0x13
    str r1, [r0, #0x10]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
