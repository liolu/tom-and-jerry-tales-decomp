#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203eb58();
extern char data_0206d4e0[];
extern char data_020b8c84[];
// clang-format off
asm void func_0203edf0(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x28
    str r0, [sp, #0x0]
    mov r0, r1
    add r1, r0, #0x7
    ldr r0, [sp, #0x0]
    mov r7, #0x0
    add r4, r0, #0x7
    bic r0, r1, #0x7
    str r0, [sp, #0x4]
    cmp r0, #0x0
    bic r0, r4, #0x7
    str r7, [sp, #0x8]
    str r0, [sp, #0x0]
    ble L_0203ef94
    ldr r0, =data_0206d4e0
    ldr r8, =data_020b8c84
    ldr r9, [r0, #0x0]
L_0203ee38:
    add r6, r2, r7
    and r0, r7, #0x7
    ldrb r10, [r6, #0x1]
    ldrb r5, [r6, #0x7]
    ldrsb r0, [r9, r0]
    str r10, [sp, #0x1c]
    add r10, r8, #0x1
    eor r0, r0, r5
    str r10, [sp, #0x18]
    add r10, r7, #0x2
    str r10, [sp, #0x14]
    add r1, r7, #0x1
    str r0, [sp, #0xc]
    and r0, r1, #0x7
    str r0, [sp, #0x10]
    ldrb r11, [r2, r7]
    ldr r10, [sp, #0x1c]
    ldrb r0, [r6, #0x2]
    add r10, r11, r10
    ldrb r1, [r6, #0x3]
    add r0, r0, r10
    ldrb ip, [r6, #0x4]
    add r0, r1, r0
    ldrb lr, [r6, #0x5]
    add r0, ip, r0
    ldrb r4, [r6, #0x6]
    add r0, lr, r0
    add lr, r8, #0x4
    add r0, r4, r0
    add r1, r5, r0
    ldr r0, [sp, #0xc]
    add r4, r7, #0x3
    swpb r0, r0, [r8]
    and r10, r4, #0x7
    ldr r0, [sp, #0x8]
    ldrb r11, [r6, #0x4]
    add r0, r0, r1
    str r0, [sp, #0x8]
    ldr r0, [sp, #0x10]
    add r4, r8, #0x3
    ldrsb r5, [r9, r0]
    ldr r0, [sp, #0x14]
    eor r11, r5, r11
    ldr r5, [sp, #0x18]
    and r1, r0, #0x7
    swpb r11, r11, [r5]
    add r0, r8, #0x2
    ldrsb ip, [r9, r1]
    ldrb r11, [r6, #0x2]
    add r5, r7, #0x4
    and r1, r5, #0x7
    eor r11, ip, r11
    swpb r11, r11, [r0]
    add r5, r7, #0x5
    ldrsb ip, [r9, r10]
    ldrb r11, [r6, #0x1]
    and r0, r5, #0x7
    add r10, r7, #0x6
    eor r11, ip, r11
    swpb r11, r11, [r4]
    add r4, r7, #0x7
    ldrsb ip, [r9, r1]
    ldrb r11, [r6, #0x5]
    add r5, r8, #0x5
    and r10, r10, #0x7
    eor r11, ip, r11
    swpb r11, r11, [lr]
    add r1, r8, #0x6
    ldrsb ip, [r9, r0]
    ldrb r11, [r2, r7]
    add r0, r8, #0x7
    add r7, r7, #0x8
    eor r11, ip, r11
    swpb r11, r11, [r5]
    ldr r5, [sp, #0x4]
    ldrsb r10, [r9, r10]
    cmp r7, r5
    ldrb r5, [r6, #0x3]
    and r4, r4, #0x7
    add r8, r8, #0x8
    eor r5, r10, r5
    swpb r5, r5, [r1]
    ldrb r1, [r6, #0x6]
    ldrsb r4, [r9, r4]
    eor r1, r4, r1
    swpb r1, r1, [r0]
    blt L_0203ee38
L_0203ef94:
    str r3, [sp, #0x20]
    ldr r3, [sp, #0x8]
    ldr r0, [sp, #0x0]
    add r2, sp, #0x20
    mov r1, #0x8
    str r3, [sp, #0x24]
    bl func_0203eb58
    cmp r0, #0x0
    addne sp, sp, #0x28
    movne r0, #0x1
    ldmnefd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, [sp, #0x0]
    ldr r2, =data_020b8c84
    ldr r1, [sp, #0x4]
    add r0, r0, #0x8
    bl func_0203eb58
    cmp r0, #0x0
    movne r0, #0x1
    moveq r0, #0x0
    add sp, sp, #0x28
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
