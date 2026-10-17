#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020222b8();
extern void func_0203d0d8();
extern char data_020871f4[];
extern char data_020b8b44[];
// clang-format off
asm void func_02017280(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    cmp r0, #0x5
    addls pc, pc, r0, lsl #0x2
    b L_020173e4
L_02017294:
    b L_020173e4
    b L_020172ac
    b L_02017310
    b L_020172c4
    b L_0201735c
    b L_020173a8
L_020172ac:
    ldr r0, =data_020871f4
    mov r2, #0x5
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_020172c4:
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r0, #0x20
    str r1, [sp, #0x4]
    ldr ip, =data_020b8b44
    mov r1, r0
    mov r2, #0xc0
    mov r3, #0x78
    str ip, [sp, #0x8]
    bl func_0203d0d8
    ldr r2, =data_020871f4
    mov r0, #0x2
    add r1, r2, #0x4
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x3
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_02017310:
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r0, #0x20
    str r1, [sp, #0x4]
    ldr ip, =data_020b8b44
    mov r1, r0
    mov r2, #0xc0
    mov r3, #0x78
    str ip, [sp, #0x8]
    bl func_0203d0d8
    ldr r2, =data_020871f4
    mov r0, #0x1
    add r1, r2, #0x4
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x3
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_0201735c:
    ldr r0, =data_020871f4
    ldrb r1, [r0, #0x4]
    cmp r1, #0x2
    bne L_02017380
    add r1, r0, #0x2
    mov r0, #0x9
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_02017380:
    mvn r0, #0xf
    mov r1, #0x14
    mov r2, #0x3
    bl func_020222b8
    ldr r0, =data_020871f4
    mov r2, #0x8
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_020173a8:
    mov r0, #0x0
    ldr ip, =data_020b8b44
    str r0, [sp, #0x0]
    mov r1, r0
    mov r2, #0x100
    mov r3, #0xc0
    stmib sp, {r0, ip}
    bl func_0203d0d8
    ldr r2, =data_020871f4
    mov r0, #0x0
    add r1, r2, #0x4
    swpb r0, r0, [r1]
    add r1, r2, #0x2
    mov r0, #0x3
    swpb r0, r0, [r1]
L_020173e4:
    add sp, sp, #0xc
    ldmfd sp!, {pc}
}
// clang-format on
