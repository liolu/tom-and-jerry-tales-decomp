#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020079f4();
extern void func_02008234();
extern void func_02008378();
extern void func_02008460();
extern void OS_Terminate();
extern char data_0206a31c[];
extern char data_02086b08[];
// clang-format off
asm void func_02007338(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0x4
    and r2, r1, #0x7
    add r2, r2, r2, lsl #0x1
    add r2, r0, r2
    add r4, r2, #0x1000
    add r2, r4, #0x48
    add r3, r2, #0x800
    mov ip, #0x1
    add lr, r4, #0x49
    swpb r2, ip, [r3]
    add r4, r4, #0x4a
    add lr, lr, #0x800
    mov r3, #0x0
    swpb r2, r3, [lr]
    add r4, r4, #0x800
    swpb r2, r1, [r4]
    ldr r2, =data_02086b08
    ldrb r2, [r2, #0x0]
    cmp r2, #0x0
    addne sp, sp, #0x4
    ldmnefd sp!, {r3, r4, pc}
    ldr r2, =data_0206a31c
    ldr r2, [r2, #0x0]
    cmp r2, #0x7
    addls pc, pc, r2, lsl #0x2
    b L_0200743c
L_020073a4:
    b L_020073c4
    b L_020073d8
    b L_020073ec
    b L_02007404
    b L_02007418
    b L_02007424
    b L_0200743c
    b L_02007430
L_020073c4:
    mov r2, r3
    str r3, [sp, #0x0]
    bl func_020079f4
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_020073d8:
    mov r2, ip
    str r3, [sp, #0x0]
    bl func_020079f4
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_020073ec:
    mov r2, r3
    str r3, [sp, #0x0]
    mov r3, ip
    bl func_020079f4
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_02007404:
    mov r2, r3
    str ip, [sp, #0x0]
    bl func_020079f4
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_02007418:
    bl func_02008234
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_02007424:
    bl func_02008460
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_02007430:
    bl func_02008378
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_0200743c:
    bl OS_Terminate
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
