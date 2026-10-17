#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02031684();
extern char data_0208876c[];
extern char data_02088770[];
extern char data_0208a360[];
extern char data_0208a362[];
extern char data_0208a364[];
extern char data_0208a366[];
extern char data_0208a368[];
extern char data_0208a37c[];
extern char data_0208a380[];
extern char data_0208a384[];
extern char data_0208a388[];
extern char data_0208a38c[];
extern char data_0208a38f[];
extern char data_0208a391[];
extern char data_0208a392[];
extern char data_0208a394[];
extern char data_0208a396[];
extern char data_0208a398[];
extern char data_0208a39c[];
extern char data_0208a3a0[];
extern char data_0208a3a4[];
extern char data_0208a3a8[];
extern char data_0208a3ac[];
extern char data_0208a3b0[];
// clang-format off
asm void func_02032914(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r1, #0x68
    mul r6, r0, r1
    ldr r1, =data_0208a3b0
    ldrb r0, [r1, r6]
    add r5, r1, r6
    cmp r0, #0x0
    beq L_02032b20
    ldr r0, =data_0208a360
    ldr r2, =data_0208a364
    add r4, r0, r6
    ldrb r1, [r4, #0x50]
    ldrh r0, [r2, r6]
    mov r1, r1, lsl #0x1f
    movs r1, r1, lsr #0x1f
    beq L_02032988
    ldr r1, =data_0208a391
    ldr r2, =data_0208a392
    ldrb r1, [r1, r6]
    ldrh r3, [r2, r6]
    cmp r1, #0x0
    ldr r1, =data_0208a394
    movne r7, #0x1
    ldrh r2, [r1, r6]
    moveq r7, #0x0
    ldr r1, =data_0208a39c
    orr r2, r3, r2, lsl #0x10
    orr r2, r2, r7, lsl #0xf
    str r2, [r1, r6]
L_02032988:
    ldrb r1, [r4, #0x50]
    mov r1, r1, lsl #0x1e
    movs r1, r1, lsr #0x1f
    beq L_020329cc
    ldr r1, =data_0208a38f
    ldr r2, =data_0208a396
    ldrb r1, [r1, r6]
    ldrh r3, [r2, r6]
    cmp r1, #0x0
    ldr r1, =data_0208a398
    movne r7, #0x1
    ldrh r2, [r1, r6]
    moveq r7, #0x0
    ldr r1, =data_0208a3a0
    orr r2, r3, r2, lsl #0x10
    orr r2, r2, r7, lsl #0xf
    str r2, [r1, r6]
L_020329cc:
    ldrb r1, [r4, #0x50]
    mov r1, r1, lsl #0x1d
    movs r1, r1, lsr #0x1f
    beq L_02032a50
    mov r1, #0x2c
    mul r9, r0, r1
    ldr r2, =data_0208876c
    ldr r1, =data_02088770
    ldr ip, [r2, r9]
    ldr r2, =data_0208a368
    mov r3, ip, lsl #0x18
    mov r10, r3, asr #0x18
    mov r3, ip, lsl #0x8
    ldr r7, =data_0208a37c
    ldr r8, =data_0208a380
    mov lr, ip, lsl #0x10
    ldr r9, [r1, r9]
    mov r1, r10, lsl #0x1a
    ldr r2, [r2, r6]
    orr r1, r1, r9, lsr #0x3
    mov r3, r3, asr #0x18
    orr r1, r1, r2, lsl #0x1e
    mov r2, ip, asr #0x18
    orr r1, r1, r3, lsl #0x14
    ldr r3, [r7, r6]
    orr r1, r1, r2, lsl #0x17
    ldr r2, [r8, r6]
    orr r1, r1, r3, lsl #0x10
    mov r3, lr, asr #0x18
    orr r2, r1, r2, lsl #0x12
    ldr r1, =data_0208a3a4
    orr r2, r2, r3, lsl #0x1d
    str r2, [r1, r6]
L_02032a50:
    ldrb r1, [r4, #0x50]
    mov r1, r1, lsl #0x1c
    movs r1, r1, lsr #0x1f
    beq L_02032ab4
    mov r1, #0x2c
    mul r7, r0, r1
    ldr r8, =data_0208876c
    ldr r1, [r8, r7]
    mov r1, r1, lsl #0x18
    mov r1, r1, asr #0x18
    cmp r1, #0x7
    beq L_02032ab4
    ldr r1, =data_0208a38c
    ldrh r1, [r1, r6]
    bl func_02031684
    ldr r1, [r8, r7]
    mov r1, r1, lsl #0x18
    mov r1, r1, asr #0x18
    cmp r1, #0x2
    moveq r1, #0x1
    movne r1, #0x0
    rsb r1, r1, #0x4
    mov r1, r0, lsr r1
    ldr r0, =data_0208a3a8
    str r1, [r0, r6]
L_02032ab4:
    ldrb r0, [r4, #0x50]
    mov r0, r0, lsl #0x1b
    movs r0, r0, lsr #0x1f
    beq L_02032b18
    ldr r7, =data_0208a360
    ldr r0, =data_0208a384
    add r1, r7, r6
    ldrb r2, [r1, #0x2e]
    ldr r3, =data_0208a366
    ldr r1, [r0, r6]
    ldr r4, =data_0208a388
    ldr r0, =data_0208a362
    ldrh r3, [r3, r6]
    mov r2, r2, lsl #0x1c
    mov r1, r1, lsl #0x4
    orr r1, r1, r2, lsr #0x1c
    ldrh r7, [r7, r6]
    ldr r2, [r4, r6]
    orr r1, r1, r3, lsl #0x6
    orr r1, r2, r1
    ldrh r2, [r0, r6]
    orr r1, r1, r7, lsl #0x18
    ldr r0, =data_0208a3ac
    orr r1, r1, r2, lsl #0x10
    str r1, [r0, r6]
L_02032b18:
    mov r0, #0x0
    swpb r0, r0, [r5]
L_02032b20:
    ldr r0, =data_0208a39c
    ldr r2, =0x40004c0
    ldr r1, [r0, r6]
    ldr r0, =data_0208a3a0
    str r1, [r2, #0x0]
    ldr r1, [r0, r6]
    ldr r0, =data_0208a3a4
    str r1, [r2, #0x4]
    ldr r1, [r0, r6]
    ldr r0, =data_0208a3a8
    str r1, [r2, #-0x18]
    ldr r1, [r0, r6]
    ldr r0, =data_0208a3ac
    str r1, [r2, #-0x14]
    ldr r0, [r0, r6]
    str r0, [r2, #-0x1c]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
