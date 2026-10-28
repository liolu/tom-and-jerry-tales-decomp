#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02007450();
extern void func_02013cc4();
extern void func_02016018();
extern void func_0203b96c();
extern void func_0203c24c();
extern void func_0203feb4();
extern void func_020401e8();
extern void OS_SetTick();
extern char data_0206ad34[];
extern char data_0206e6d4[];
extern char data_0206e798[];
extern char data_02086fe4[];
extern char data_0208703c[];
// clang-format off
asm void func_02013f10(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r4, r0
    ldrb r1, [r4, #0x3c]
    mov r2, r1, lsl #0x1e
    movs r2, r2, lsr #0x1f
    ldmnefd sp!, {r4, r5, r6, pc}
    mov r0, r1, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_02014004
    ldr r0, =data_0206ad34
    bl func_0203feb4
    bl func_020401e8
    ldr r2, [r0, #0x24]
    ldr r5, =data_0206e798
    bic r2, r2, #0x2
    str r2, [r0, #0x24]
    ldr r2, =data_02086fe4
    ldr r1, =data_0208703c
    mov r0, #0x0
    str r0, [r1, #0x8]
    ldmia r2, {r2, r3}
    stmia r5, {r2, r3}
    sub r0, r0, #0x1
    add r1, r1, #0x1
    swpb r0, r0, [r1]
    mov r0, #0x7
    bl func_02007450
    ldrb r0, [r4, #0x3c]
    ldr r2, =data_0206e6d4
    add r1, r4, #0x3c
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    add r2, r2, #0xa8
    mov r0, #0x0
    swpb r1, r0, [r2]
    ldr r3, =data_0208703c
    mov r1, #0xa
    add r2, r3, #0x2
    swpb r1, r1, [r2]
    mov r1, #0x10
    swpb r1, r1, [r3]
    bl func_0203b96c
    mov r6, #0x0
    mov r5, #0x7f
L_02013fc4:
    add r0, r6, #0xc
    mov r0, r0, lsl #0x10
    mov r1, r6, lsl #0x16
    mov r2, r5
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    bl func_0203c24c
    add r0, r6, #0x1
    and r6, r0, #0xff
    cmp r6, #0x4
    blo L_02013fc4
    ldr r0, =data_0208703c
    mov r1, #0xef
    ldrb r0, [r0, #0x0]
    mov r2, #0x9f
    bl func_0203c24c
L_02014004:
    ldr r0, =data_0208703c
    ldrb r1, [r0, #0x2]
    cmp r1, #0x0
    ldreq r0, [r0, #0x8]
    cmpeq r0, #0x0
    bne L_02014088
    mov r0, #0x0
    bl func_0203b96c
    ldr r2, =data_0208703c
    mov r0, #0xa
    add r1, r2, #0x2
    swpb r0, r0, [r1]
    mov r1, #0x0
    ldrb r0, [r2, #0x0]
    mov r2, #0xc0
    cmp r0, #0x10
    bne L_02014068
    bl func_0203c24c
    ldr ip, =data_0208703c
    mov r0, #0x11
    swpb r3, r0, [ip]
    mov r1, #0xef
    mov r2, #0x9f
    bl func_0203c24c
    b L_0201409c
L_02014068:
    bl func_0203c24c
    ldr ip, =data_0208703c
    mov r0, #0x10
    swpb r3, r0, [ip]
    mov r1, #0xef
    mov r2, #0x9f
    bl func_0203c24c
    b L_0201409c
L_02014088:
    ldr r0, =data_0208703c
    ldrb r2, [r0, #0x2]
    add r1, r0, #0x2
    sub r0, r2, #0x1
    swpb r0, r0, [r1]
L_0201409c:
    ldr r1, =data_0206e6d4
    ldr r0, [r1, #0xc4]
    ldr r1, [r1, #0xc8]
    bl OS_SetTick
    mov r0, r4
    bl func_02013cc4
    ldrh r0, [r4, #0x34]
    bl func_02016018
    ldr r1, =data_0206e6d4
    mov r3, #0x0
    add r2, r1, #0x8a
    swpb r1, r3, [r2]
    ldr r1, =data_0208703c
    and r2, r0, #0xff
    ldr r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02014108
    add r0, r2, #0xfe
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_02014108
    ldrb r1, [r4, #0x3c]
    add r2, r4, #0x3c
    mov r0, #0x2
    orr r1, r1, #0x2
    swpb r1, r1, [r2]
    ldmfd sp!, {r4, r5, r6, pc}
L_02014108:
    mov r0, #0x1
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
