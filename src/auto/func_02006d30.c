#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02036340();
extern void func_02051a48();
extern char data_0206e6d4[];
// clang-format off
asm void func_02006d30(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    add r0, r5, #0x1000
    add r2, r5, #0x48
    and r1, r1, #0x7
    ldr r3, [r0, #0x834]
    add r2, r2, #0x1800
    add r1, r1, r1, lsl #0x1
    add r4, r2, r1
    cmp r3, #0x7
    ldmeqfd sp!, {r3, r4, r5, pc}
    cmp r3, #0x8
    bne L_02006d88
    mov r2, #0xc
    str r2, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    sub r2, r2, #0xd
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02006d88:
    cmp r3, #0x6
    bne L_02006dd0
    add r0, r5, #0x104
    bl func_02036340
    cmp r0, #0x0
    beq L_02006dbc
    mov r1, #0x0
    add r0, r5, #0x1000
    str r1, [r0, #0x834]
    str r1, [r0, #0x83c]
    sub r1, r1, #0x1
    str r1, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02006dbc:
    ldrb r1, [r4, #0x1]
    add r0, r5, #0x1800
    mov r1, r1, lsl #0x8
    strh r1, [r0, #0x40]
    ldmfd sp!, {r3, r4, r5, pc}
L_02006dd0:
    ldr r1, [r0, #0x830]
    cmp r1, #0x2
    bne L_02006edc
    ldr r0, [r0, #0x83c]
    cmp r0, #0x5
    bne L_02006e68
    ldrb r0, [r4, #0x0]
    cmp r0, #0x4
    ldmeqfd sp!, {r3, r4, r5, pc}
    add r0, r5, #0x104
    bl func_02036340
    cmp r0, #0x0
    beq L_02006e40
    mov ip, #0x0
    add r1, r5, #0x1000
    str ip, [r1, #0x830]
    str ip, [r1, #0x83c]
    ldrb r3, [r4, #0x1]
    ldr r2, =data_0206e6d4
    add r0, r5, #0x1800
    mov r3, r3, lsl #0x8
    strh r3, [r0, #0x40]
    sub r0, ip, #0x1
    str r0, [r1, #0x844]
    add r1, r2, #0xd4
    mov r0, #0x7
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, r4, r5, pc}
L_02006e40:
    mov r2, #0x5
    add r1, r5, #0x1000
    str r2, [r1, #0x83c]
    ldrb r3, [r4, #0x1]
    add r0, r5, #0x1800
    sub r2, r2, #0x6
    mov r3, r3, lsl #0x8
    strh r3, [r0, #0x40]
    str r2, [r1, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02006e68:
    cmp r0, #0x6
    bne L_02006ed4
    add r0, r5, #0x104
    bl func_02036340
    cmp r0, #0x0
    beq L_02006eac
    mov r2, #0x0
    add r1, r5, #0x1000
    str r2, [r1, #0x830]
    str r2, [r1, #0x83c]
    ldrb r3, [r4, #0x1]
    add r0, r5, #0x1800
    sub r2, r2, #0x1
    mov r3, r3, lsl #0x8
    strh r3, [r0, #0x40]
    str r2, [r1, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02006eac:
    mov r2, #0x6
    add r1, r5, #0x1000
    str r2, [r1, #0x83c]
    ldrb r3, [r4, #0x1]
    add r0, r5, #0x1800
    sub r2, r2, #0x7
    mov r3, r3, lsl #0x8
    strh r3, [r0, #0x40]
    str r2, [r1, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02006ed4:
    bl func_02051a48
    ldmfd sp!, {r3, r4, r5, pc}
L_02006edc:
    cmp r1, #0x3
    bne L_02006f58
    ldr r0, [r0, #0x83c]
    cmp r0, #0x7
    bne L_02006f50
    ldrb r0, [r4, #0x0]
    cmp r0, #0x5
    ldmeqfd sp!, {r3, r4, r5, pc}
    add r0, r5, #0x104
    bl func_02036340
    cmp r0, #0x0
    beq L_02006f38
    mov r2, #0x0
    add r1, r5, #0x1000
    str r2, [r1, #0x830]
    str r2, [r1, #0x83c]
    ldrb r3, [r4, #0x1]
    add r0, r5, #0x1800
    sub r2, r2, #0x1
    mov r3, r3, lsl #0x8
    strh r3, [r0, #0x40]
    str r2, [r1, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02006f38:
    mov r1, #0x7
    add r0, r5, #0x1000
    str r1, [r0, #0x83c]
    sub r1, r1, #0x8
    str r1, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02006f50:
    bl func_02051a48
    ldmfd sp!, {r3, r4, r5, pc}
L_02006f58:
    cmp r3, #0x9
    addls pc, pc, r3, lsl #0x2
    b L_020072b0
L_02006f64:
    b L_02006f8c
    b L_020072b0
    b L_020072b0
    b L_02007140
    b L_02007140
    b L_020071ec
    b L_020072b0
    b L_020072b0
    b L_02007278
    ldmfd sp!, {r3, r4, r5, pc}
L_02006f8c:
    ldrb r1, [r4, #0x0]
    cmp r1, #0xc
    addls pc, pc, r1, lsl #0x2
    b L_02007138
L_02006f9c:
    b L_02006fd0
    b L_02006fd0
    b L_02006ff4
    b L_02007018
    b L_0200703c
    b L_02007060
    b L_02007084
    b L_020070a8
    ldmfd sp!, {r3, r4, r5, pc}
    b L_02007138
    b L_020070cc
    b L_020070f0
    b L_02007114
L_02006fd0:
    mov r2, #0x1
    str r2, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    sub r2, r2, #0x2
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02006ff4:
    mov r1, #0x4
    str r1, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    mov r2, #0x1
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02007018:
    mov r1, #0x3
    str r1, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    mov r2, #0x1
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_0200703c:
    mov r2, #0x5
    str r2, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    sub r2, r2, #0x6
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02007060:
    mov r2, #0x7
    str r2, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    sub r2, r2, #0x8
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02007084:
    mov r2, #0x8
    str r2, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    sub r2, r2, #0x9
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_020070a8:
    mov r2, #0x9
    str r2, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    sub r2, r2, #0xa
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_020070cc:
    mov r2, #0xc
    str r2, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    sub r2, r2, #0xd
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_020070f0:
    mov r2, #0xd
    str r2, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    sub r2, r2, #0xe
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02007114:
    mov r2, #0x17
    str r2, [r0, #0x83c]
    ldrb r3, [r4, #0x1]
    add r1, r5, #0x1800
    sub r2, r2, #0x18
    mov r3, r3, lsl #0x8
    strh r3, [r1, #0x40]
    str r2, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02007138:
    bl func_02051a48
    ldmfd sp!, {r3, r4, r5, pc}
L_02007140:
    ldrb r0, [r4, #0x0]
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_020071e4
L_02007150:
    b L_02007170
    b L_02007170
    b L_02007170
    b L_02007170
    b L_02007170
    b L_02007170
    b L_02007170
    b L_02007170
L_02007170:
    add r0, r5, #0x104
    bl func_02036340
    cmp r0, #0x0
    beq L_020071ac
    mov r2, #0x0
    add r1, r5, #0x1000
    str r2, [r1, #0x834]
    str r2, [r1, #0x83c]
    ldrb r3, [r4, #0x1]
    add r0, r5, #0x1800
    sub r2, r2, #0x1
    mov r3, r3, lsl #0x8
    strh r3, [r0, #0x40]
    str r2, [r1, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_020071ac:
    add r0, r5, #0x1000
    ldr r1, [r0, #0x834]
    cmp r1, #0x4
    moveq r1, #0x8
    movne r1, #0x7
    str r1, [r0, #0x83c]
    ldrb r2, [r4, #0x1]
    add r0, r5, #0x1800
    add r1, r5, #0x1000
    mov r2, r2, lsl #0x8
    strh r2, [r0, #0x40]
    mvn r0, #0x0
    str r0, [r1, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_020071e4:
    bl func_02051a48
    ldmfd sp!, {r3, r4, r5, pc}
L_020071ec:
    ldrb r0, [r4, #0x0]
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_02007270
L_020071fc:
    b L_0200721c
    b L_0200721c
    b L_0200721c
    b L_0200721c
    b L_0200721c
    b L_0200721c
    b L_0200721c
    b L_0200721c
L_0200721c:
    add r0, r5, #0x104
    bl func_02036340
    cmp r0, #0x0
    beq L_02007248
    mov r1, #0x0
    add r0, r5, #0x1000
    str r1, [r0, #0x834]
    str r1, [r0, #0x83c]
    sub r1, r1, #0x1
    str r1, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02007248:
    mov r2, #0x9
    add r1, r5, #0x1000
    str r2, [r1, #0x83c]
    ldrb r3, [r4, #0x1]
    add r0, r5, #0x1800
    sub r2, r2, #0xa
    mov r3, r3, lsl #0x8
    strh r3, [r0, #0x40]
    str r2, [r1, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_02007270:
    bl func_02051a48
    ldmfd sp!, {r3, r4, r5, pc}
L_02007278:
    add r0, r5, #0x104
    bl func_02036340
    cmp r0, #0x0
    ldmeqfd sp!, {r3, r4, r5, pc}
    ldr r0, [r5, #0x24]
    cmp r0, #0x0
    ldmnefd sp!, {r3, r4, r5, pc}
    mov r1, #0x0
    add r0, r5, #0x1000
    str r1, [r0, #0x834]
    str r1, [r0, #0x83c]
    sub r1, r1, #0x1
    str r1, [r0, #0x844]
    ldmfd sp!, {r3, r4, r5, pc}
L_020072b0:
    add r0, r5, #0x1000
    mov r1, #0x0
    str r1, [r0, #0x834]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
