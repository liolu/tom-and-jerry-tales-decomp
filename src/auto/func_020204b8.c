#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203d0d8();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_02063118();
extern char data_0206b158[];
extern char data_0206e690[];
extern char data_020875a8[];
extern char data_020b8b6c[];
// clang-format off
asm void func_020204b8(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    ldr r6, =data_020875a8
    mov r5, r0
    ldrb r0, [r6, #0x2]
    mov r4, r1
    mov r9, r2
    cmp r0, #0x0
    mov r8, r3
    ldr r0, [r6, #0x44]
    beq L_02020574
    add r0, r0, #0x1
    ldr r1, =data_0206b158
    str r0, [r6, #0x44]
    ldrb r1, [r1, #0x3]
    bl func_02063118
    cmp r1, #0x0
    bne L_0202065c
    mov r3, r6
    mov r0, #0x0
    add r2, r3, #0x2
    swpb r1, r0, [r2]
    cmp r8, #0x0
    str r0, [r3, #0x44]
    sub r1, r9, #0x5
    mov r3, #0x19
    beq L_02020544
    mov r1, r1, lsl #0x10
    ldr r6, =data_020b8b6c
    str r0, [sp, #0x0]
    mov r1, r1, lsr #0x10
    mov r2, #0xff
    stmib sp, {r0, r6}
    bl func_0203d0d8
    b L_0202065c
L_02020544:
    rsb r2, r4, #0xff
    str r0, [sp, #0x0]
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    str r0, [sp, #0x4]
    ldr r6, =data_020b8b6c
    mov r0, r4
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    str r6, [sp, #0x8]
    bl func_0203d0d8
    b L_0202065c
L_02020574:
    ldr r1, =data_0206b158
    add r0, r0, #0x1
    str r0, [r6, #0x44]
    ldrb r6, [r1, #0x3]
    ldr r3, =0x55555556
    smull r2, r1, r3, r6
    add r1, r1, r6, lsr #0x1f
    bl func_02063118
    cmp r1, #0x0
    bne L_0202065c
    ldr r2, =data_020875a8
    mov r0, #0x1
    add r1, r2, #0x2
    swpb r0, r0, [r1]
    mov r3, #0x0
    str r3, [r2, #0x44]
    ldrb r0, [r2, #0x6]
    add r1, r2, #0x6
    cmp r8, #0x0
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    beq L_02020634
    ldr r1, =data_0206e690
    mov r0, r5
    ldr r7, [r1, #0x0]
    ldr r2, [r7, #0x14]
    mov r1, r7
    ldrb r2, [r7, r2]
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    sub r2, r9, r2, asr #0x1
    mov r2, r2, lsl #0x10
    mov r6, r2, lsr #0x10
    bl func_0203d8d8
    sub r1, r4, r0, asr #0x1
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r1, r1, lsl #0x10
    ldr ip, =data_020b8b6c
    str r0, [sp, #0x4]
    mov r0, r5
    mov r2, r6
    mov r3, r7
    mov r1, r1, lsr #0x10
    str ip, [sp, #0x8]
    bl func_0203d740
    b L_0202065c
L_02020634:
    str r3, [sp, #0x0]
    ldr r1, =data_020b8b6c
    str r3, [sp, #0x4]
    ldr r0, =data_0206e690
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x0]
    mov r0, r5
    mov r1, r4
    mov r2, r9
    bl func_0203d740
L_0202065c:
    ldr r0, =data_020875a8
    ldrb r1, [sp, #0x28]
    ldrb r2, [r0, #0x6]
    cmp r2, r1
    blo L_020207a4
    cmp r1, #0x0
    beq L_020207a4
    ldrb r1, [sp, #0x2c]
    add r2, r0, #0x6
    mov r0, #0x0
    cmp r1, #0x0
    swpb r1, r0, [r2]
    beq L_0202072c
    cmp r8, #0x0
    beq L_02020700
    ldr r1, =data_0206e690
    mov r0, r5
    ldr r7, [r1, #0x0]
    ldr r2, [r7, #0x14]
    mov r1, r7
    ldrb r2, [r7, r2]
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    sub r2, r9, r2, asr #0x1
    mov r2, r2, lsl #0x10
    mov r6, r2, lsr #0x10
    bl func_0203d8d8
    sub r1, r4, r0, asr #0x1
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r1, r1, lsl #0x10
    ldr r4, =data_020b8b6c
    str r0, [sp, #0x4]
    mov r0, r5
    mov r2, r6
    mov r3, r7
    mov r1, r1, lsr #0x10
    str r4, [sp, #0x8]
    bl func_0203d740
    b L_02020788
L_02020700:
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8b6c
    ldr r0, =data_0206e690
    str r1, [sp, #0x8]
    ldr r3, [r0, #0x0]
    mov r0, r5
    mov r1, r4
    mov r2, r9
    bl func_0203d740
    b L_02020788
L_0202072c:
    cmp r8, #0x0
    sub r1, r9, #0x5
    mov r3, #0x19
    beq L_0202075c
    mov r1, r1, lsl #0x10
    ldr r4, =data_020b8b6c
    str r0, [sp, #0x0]
    mov r1, r1, lsr #0x10
    mov r2, #0xff
    stmib sp, {r0, r4}
    bl func_0203d0d8
    b L_02020788
L_0202075c:
    rsb r2, r4, #0xff
    str r0, [sp, #0x0]
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    str r0, [sp, #0x4]
    ldr r5, =data_020b8b6c
    mov r0, r4
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    str r5, [sp, #0x8]
    bl func_0203d0d8
L_02020788:
    ldr r0, =data_020875a8
    mov r2, #0x0
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
L_020207a4:
    mov r0, #0x0
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
