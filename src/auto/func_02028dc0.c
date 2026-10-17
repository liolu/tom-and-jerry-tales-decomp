#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203ff1c();
extern void func_02040094();
extern void func_02040228();
extern void func_0204f490();
extern void func_0205bdf4();
extern char data_020693b0[];
extern char data_020693d0[];
extern char data_0206c4dc[];
extern char data_0206c4ec[];
extern char data_0206c4f8[];
extern char data_0206c500[];
extern char data_0206c50c[];
extern char data_0206c518[];
extern char data_0206c520[];
extern char data_02087e98[];
extern char data_02087ea8[];
extern char data_02087eb0[];
extern char data_02087ed0[];
// clang-format off
asm void func_02028dc0(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldr r4, [r5, #0x4]
    bl func_02040228
    ldr r1, [r5, #0x0]
    mov r5, r0
    cmp r1, #0x2
    bne L_02028e84
    ldrb r0, [r4, #0x1]
    ldr r2, =data_02087e98
    sub r0, r0, #0x30
    add r1, r2, #0x1
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x0]
    subs r0, r0, #0x30
    bne L_02028e40
    mov r0, #0x0
    swpb r0, r0, [r2]
    ldr r3, =data_020693b0
    ldrb r2, [r2, #0x1]
    ldr r0, =data_02087eb0
    ldr r1, =data_0206c4ec
    ldr r2, [r3, r2, lsl #0x2]
    bl func_0205bdf4
    ldr r0, =data_02087e98
    ldr r2, =data_020693d0
    ldrb r3, [r0, #0x1]
    ldr r0, =data_02087ed0
    ldr r1, =data_0206c4f8
    ldr r2, [r2, r3, lsl #0x2]
    bl func_0205bdf4
    b L_02028e84
L_02028e40:
    cmp r0, #0x1
    bne L_02028e84
    mov r0, #0x1
    swpb r0, r0, [r2]
    ldr r3, =data_020693b0
    ldrb r2, [r2, #0x1]
    ldr r0, =data_02087eb0
    ldr r1, =data_0206c500
    ldr r2, [r3, r2, lsl #0x2]
    bl func_0205bdf4
    ldr r0, =data_02087e98
    ldr r2, =data_020693d0
    ldrb r3, [r0, #0x1]
    ldr r0, =data_02087ed0
    ldr r1, =data_0206c50c
    ldr r2, [r2, r3, lsl #0x2]
    bl func_0205bdf4
L_02028e84:
    ldr r0, =data_02087e98
    ldr r1, =data_0206c4dc
    ldrb r2, [r0, #0x1]
    ldrb r1, [r1, r2]
    cmp r1, #0x0
    ldmnefd sp!, {r3, r4, r5, pc}
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02028edc
    ldr r0, =data_02087ea8
    str r2, [sp, #0x0]
    ldr r1, =data_0206c518
    mov r2, #0x0
    mov r3, #0x6
    bl func_0204f490
    ldr r0, [r5, #0x1c]
    ldr r2, =data_02087ea8
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r5, #0x18]
    bl func_02040094
    ldmfd sp!, {r3, r4, r5, pc}
L_02028edc:
    cmp r0, #0x1
    ldmnefd sp!, {r3, r4, r5, pc}
    ldr r0, =data_02087ea8
    ldr r1, =data_0206c520
    mov r2, #0x2
    mov r3, #0x1
    bl func_0204f490
    ldr r0, [r5, #0x1c]
    ldr r2, =data_02087ea8
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r5, #0x18]
    bl func_02040094
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
