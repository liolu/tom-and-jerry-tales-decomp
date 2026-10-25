#include "m2c.h"

extern char data_021b0484[];
extern char data_027e0084[];
void func_0205543c(void);
void func_02055490(void);
// clang-format off
asm void func_01ffa490(void) {
    mov r2, #0x1
    mov r3, #0x0
    ldr ip, =data_027e0084
    ldr ip, [ip, #0x0]
    cmp ip, #0x0
    beq L_01ffa4e0
L_01ffa4a8:
    str r2, [ip, #0x64]
    str r3, [ip, #0x78]
    str r3, [ip, #0x7c]
    ldr r0, [ip, #0x80]
    str r3, [ip, #0x80]
    mov ip, r0
    cmp ip, #0x0
    bne L_01ffa4a8
    ldr ip, =data_027e0084
    str r3, [ip, #0x0]
    str r3, [ip, #0x4]
    ldr ip, =data_021b0484
    mov r1, #0x1
    strh r1, [ip, #0x0]
L_01ffa4e0:
    ldr ip, =data_021b0484
    ldrh r1, [ip, #0x0]
    cmp r1, #0x0
    ldreq pc, [sp], #4
    mov r1, #0x0
    strh r1, [ip, #0x0]
    mov r3, #0xd2
    msr cpsr_c, r3
    add r2, ip, #0x8
    ldr r1, [r2, #0x0]
L_01ffa508:
    cmp r1, #0x0
    ldrneh r0, [r1, #0x64]
    cmpne r0, #0x1
    ldrne r1, [r1, #0x68]
    bne L_01ffa508
    cmp r1, #0x0
    bne L_01ffa530
L_01ffa524:
    mov r3, #0x92
    msr cpsr_c, r3
    ldr pc, [sp], #4
L_01ffa530:
    ldr r0, [ip, #0x4]
    cmp r1, r0
    beq L_01ffa524
    ldr r3, [ip, #0xc]
    cmp r3, #0x0
    beq L_01ffa558
    stmdb sp!, {r0, r1, ip}
    mov lr, pc
    bx r3
    ldmia sp!, {r0, r1, ip}
L_01ffa558:
    str r1, [ip, #0x4]
    mrs r2, spsr
    str r2, [r0, #0x0]!
    stmdb sp!, {r0, r1}
    add r0, r0, #0x0
    add r0, r0, #0x48
    ldr r1, =func_0205543c
    blx r1
    ldmia sp!, {r0, r1}
    ldmib sp!, {r2, r3}
    stmib r0!, {r2, r3}
    ldmib sp!, {r2, r3, ip, lr}
    stmib r0!, {r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, ip, sp, lr}^
    stmib r0!, {lr}
    mov r3, #0xd3
    msr cpsr_c, r3
    stmib r0!, {sp}
    stmdb sp!, {r1}
    add r0, r1, #0x0
    add r0, r0, #0x48
    ldr r1, =func_02055490
    blx r1
    ldmia sp!, {r1}
    ldr sp, [r1, #0x44]
    mov r3, #0xd2
    msr cpsr_c, r3
    ldr r2, [r1, #0x0]!
    msr spsr_fc, r2
    ldr lr, [r1, #0x40]
    ldmib r1!, {r0, r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, r11, ip, sp, lr}^
    mov r0, r0
    stmda sp!, {r0, r1, r2, r3, ip, lr}
    ldmia sp!, {pc}
}
// clang-format on
