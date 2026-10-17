#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02013510();
extern void func_02013590();
extern void func_0201390c();
extern void func_02013a2c();
extern void func_02013f10();
extern void func_02014124();
extern void func_0201412c();
extern void func_020142dc();
extern void func_020143b0();
extern void func_020143c4();
extern void func_020144b0();
extern void func_02014644();
extern void func_02014738();
extern void func_02043fd0();
extern void func_020440e8();
extern char data_0206dd38[];
extern char data_0206ea14[];
// clang-format off
asm void func_020132f0(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r4, r0
    ldr r0, [r4, #0x4]
    cmp r0, #0x0
    bne L_02013354
    ldr r0, =data_0206ea14
    ldr r1, [r4, #0x28]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x28]
    cmp r0, r1
    ble L_02013330
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
L_02013330:
    ldr r0, =data_0206ea14
    ldr r1, [r4, #0x30]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x28]
    cmp r0, r1
    bge L_02013414
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, pc}
L_02013354:
    cmp r0, #0x1
    bne L_02013414
    ldrb r0, [r4, #0x3c]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    beq L_020133bc
    ldr r0, [r4, #0x0]
    cmp r0, #0x2
    bne L_020133bc
    add r0, r4, #0x40
    bl func_020440e8
    mov r5, r0
    add r0, r4, #0x40
    bl func_02043fd0
    cmp r5, r0
    bge L_020133a8
    add r0, r4, #0x40
    bl func_020440e8
    mvn r1, #0x0
    cmp r0, r1
    bne L_020133bc
L_020133a8:
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
    b L_020133f0
L_020133bc:
    ldr r0, [r4, #0x0]
    cmp r0, #0x2
    beq L_020133f0
    ldrh r1, [r4, #0x28]
    ldrh r0, [r4, #0x30]
    ldr r2, [r4, #0x2c]
    add r0, r1, r0
    cmp r2, r0, lsl #0xc
    bls L_020133f0
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
L_020133f0:
    ldr r0, =data_0206dd38
    ldr r1, [r4, #0x2c]
    ldr r0, [r0, #0x0]
    add r1, r1, r0
    str r1, [r4, #0x2c]
    ldrh r0, [r4, #0x30]
    cmp r1, r0, lsl #0xc
    movlo r0, #0x1
    ldmlofd sp!, {r3, r4, r5, pc}
L_02013414:
    ldr r0, [r4, #0x0]
    cmp r0, #0xf
    addls pc, pc, r0, lsl #0x2
    b L_02013500
L_02013424:
    b L_02013500
    b L_02013464
    b L_02013470
    b L_0201347c
    b L_02013488
    b L_020134ac
    b L_02013494
    b L_020134b8
    b L_020134c4
    b L_020134d0
    b L_02013500
    b L_020134a0
    b L_020134dc
    b L_020134e8
    b L_02013500
    b L_020134f4
L_02013464:
    mov r0, r4
    bl func_02014124
    ldmfd sp!, {r3, r4, r5, pc}
L_02013470:
    mov r0, r4
    bl func_020142dc
    ldmfd sp!, {r3, r4, r5, pc}
L_0201347c:
    mov r0, r4
    bl func_020143b0
    ldmfd sp!, {r3, r4, r5, pc}
L_02013488:
    mov r0, r4
    bl func_020143c4
    ldmfd sp!, {r3, r4, r5, pc}
L_02013494:
    mov r0, r4
    bl func_020144b0
    ldmfd sp!, {r3, r4, r5, pc}
L_020134a0:
    mov r0, r4
    bl func_02014644
    ldmfd sp!, {r3, r4, r5, pc}
L_020134ac:
    mov r0, r4
    bl func_0201412c
    ldmfd sp!, {r3, r4, r5, pc}
L_020134b8:
    mov r0, r4
    bl func_02013a2c
    ldmfd sp!, {r3, r4, r5, pc}
L_020134c4:
    mov r0, r4
    bl func_02014738
    ldmfd sp!, {r3, r4, r5, pc}
L_020134d0:
    mov r0, r4
    bl func_02013510
    ldmfd sp!, {r3, r4, r5, pc}
L_020134dc:
    mov r0, r4
    bl func_02013f10
    ldmfd sp!, {r3, r4, r5, pc}
L_020134e8:
    mov r0, r4
    bl func_02013590
    ldmfd sp!, {r3, r4, r5, pc}
L_020134f4:
    mov r0, r4
    bl func_0201390c
    ldmfd sp!, {r3, r4, r5, pc}
L_02013500:
    mov r0, #0x2
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
