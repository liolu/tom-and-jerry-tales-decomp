#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void VEC_Subtract();
extern void VEC_Distance();
extern void FX_Atan2Idx();
extern void _dflt();
extern void _dls();
extern char data_0206a320[];
extern char data_0206e670[];
extern char data_0206fcac[];
extern char data_02086b24[];
// clang-format off
asm void func_020092e0(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x18
    ldr r9, =data_0206fcac
    mov r11, #0x0
L_020092f0:
    ldrb r0, [r9, #0x8]
    cmp r0, #0x0
    beq L_020096c8
    ldrb r0, [r9, #0x51]
    cmp r0, #0x1
    bne L_020096c8
    ldr r1, =data_0206a320
    ldr r2, [r1, #0x8]
    cmp r2, #0x0
    ldreq r0, [r1, #0x4]
    cmpeq r0, #0x0
    beq L_02009384
    cmp r2, #0x0
    bne L_02009338
    ldr r0, =data_0206a320
    ldr r1, [r0, #0x4]
    sub r1, r1, #0x1
    str r1, [r0, #0x4]
L_02009338:
    ldr r2, =data_0206e670
    mov r3, #0x1
    ldrb r0, [r2, #0x0]
    and r0, r0, #0x7
    add r0, r0, r0, lsl #0x1
    add r0, r9, r0
    add r0, r0, #0x1000
    add r0, r0, #0x48
    add r1, r0, #0x800
    swpb r0, r3, [r1]
    ldrb r2, [r2, #0x0]
    and r0, r2, #0x7
    add r0, r0, r0, lsl #0x1
    add r0, r9, r0
    add r0, r0, #0x1000
    add r0, r0, #0x4a
    add r1, r0, #0x800
    swpb r0, r2, [r1]
    b L_020096c8
L_02009384:
    add r0, r9, #0x1700
    ldrsb r3, [r0, #0xc4]
    mvn r2, #0x0
    cmp r3, r2
    bne L_02009504
    ldr r4, =data_0206e670
    mov r5, #0x2
    ldrb r2, [r4, #0x0]
    ldr r0, =data_02086b24
    and r2, r2, #0x7
    add r2, r2, r2, lsl #0x1
    add r2, r9, r2
    add r2, r2, #0x1000
    add r2, r2, #0x48
    add r3, r2, #0x800
    swpb r2, r5, [r3]
    ldrb r2, [r4, #0x0]
    ldrb r5, [r0, #0x0]
    and r2, r2, #0x7
    add r2, r2, r2, lsl #0x1
    add r2, r9, r2
    add r2, r2, #0x1000
    add r2, r2, #0x49
    add r3, r2, #0x800
    swpb r2, r5, [r3]
    ldrb r4, [r4, #0x0]
    and r2, r4, #0x7
    add r2, r2, r2, lsl #0x1
    add r2, r9, r2
    add r2, r2, #0x1000
    add r2, r2, #0x4a
    add r3, r2, #0x800
    swpb r2, r4, [r3]
    ldr r2, [r1, #0x0]
    subs r2, r2, #0x1
    str r2, [r1, #0x0]
    bne L_0200942c
    mov r2, #0x168
    str r2, [r1, #0x0]
    ldrb r1, [r0, #0x0]
    add r1, r1, #0x40
    swpb r1, r1, [r0]
L_0200942c:
    add r0, r9, #0x1000
    mov r8, #0x0
    add r0, r0, #0x3c4
    ldr r10, =data_0206fcac
    ldr r6, =0x40c00000
    ldr r5, =data_02086b24
    add r4, r0, #0x400
    mov r7, r8
L_0200944c:
    ldrb r0, [r10, #0x8]
    cmp r0, #0x0
    beq L_020094ec
    ldrb r0, [r10, #0x51]
    cmp r0, #0x0
    bne L_020094ec
    add r0, r10, #0xc4
    add r1, r9, #0xc4
    bl VEC_Distance
    bl _dflt
    mov r2, r7
    mov r3, r6
    bl _dls
    bhs L_020094ec
    ldrb r0, [r5, #0x0]
    cmp r0, #0x0
    bne L_020094a0
    ldr r2, [r10, #0xcc]
    ldr r1, [r9, #0xcc]
    cmp r2, r1
    bgt L_020094e8
L_020094a0:
    cmp r0, #0x40
    bne L_020094b8
    ldr r2, [r10, #0xc4]
    ldr r1, [r9, #0xc4]
    cmp r2, r1
    blt L_020094e8
L_020094b8:
    cmp r0, #0x80
    bne L_020094d0
    ldr r2, [r10, #0xcc]
    ldr r1, [r9, #0xcc]
    cmp r2, r1
    blt L_020094e8
L_020094d0:
    cmp r0, #0xc0
    bne L_020094ec
    ldr r1, [r10, #0xc4]
    ldr r0, [r9, #0xc4]
    cmp r1, r0
    ble L_020094ec
L_020094e8:
    swpb r0, r8, [r4]
L_020094ec:
    add r0, r10, #0x64
    add r8, r8, #0x1
    cmp r8, #0xf
    add r10, r0, #0x1800
    blo L_0200944c
    b L_020096c8
L_02009504:
    ldr r1, =data_0206fcac
    ldr r0, =0x1864
    mla r1, r3, r0, r1
    add r0, r1, #0x1000
    ldr r0, [r0, #0x834]
    cmp r0, #0x7
    bne L_0200957c
    add r0, r9, #0x1000
    add r0, r0, #0x3c4
    add r1, r0, #0x400
    swpb r0, r2, [r1]
    ldr r2, =data_0206e670
    mov r3, #0x1
    ldrb r0, [r2, #0x0]
    and r0, r0, #0x7
    add r0, r0, r0, lsl #0x1
    add r0, r9, r0
    add r0, r0, #0x1000
    add r0, r0, #0x48
    add r1, r0, #0x800
    swpb r0, r3, [r1]
    ldrb r2, [r2, #0x0]
    and r0, r2, #0x7
    add r0, r0, r0, lsl #0x1
    add r0, r9, r0
    add r0, r0, #0x1000
    add r0, r0, #0x4a
    add r1, r0, #0x800
    swpb r0, r2, [r1]
    b L_020096c8
L_0200957c:
    ldr r0, [r9, #0x64]
    mov r3, #0x0
    mov r0, r0, lsl #0x1a
    movs r0, r0, asr #0x1f
    bne L_02009628
    add r2, sp, #0xc
    add r0, r1, #0xac
    str r3, [r2, #0x0]
    str r3, [r2, #0x8]
    add r1, r9, #0xac
    str r3, [r2, #0x4]
    bl VEC_Subtract
    ldr r0, [sp, #0xc]
    ldr r1, [sp, #0x14]
    bl FX_Atan2Idx
    ldr r3, =data_0206e670
    mov r4, #0x3
    ldrb r1, [r3, #0x0]
    mov r0, r0, asr #0x8
    and r1, r1, #0x7
    add r1, r1, r1, lsl #0x1
    add r1, r9, r1
    add r1, r1, #0x1000
    add r1, r1, #0x48
    add r2, r1, #0x800
    swpb r1, r4, [r2]
    ldrb r1, [r3, #0x0]
    and r1, r1, #0x7
    add r1, r1, r1, lsl #0x1
    add r1, r9, r1
    add r1, r1, #0x1000
    add r1, r1, #0x49
    add r1, r1, #0x800
    swpb r0, r0, [r1]
    ldrb r2, [r3, #0x0]
    and r0, r2, #0x7
    add r0, r0, r0, lsl #0x1
    add r0, r9, r0
    add r0, r0, #0x1000
    add r0, r0, #0x4a
    add r1, r0, #0x800
    swpb r0, r2, [r1]
    b L_020096c8
L_02009628:
    add r2, sp, #0x0
    add r0, r1, #0xac
    str r3, [r2, #0x0]
    str r3, [r2, #0x8]
    add r1, r9, #0xac
    str r3, [r2, #0x4]
    bl VEC_Subtract
    ldr r0, [sp, #0x0]
    ldr r1, [sp, #0x8]
    bl FX_Atan2Idx
    ldr r1, =data_0206e670
    mov r2, #0x5
    ldrb r4, [r1, #0x0]
    mov r3, r0, asr #0x8
    ldr r0, =data_0206a320
    and r4, r4, #0x7
    add r4, r4, r4, lsl #0x1
    add r4, r9, r4
    add r4, r4, #0x1000
    add r4, r4, #0x48
    add r4, r4, #0x800
    swpb r2, r2, [r4]
    ldrb r4, [r1, #0x0]
    mov r2, #0x28
    and r4, r4, #0x7
    add r4, r4, r4, lsl #0x1
    add r4, r9, r4
    add r4, r4, #0x1000
    add r4, r4, #0x49
    add r4, r4, #0x800
    swpb r3, r3, [r4]
    ldrb r4, [r1, #0x0]
    and r1, r4, #0x7
    add r1, r1, r1, lsl #0x1
    add r1, r9, r1
    add r1, r1, #0x1000
    add r1, r1, #0x4a
    add r3, r1, #0x800
    swpb r1, r4, [r3]
    str r2, [r0, #0x4]
L_020096c8:
    add r0, r9, #0x64
    add r11, r11, #0x1
    cmp r11, #0xf
    add r9, r0, #0x1800
    blo L_020092f0
    add sp, sp, #0x18
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
