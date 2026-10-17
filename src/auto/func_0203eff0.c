#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203ec9c();
extern char data_0206d4e0[];
extern char data_020b8c84[];
// clang-format off
asm void func_0203eff0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    sub sp, sp, #0x8
    mov r8, r0
    add r0, r8, #0x7
    mov r6, r1
    bic r8, r0, #0x7
    mov r5, r2
    add r6, r6, #0x7
    add r2, sp, #0x0
    mov r0, r8
    mov r1, #0x8
    mov r4, r3
    bic r6, r6, #0x7
    mov r7, #0x0
    bl func_0203ec9c
    cmp r0, #0x0
    addne sp, sp, #0x8
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    ldr r2, =data_020b8c84
    mov r1, r6
    add r0, r8, #0x8
    bl func_0203ec9c
    cmp r0, #0x0
    addne sp, sp, #0x8
    movne r0, #0x1
    ldmnefd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
    cmp r6, #0x0
    mov r3, r7
    ble L_0203f1a0
    ldr r0, =data_0206d4e0
    ldr ip, =data_020b8c84
    ldr r1, [r0, #0x0]
L_0203f074:
    and r0, r3, #0x7
    ldrb r9, [ip, #0x0]
    ldrsb r0, [r1, r0]
    add r2, r5, r3
    add r8, r2, #0x7
    eor r0, r9, r0
    swpb r0, r0, [r8]
    add r0, r3, #0x1
    and r0, r0, #0x7
    ldrb r10, [ip, #0x1]
    ldrsb r0, [r1, r0]
    add r8, r2, #0x4
    add r9, r3, #0x2
    eor r0, r10, r0
    swpb r0, r0, [r8]
    and r0, r9, #0x7
    ldrb r10, [ip, #0x2]
    ldrsb r0, [r1, r0]
    add r9, r3, #0x3
    add r8, r2, #0x2
    eor r0, r10, r0
    swpb r0, r0, [r8]
    and r0, r9, #0x7
    ldrb r10, [ip, #0x3]
    ldrsb r0, [r1, r0]
    add r9, r3, #0x4
    add r8, r2, #0x1
    eor r0, r10, r0
    swpb r0, r0, [r8]
    and r9, r9, #0x7
    add r0, r3, #0x5
    ldrb r8, [ip, #0x4]
    ldrsb r10, [r1, r9]
    add r9, r2, #0x5
    and r0, r0, #0x7
    eor r8, r8, r10
    swpb r8, r8, [r9]
    add r8, r3, #0x6
    ldrb r9, [ip, #0x5]
    ldrsb r0, [r1, r0]
    and r8, r8, #0x7
    add lr, r2, #0x3
    eor r0, r9, r0
    swpb r0, r0, [r2]
    add r9, r3, #0x7
    ldrb r0, [ip, #0x6]
    ldrsb r10, [r1, r8]
    and r9, r9, #0x7
    add r8, r2, #0x6
    eor r0, r0, r10
    swpb r0, r0, [lr]
    ldrb r10, [ip, #0x7]
    ldrsb r0, [r1, r9]
    add ip, ip, #0x8
    eor r0, r10, r0
    swpb r0, r0, [r8]
    ldrb r8, [r5, r3]
    ldrb r0, [r2, #0x1]
    add r3, r3, #0x8
    ldrb r9, [r2, #0x2]
    add r0, r8, r0
    ldrb r8, [r2, #0x3]
    add r0, r9, r0
    ldrb r9, [r2, #0x4]
    add r0, r8, r0
    ldrb r8, [r2, #0x5]
    add r0, r9, r0
    ldrb r9, [r2, #0x6]
    add r0, r8, r0
    ldrb r2, [r2, #0x7]
    add r0, r9, r0
    cmp r3, r6
    add r0, r2, r0
    add r7, r7, r0
    blt L_0203f074
L_0203f1a0:
    ldr r0, [sp, #0x4]
    cmp r7, r0
    mov r0, #0x0
    strne r0, [r4, #0x0]
    ldreq r1, [sp, #0x0]
    movne r0, #0x2
    streq r1, [r4, #0x0]
    add sp, sp, #0x8
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
