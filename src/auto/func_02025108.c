#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020053a0();
extern char data_0206b918[];
extern char data_020877d0[];
// clang-format off
asm void func_02025108(void) {
    stmfd sp!, {r4, lr}
    mov r4, r2
    mov r0, r4
    bl func_020053a0
    cmp r0, #0x5
    ldmeqfd sp!, {r4, pc}
    sub r1, r4, #0x49
    cmp r1, #0x7
    addls pc, pc, r1, lsl #0x2
    b L_0202525c
L_02025130:
    b L_02025150
    b L_02025168
    b L_02025184
    b L_020251a0
    b L_020251c8
    b L_020251f0
    b L_02025218
    b L_02025240
L_02025150:
    ldr r0, =data_020877d0
    mov r2, #0x1
    add r1, r0, #0x18
    str r2, [r0, #0x20]
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, pc}
L_02025168:
    ldr r0, =data_020877d0
    mov r1, #0x2
    str r1, [r0, #0x20]
    add r1, r0, #0x18
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_02025184:
    ldr r0, =data_020877d0
    mov r1, #0x0
    str r1, [r0, #0x20]
    add r1, r0, #0x18
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_020251a0:
    ldr r2, =data_020877d0
    mov r0, #0x1
    add r1, r2, #0x18
    swpb r0, r0, [r1]
    add r1, r2, #0x17
    mov r0, #0x3
    str r0, [r2, #0x20]
    mov r0, #0x15
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_020251c8:
    ldr r2, =data_020877d0
    mov r0, #0x1
    add r1, r2, #0x18
    swpb r0, r0, [r1]
    add r1, r2, #0x17
    mov r0, #0x4
    str r0, [r2, #0x20]
    mov r0, #0x13
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_020251f0:
    ldr r2, =data_020877d0
    mov r0, #0x1
    add r1, r2, #0x18
    swpb r0, r0, [r1]
    add r1, r2, #0x17
    mov r0, #0x5
    str r0, [r2, #0x20]
    mov r0, #0x18
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_02025218:
    ldr r2, =data_020877d0
    mov r0, #0x1
    add r1, r2, #0x18
    swpb r0, r0, [r1]
    add r1, r2, #0x17
    mov r0, #0x6
    str r0, [r2, #0x20]
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_02025240:
    ldr r2, =data_020877d0
    mov r0, #0x1
    add r1, r2, #0x18
    swpb r0, r0, [r1]
    mov r0, #0x7
    str r0, [r2, #0x20]
    ldmfd sp!, {r4, pc}
L_0202525c:
    cmp r0, #0x7
    bne L_02025280
    ldr r1, =data_020877d0
    ldr r3, =data_0206b918
    add r2, r1, #0x2
    mov r1, #0x1
    swpb r1, r1, [r2]
    swpb r0, r0, [r3]
    ldmfd sp!, {r4, pc}
L_02025280:
    ldr r1, =data_020877d0
    ldr r2, =data_0206b918
    add r1, r1, #0x11
    mov r3, #0x1
    swpb r0, r0, [r2]
    swpb r0, r3, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
