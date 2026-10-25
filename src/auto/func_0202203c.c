#include "m2c.h"

extern char data_0206b860[];
extern char data_0206b864[];
extern char data_02087770[];
extern char data_02087774[];
void func_02021400(void);
void func_02021420(void);
void func_0202d4b0(void);
void func_0202d4f0(void);
void func_0203ff1c(void);
void func_02040094(void);
void func_02040228(void);
void func_0204f490(void);
// clang-format off
asm void func_0202203c(void) {
    stmdb sp!, {r3, r4, r5, lr}
    mov r5, r0
    bl func_02040228
    mov r4, r0
    cmp r5, #0x8
    ldreq r0, =data_02087770
    ldreqb r5, [r0, #0x1]
    ldr r0, =data_02087770
    ldrb r2, [r0, #0x0]
    add r1, r0, #0x1
    cmp r5, #0x7
    swpb r0, r2, [r1]
    addls pc, pc, r5, lsl #0x2
    ldmia sp!, {r3, r4, r5, pc}
L_02022074:
    ldmia sp!, {r3, r4, r5, pc}
    b L_02022094
    b L_020220ac
    b L_020220c4
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    ldmia sp!, {r3, r4, r5, pc}
    b L_020220f0
L_02022094:
    bl func_02021400
    bl func_02021420
    ldr r1, =data_02087770
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmia sp!, {r3, r4, r5, pc}
L_020220ac:
    bl func_0202d4b0
    bl func_0202d4f0
    ldr r1, =data_02087770
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmia sp!, {r3, r4, r5, pc}
L_020220c4:
    ldr r0, =data_02087774
    ldr r1, =data_0206b860
    mov r2, #0x1
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    ldr r2, =data_02087774
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    ldmia sp!, {r3, r4, r5, pc}
L_020220f0:
    bl func_02040228
    mov r4, r0
    ldr r0, =data_02087774
    ldr r1, =data_0206b864
    mov r2, #0x0
    mov r3, #0x4
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    ldr r2, =data_02087774
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    ldmia sp!, {r3, r4, r5, pc}
}
// clang-format on
