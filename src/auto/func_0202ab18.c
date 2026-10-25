#include "m2c.h"
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0202a930();
extern void func_0202aa54();
extern void func_0202af28();
extern void func_0203d0d8();
extern void func_0203d878();
extern char data_0206ca70[];
extern char data_02087ef4[];
extern char data_020b8b44[];
// clang-format off
asm void func_0202ab18(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0xc
    ldr r1, =data_0206ca70
    mov r4, r0
    ldrh r0, [r1, #0x0]
    cmp r0, #0x0
    beq L_0202ab84
    ldr r0, =data_02087ef4
    ldr r3, =data_02087ef4+0x2
    ldrh r6, [r0, #0x6]
    strh r6, [r0, #0xe]
    ldrh r1, [r0, #0x8]
    ldr r5, [r0, #0x6c]
    ldr r2, [r0, #0x54]
    add r0, r5, r6
    and r1, r1, #0xff
    bl func_0202aa54
    ldr r0, =data_02087ef4
    ldr r1, =data_0206ca70
    mov r2, #0x0
    strh r2, [r1, #0x0]
    ldrh r3, [r0, #0x6]
    ldrb r2, [r0, #0x2]
    add r2, r3, r2
    strh r2, [r0, #0x6]
    ldr r0, [r0, #0x64]
    str r0, [r1, #0x4]
L_0202ab84:
    bl func_0202a930
    cmp r0, #0x0
    ldrne r0, =data_02087ef4
    ldrneh r0, [r0, #0xe]
    cmpne r0, #0x0
    bne L_0202aba4
    cmp r4, #0x0
    bne L_0202adb8
L_0202aba4:
    ldr r10, =data_02087ef4
    ldrb r6, [r10, #0x0]
    cmp r6, #0x0
    beq L_0202ac18
    ldr r0, =data_0206ca70
    mov r1, #0x1
    strh r1, [r0, #0x0]
    ldr r2, [r10, #0x88]
    ldr r1, =data_020b8b44
    mov r0, #0x28
    mla r0, r2, r0, r1
    mov r1, #0x0
    str r1, [sp, #0x0]
    str r1, [sp, #0x4]
    str r0, [sp, #0x8]
    ldr r0, [r10, #0x64]
    ldr r1, [r10, #0x44]
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    ldrh r2, [r10, #0x8]
    ldrh r3, [r10, #0x16]
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r1, r10
    mov r0, #0x0
    strh r0, [r1, #0x12]
    swpb r0, r0, [r1]
    b L_0202aef8
L_0202ac18:
    cmp r6, #0x0
    ldrb r7, [r10, #0x3]
    bne L_0202aef8
    mov r4, #0x0
    ldr r9, =data_0206ca70
    add r8, r10, #0x3
    mov r5, #0x1
    mov r11, r4
L_0202ac38:
    ldr r0, [r10, #0x6c]
    ldrh r2, [r10, #0xe]
    ldrb r1, [r0, r2]
    cmp r1, #0xa
    bne L_0202ac6c
    add r1, r2, #0x1
    strh r1, [r10, #0xe]
    ldrh r1, [r10, #0x12]
    add r1, r1, #0x1
    strh r1, [r10, #0x12]
    ldrh r1, [r10, #0xe]
    strh r1, [r10, #0x6]
    strh r5, [r9, #0x0]
L_0202ac6c:
    ldrh r1, [r9, #0x0]
    cmp r1, #0x0
    beq L_0202acb4
    ldrh r1, [r10, #0x6]
    ldr r3, =data_02087ef4+0x2
    strh r1, [r10, #0xe]
    add r0, r0, r1
    ldrh r1, [r10, #0x8]
    ldr r2, [r10, #0x54]
    and r1, r1, #0xff
    bl func_0202aa54
    strh r4, [r9, #0x0]
    ldrh r1, [r10, #0x6]
    ldrb r0, [r10, #0x2]
    add r0, r1, r0
    strh r0, [r10, #0x6]
    ldr r0, [r10, #0x64]
    str r0, [r9, #0x4]
L_0202acb4:
    ldrh r2, [r10, #0x6]
    ldrh ip, [r10, #0xe]
    cmp ip, r2
    bhs L_0202ad7c
    ldr r1, [r10, #0x6c]
    ldrb r0, [r1, ip]
    cmp r0, #0xd
    bne L_0202ace4
    str r11, [r10, #0x50]
    strh r2, [r10, #0xe]
    mov r7, #0x1
    b L_0202ada4
L_0202ace4:
    ldr r0, [r10, #0x88]
    ldr r3, [r10, #0x54]
    ldr r2, =data_020b8b44
    mov lr, #0x28
    mla lr, r0, lr, r2
    ldr r2, [r3, #0x14]
    add r0, ip, #0x1
    ldrb r2, [r3, r2]
    strh r0, [r10, #0xe]
    add r0, r2, #0x6
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    ldrb r0, [r10, #0x5]
    stmia sp, {r0, lr}
    ldrb r0, [r1, ip]
    ldr r1, [r9, #0x4]
    ldrh ip, [r10, #0x12]
    ldr lr, [r10, #0x44]
    sub r0, r0, #0x1f
    mla r2, ip, r2, lr
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    bl func_0203d878
    ldr r1, [r9, #0x4]
    add r0, r1, r0
    str r0, [r9, #0x4]
    mov r0, #0x0
    str r0, [r10, #0x50]
    ldrh r0, [r10, #0xe]
    ldr r1, [r10, #0x6c]
    ldrb r0, [r1, r0]
    cmp r0, #0x0
    moveq r7, #0x1
    b L_0202ada4
L_0202ad7c:
    ldrh r0, [r10, #0xa]
    ldrh r1, [r10, #0x12]
    sub r0, r0, #0x1
    cmp r1, r0
    movge r6, #0x1
    bge L_0202ada4
    mov r0, #0x1
    add r1, r1, #0x1
    strh r0, [r9, #0x0]
    strh r1, [r10, #0x12]
L_0202ada4:
    swpb r0, r6, [r10]
    cmp r6, #0x0
    swpb r0, r7, [r8]
    beq L_0202ac38
    b L_0202aef8
L_0202adb8:
    ldr r4, =data_02087ef4
    ldr r0, [r4, #0x50]
    add r0, r0, #0x1
    str r0, [r4, #0x50]
    cmp r0, #0x1
    ble L_0202aef8
    ldrb r0, [r4, #0x0]
    cmp r0, #0x0
    bne L_0202aef8
    ldrh r3, [r4, #0x6]
    ldrh r1, [r4, #0xe]
    cmp r1, r3
    bhs L_0202aec8
    ldr r0, [r4, #0x6c]
    ldrb r2, [r0, r1]
    cmp r2, #0xd
    bne L_0202ae10
    add r1, r4, #0x3
    mov r0, #0x1
    swpb r0, r0, [r1]
    strh r3, [r4, #0xe]
    b L_0202aea0
L_0202ae10:
    ldr r3, [r4, #0x54]
    ldr r8, [r4, #0x88]
    ldr r2, [r3, #0x14]
    ldr r5, =data_020b8b44
    ldrb r7, [r3, r2]
    mov r2, #0x28
    add r6, r1, #0x1
    strh r6, [r4, #0xe]
    ldrb r6, [r4, #0x5]
    mla r2, r8, r2, r5
    str r6, [sp, #0x0]
    str r2, [sp, #0x4]
    add r2, r7, #0x6
    mov r2, r2, lsl #0x10
    ldrb r6, [r0, r1]
    ldr r0, =data_0206ca70
    ldrh r5, [r4, #0x12]
    ldr r1, [r0, #0x4]
    sub r0, r6, #0x1f
    mov r0, r0, lsl #0x10
    mov r1, r1, lsl #0x10
    ldr r4, [r4, #0x44]
    mov r2, r2, lsr #0x10
    mla r2, r5, r2, r4
    mov r2, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, r1, lsr #0x10
    mov r2, r2, lsr #0x10
    bl func_0203d878
    ldr r2, =data_0206ca70
    ldr r1, =data_02087ef4
    ldr r4, [r2, #0x4]
    mov r3, #0x0
    add r0, r4, r0
    str r0, [r2, #0x4]
    str r3, [r1, #0x50]
L_0202aea0:
    ldr r0, =data_02087ef4
    ldrh r1, [r0, #0xe]
    ldr r2, [r0, #0x6c]
    ldrb r1, [r2, r1]
    cmp r1, #0x0
    bne L_0202aef8
    add r1, r0, #0x3
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_0202aef8
L_0202aec8:
    ldrh r0, [r4, #0xa]
    ldrh r2, [r4, #0x12]
    sub r0, r0, #0x1
    cmp r2, r0
    movge r0, #0x1
    swpgeb r0, r0, [r4]
    bge L_0202aef8
    ldr r0, =data_0206ca70
    mov r1, #0x1
    strh r1, [r0, #0x0]
    add r0, r2, #0x1
    strh r0, [r4, #0x12]
L_0202aef8:
    ldr r0, =data_02087ef4
    ldrb r0, [r0, #0x3]
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    bl func_0202af28
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
