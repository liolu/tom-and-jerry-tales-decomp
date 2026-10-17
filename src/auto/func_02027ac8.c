#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201cf84();
extern void func_02027730();
extern void func_02027f3c();
extern void func_0203b96c();
extern void func_0203c24c();
extern void func_0203d740();
extern void func_0203d8d8();
extern void func_0204221c();
extern char data_0206b918[];
extern char data_0206b974[];
extern char data_0206bd88[];
extern char data_0206bd98[];
extern char data_0206bda8[];
extern char data_0206e690[];
extern char data_020877d0[];
extern char data_020b8b6c[];
// clang-format off
asm void func_02027ac8(void) {
    stmfd sp!, {r3, r4, r5, r6, lr}
    sub sp, sp, #0xc
    mov r6, r0
    mov r0, #0x0
    bl func_0203b96c
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_0201cf84
    cmp r0, #0x0
    beq L_02027b14
    ldr r0, =data_0206bd88
    ldr r1, =data_0206bd98
    ldr r2, =data_0206bda8
    ldrb r0, [r0, #0x5]
    ldrb r1, [r1, #0x5]
    ldrb r2, [r2, #0x5]
    bl func_0203c24c
    b L_02027b30
L_02027b14:
    ldr r0, =data_0206bd88
    ldr r1, =data_0206bd98
    ldr r2, =data_0206bda8
    ldrb r0, [r0, #0x4]
    ldrb r1, [r1, #0x4]
    ldrb r2, [r2, #0x4]
    bl func_0203c24c
L_02027b30:
    ldr r0, =data_0206bd88
    ldr r1, =data_0206bd98
    ldr r2, =data_0206bda8
    ldrb r0, [r0, #0xb]
    ldrb r1, [r1, #0xb]
    ldrb r2, [r2, #0xb]
    bl func_0203c24c
    ldr r0, =data_0206bd88
    ldr r1, =data_0206bd98
    ldr r2, =data_0206bda8
    ldrb r0, [r0, #0x9]
    ldrb r1, [r1, #0x9]
    ldrb r2, [r2, #0x9]
    bl func_0203c24c
    ldr r0, =data_0206bd88
    ldr r1, =data_0206bd98
    ldr r2, =data_0206bda8
    ldrb r0, [r0, #0x7]
    ldrb r1, [r1, #0x7]
    ldrb r2, [r2, #0x7]
    bl func_0203c24c
    cmp r6, #0x3
    addls pc, pc, r6, lsl #0x2
    b L_02027bcc
L_02027b90:
    b L_02027ba0
    b L_02027bc4
    b L_02027bb8
    b L_02027bac
L_02027ba0:
    ldr r0, =data_0206bd98
    ldrb r4, [r0, #0x4]
    b L_02027bcc
L_02027bac:
    ldr r0, =data_0206bd98
    ldrb r4, [r0, #0xa]
    b L_02027bcc
L_02027bb8:
    ldr r0, =data_0206bd98
    ldrb r4, [r0, #0x6]
    b L_02027bcc
L_02027bc4:
    ldr r0, =data_0206bd98
    ldrb r4, [r0, #0x8]
L_02027bcc:
    cmp r6, #0x4
    bhs L_02027d50
    mov r0, #0x0
    bl func_02027730
    cmp r6, #0x0
    bne L_02027c98
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_0201cf84
    cmp r0, #0x0
    beq L_02027d30
    ldr r0, =data_0206bd88
    ldr r2, =data_0206bda8
    sub r1, r4, #0x10
    mov r1, r1, lsl #0x10
    ldrb r0, [r0, #0xc]
    ldrb r2, [r2, #0xc]
    mov r1, r1, lsr #0x10
    bl func_0203c24c
    ldr r0, =data_0206e690
    ldr r1, =data_0206b974
    ldr r5, [r0, #0x0]
    ldr r0, [r1, r6, lsl #0x2]
    bl func_0204221c
    ldr r2, [r5, #0x14]
    mov r1, r5
    ldrb r2, [r5, r2]
    mov r4, r0
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r2, r2, #0x27
    mov r2, r2, lsl #0x10
    mov r6, r2, lsr #0x10
    bl func_0203d8d8
    mov r2, r6
    mov r3, r5
    mov r0, r0, asr #0x1
    rsb r0, r0, #0x80
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    mov r4, #0x0
    str r4, [sp, #0x0]
    str r4, [sp, #0x4]
    ldr r4, =data_020b8b6c
    str r4, [sp, #0x8]
    bl func_0203d740
    b L_02027d30
L_02027c98:
    ldr r0, =data_0206bd88
    ldr r2, =data_0206bda8
    sub r1, r4, #0x10
    mov r1, r1, lsl #0x10
    ldrb r0, [r0, #0xc]
    ldrb r2, [r2, #0xc]
    mov r1, r1, lsr #0x10
    bl func_0203c24c
    ldr r0, =data_0206e690
    ldr r1, =data_0206b974
    ldr r5, [r0, #0x0]
    ldr r0, [r1, r6, lsl #0x2]
    bl func_0204221c
    ldr r2, [r5, #0x14]
    mov r1, r5
    ldrb r2, [r5, r2]
    mov r4, r0
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r2, r2, #0x27
    mov r2, r2, lsl #0x10
    mov r6, r2, lsr #0x10
    bl func_0203d8d8
    mov r2, r6
    mov r3, r5
    mov r0, r0, asr #0x1
    rsb r0, r0, #0x80
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    mov r4, #0x0
    str r4, [sp, #0x0]
    str r4, [sp, #0x4]
    ldr r4, =data_020b8b6c
    str r4, [sp, #0x8]
    bl func_0203d740
L_02027d30:
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    cmp r0, #0x7
    cmpne r0, #0x6
    beq L_02027dfc
    mov r0, #0x1
    bl func_02027f3c
    b L_02027dfc
L_02027d50:
    cmp r6, #0x5
    ldrne r0, =data_020877d0
    ldrne r0, [r0, #0x28]
    cmpne r0, #0x5
    bne L_02027dfc
    mov r0, #0x1
    bl func_02027730
    ldr r0, =data_0206bd88
    sub r1, r4, #0x10
    mov r1, r1, lsl #0x10
    ldrb r0, [r0, #0xc]
    mov r1, r1, lsr #0x10
    mov r2, #0xc0
    bl func_0203c24c
    ldr r1, =data_0206e690
    mov r0, #0x42
    ldr r5, [r1, #0x0]
    bl func_0204221c
    ldr r1, [r5, #0x14]
    mov r4, r0
    ldrb r2, [r5, r1]
    mov r1, r5
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r2, r2, #0x27
    mov r2, r2, lsl #0x10
    mov r6, r2, lsr #0x10
    bl func_0203d8d8
    mov r2, r6
    mov r3, r5
    mov r0, r0, asr #0x1
    rsb r0, r0, #0x80
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r4
    mov r4, #0x0
    str r4, [sp, #0x0]
    str r4, [sp, #0x4]
    ldr r4, =data_020b8b6c
    str r4, [sp, #0x8]
    bl func_0203d740
L_02027dfc:
    mov r0, #0x9
    mov r1, r0
    mov r2, #0x9c
    bl func_0203c24c
    ldr r0, =data_0206bd88
    ldr r1, =data_0206bd98
    ldr r2, =data_0206bda8
    ldrb r0, [r0, #0x0]
    ldrb r1, [r1, #0x0]
    ldrb r2, [r2, #0x0]
    bl func_0203c24c
    ldr r0, =data_0206bd88
    ldr r1, =data_0206bd98
    ldr r2, =data_0206bda8
    ldrb r0, [r0, #0x1]
    ldrb r1, [r1, #0x1]
    ldrb r2, [r2, #0x1]
    bl func_0203c24c
    ldr r0, =data_0206bd88
    ldr r1, =data_0206bd98
    ldr r2, =data_0206bda8
    ldrb r0, [r0, #0x2]
    ldrb r1, [r1, #0x2]
    ldrb r2, [r2, #0x2]
    bl func_0203c24c
    ldr r0, =data_0206bd88
    ldr r1, =data_0206bd98
    ldr r2, =data_0206bda8
    ldrb r0, [r0, #0x3]
    ldrb r1, [r1, #0x3]
    ldrb r2, [r2, #0x3]
    bl func_0203c24c
    ldr r0, =data_020877d0
    ldrb r0, [r0, #0xf]
    cmp r0, #0x0
    addne sp, sp, #0xc
    ldmnefd sp!, {r3, r4, r5, r6, pc}
    ldr r1, =data_0206e690
    mov r0, #0x5c
    ldr r5, [r1, #0x0]
    bl func_0204221c
    ldr r2, [r5, #0x14]
    mov r1, r5
    ldrb r2, [r5, r2]
    mov r4, r0
    add r2, r2, #0x6
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    mov r2, r2, asr #0x1
    rsb r2, r2, #0x59
    mov r2, r2, lsl #0x10
    mov r6, r2, lsr #0x10
    bl func_0203d8d8
    mov r0, r0, asr #0x1
    rsb r1, r0, #0x80
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r1, r1, lsl #0x10
    ldr ip, =data_020b8b6c
    str r0, [sp, #0x4]
    mov r0, r4
    mov r2, r6
    mov r3, r5
    mov r1, r1, lsr #0x10
    str ip, [sp, #0x8]
    bl func_0203d740
    ldr r0, =data_020877d0
    mov r2, #0x1
    add r1, r0, #0xf
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, r5, r6, pc}
}
// clang-format on
