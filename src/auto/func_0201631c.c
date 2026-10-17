#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020163d4();
extern void func_0201daa4();
extern char data_0206e6d4[];
extern char data_0206e6ec[];
extern char data_02087090[];
extern char data_02087098[];
extern char data_0208709c[];
// clang-format off
asm void func_0201631c(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_0206e6d4
    ldr r3, =data_02087090
    ldrb ip, [r0, #0x0]
    mov r2, #0x50
    ldr r4, =data_02087098
    swpb r1, ip, [r3]
    ldr r1, =0x4e4f4e45
    ldrsb r3, [r3, #0x0]
    smulbb r3, r3, r2
    ldr r3, [r4, r3]
    cmp r3, r1
    bne L_0201636c
    bl func_0201daa4
    ldr r0, =data_02087090
    ldr r1, =data_0206e6d4
    ldrsb r0, [r0, #0x0]
    swpb r0, r0, [r1]
    bl func_020163d4
    ldmfd sp!, {r4, pc}
L_0201636c:
    ldr r0, =data_0208709c
    ldr lr, =data_0206e6ec
    mla r4, ip, r2, r0
    mov ip, #0x4
L_0201637c:
    ldmia r4!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    subs ip, ip, #0x1
    bne L_0201637c
    ldmia r4, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    ldmfd sp!, {r4, pc}
}
// clang-format on
