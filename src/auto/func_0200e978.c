#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201490c();
extern void func_02014cf0();
extern void func_02030ed4();
extern void func_02030ee0();
extern void func_02040570();
extern void func_02051a48();
extern void func_0205918c();
extern void func_020591fc();
extern void func_020592b0();
extern char data_0206a8cc[];
extern char data_0206a914[];
extern char data_0206a918[];
extern char data_0206a91c[];
extern char data_0206a924[];
extern char data_0206a928[];
extern char data_0206a930[];
extern char data_0206a938[];
extern char data_0206a93c[];
extern char data_0206a944[];
extern char data_0206a948[];
extern char data_0206a950[];
extern char data_0206a954[];
extern char data_0206a95c[];
extern char data_0206a960[];
extern char data_0206a968[];
extern char data_0206a96c[];
extern char data_0206a974[];
extern char data_0206a97c[];
extern char data_0206a988[];
extern char data_0206a98c[];
extern char data_020880c0[];
// clang-format off
asm void func_0200e978(void) {
    stmfd sp!, {r3, r4, r5, r6, r7, lr}
    mov r5, r2
    mov r7, r0
    add r0, sp, #0x0
    mov r1, r5
    bl func_02030ed4
    ldr r1, =data_0206a914
    mov r0, r7
    bl func_020591fc
    mov r6, r0
    mov r1, #0x0
    swpb r1, r1, [r6]
    mov r0, #0x2
    bl func_02014cf0
    mov r4, r0
    mov r1, r7
    add r0, r4, #0x8
    bl func_0205918c
    ldr r1, =data_0206a918
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200ea74
    ldr r1, =data_0206a91c
    mov r0, r7
    mov r2, r5
    bl func_02040570
    mov r6, r0
    mov r1, r4
    mov r0, #0x2
    bl func_0201490c
    ldrh r2, [r6, #0x2c]
    add r0, r4, #0x40
    add r1, r6, #0xc
    str r2, [r4, #0x4]
    bl func_0205918c
    ldrh r0, [r6, #0x2e]
    add r1, r4, #0x3c
    strh r0, [r4, #0x60]
    ldrb r2, [r4, #0x3c]
    ldrb r0, [r6, #0x30]
    bic r2, r2, #0x8
    mov r0, r0, lsl #0x1f
    orr r0, r2, r0, lsr #0x1c
    swpb r0, r0, [r1]
    ldrh r0, [r6, #0x2c]
    cmp r0, #0x0
    beq L_0200ea44
    cmp r0, #0x1
    beq L_0200ea58
    b L_0200ea6c
L_0200ea44:
    ldr r0, [r6, #0x8]
    str r0, [r4, #0x30]
    ldr r0, [r6, #0x4]
    str r0, [r4, #0x28]
    b L_0200eefc
L_0200ea58:
    ldrh r0, [r6, #0x2]
    strh r0, [r4, #0x30]
    ldrh r0, [r6, #0x0]
    strh r0, [r4, #0x28]
    b L_0200eefc
L_0200ea6c:
    bl func_02051a48
    b L_0200eefc
L_0200ea74:
    ldr r1, =data_0206a924
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200eb38
    ldr r1, =data_0206a928
    mov r0, r7
    mov r2, r5
    bl func_02040570
    mov r6, r0
    mov r1, r4
    mov r0, #0x6
    bl func_0201490c
    ldrh r0, [r6, #0x0]
    add r1, r4, #0x4e
    add r2, r4, #0x4f
    str r0, [r4, #0x4]
    ldr r0, [r6, #0x10]
    str r0, [r4, #0x40]
    ldrb r0, [r6, #0x18]
    swpb r0, r0, [r1]
    ldrh r0, [r6, #0x2]
    strh r0, [r4, #0x4c]
    ldrb r1, [r4, #0x4f]
    ldrb r0, [r6, #0x19]
    bic r1, r1, #0x1
    and r0, r0, #0x1
    orr r0, r1, r0
    swpb r0, r0, [r2]
    ldr r0, [r6, #0x14]
    str r0, [r4, #0x50]
    ldrh r0, [r6, #0x0]
    cmp r0, #0x0
    beq L_0200eb08
    cmp r0, #0x1
    beq L_0200eb1c
    b L_0200eb30
L_0200eb08:
    ldr r0, [r6, #0x8]
    str r0, [r4, #0x28]
    ldr r0, [r6, #0xc]
    str r0, [r4, #0x30]
    b L_0200eefc
L_0200eb1c:
    ldrh r0, [r6, #0x4]
    strh r0, [r4, #0x28]
    ldrh r0, [r6, #0x6]
    strh r0, [r4, #0x30]
    b L_0200eefc
L_0200eb30:
    bl func_02051a48
    b L_0200eefc
L_0200eb38:
    ldr r1, =data_0206a8cc
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200ebb8
    ldr r1, =data_0206a930
    mov r0, r7
    mov r2, r5
    bl func_02040570
    mov r6, r0
    mov r1, r4
    mov r0, #0x3
    bl func_0201490c
    ldrh r0, [r6, #0x0]
    add r1, r4, #0x40
    str r0, [r4, #0x4]
    ldrh r0, [r6, #0x8]
    swpb r0, r0, [r1]
    ldrh r0, [r6, #0x0]
    cmp r0, #0x0
    beq L_0200eb98
    cmp r0, #0x1
    beq L_0200eba4
    b L_0200ebb0
L_0200eb98:
    ldr r0, [r6, #0x4]
    str r0, [r4, #0x30]
    b L_0200eefc
L_0200eba4:
    ldrh r0, [r6, #0x2]
    strh r0, [r4, #0x30]
    b L_0200eefc
L_0200ebb0:
    bl func_02051a48
    b L_0200eefc
L_0200ebb8:
    ldr r1, =data_0206a938
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200ec14
    ldr r1, =data_0206a93c
    mov r0, r7
    mov r2, r5
    bl func_02040570
    mov r6, r0
    mov r1, r4
    mov r0, #0xc
    bl func_0201490c
    mov r3, #0x0
L_0200ebf0:
    add r1, r4, r3
    add r0, r3, #0x1
    ldr r2, [r6, r3, lsl #0x2]
    add r1, r1, #0x40
    and r3, r0, #0xff
    cmp r3, #0x6
    swpb r0, r2, [r1]
    blo L_0200ebf0
    b L_0200eefc
L_0200ec14:
    ldr r1, =data_0206a944
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200ec98
    ldr r1, =data_0206a948
    mov r0, r7
    mov r2, r5
    bl func_02040570
    mov r6, r0
    mov r1, r4
    mov r0, #0xf
    bl func_0201490c
    ldr r0, [r6, #0x0]
    add r1, r4, #0x3c
    str r0, [r4, #0x30]
    ldr r0, [r6, #0x4]
    add r2, r4, #0x50
    str r0, [r4, #0x28]
    ldrb r0, [r4, #0x3c]
    bic r0, r0, #0x8
    swpb r0, r0, [r1]
    ldr r0, [r6, #0x8]
    str r0, [r4, #0x40]
    ldrb r0, [r6, #0xc]
    str r0, [r4, #0x44]
    ldrb r0, [r6, #0xd]
    str r0, [r4, #0x48]
    ldrb r0, [r6, #0xe]
    str r0, [r4, #0x4c]
    ldrb r0, [r6, #0xf]
    swpb r0, r0, [r2]
    b L_0200eefc
L_0200ec98:
    ldr r1, =data_0206a950
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200ed30
    ldr r1, =data_0206a954
    mov r0, r7
    mov r2, r5
    bl func_02040570
    mov r6, r0
    mov r1, r4
    mov r0, #0x4
    bl func_0201490c
    ldrh r1, [r6, #0x10]
    ldr r0, =data_020880c0
    str r1, [r4, #0x4]
    ldr r1, [r6, #0xc]
    str r1, [r4, #0x44]
    ldrsh r0, [r0, #0x6]
    str r0, [r4, #0x40]
    ldrh r0, [r6, #0x10]
    cmp r0, #0x0
    beq L_0200ed00
    cmp r0, #0x1
    beq L_0200ed14
    b L_0200ed28
L_0200ed00:
    ldr r0, [r6, #0x8]
    str r0, [r4, #0x28]
    ldr r0, [r6, #0x4]
    str r0, [r4, #0x30]
    b L_0200eefc
L_0200ed14:
    ldrh r0, [r6, #0x2]
    strh r0, [r4, #0x28]
    ldrh r0, [r6, #0x0]
    strh r0, [r4, #0x30]
    b L_0200eefc
L_0200ed28:
    bl func_02051a48
    b L_0200eefc
L_0200ed30:
    ldr r1, =data_0206a95c
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200eda4
    ldr r1, =data_0206a960
    mov r0, r7
    mov r2, r5
    bl func_02040570
    mov r6, r0
    mov r1, r4
    mov r0, #0xb
    bl func_0201490c
    ldrb r0, [r6, #0x8]
    add r1, r4, #0x40
    add r2, r4, #0x4c
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    ldr r0, [r6, #0x0]
    str r0, [r4, #0x44]
    ldr r0, [r6, #0x4]
    str r0, [r4, #0x48]
    ldrb r1, [r4, #0x4c]
    ldrb r0, [r6, #0x9]
    bic r1, r1, #0x1
    and r0, r0, #0x1
    orr r0, r1, r0
    swpb r0, r0, [r2]
    b L_0200eefc
L_0200eda4:
    ldr r1, =data_0206a968
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200ede8
    ldr r1, =data_0206a96c
    mov r0, r7
    mov r2, r5
    bl func_02040570
    mov r6, r0
    mov r1, r4
    mov r0, #0x5
    bl func_0201490c
    ldrsb r0, [r6, #0x0]
    add r1, r4, #0x40
    swpb r0, r0, [r1]
    b L_0200eefc
L_0200ede8:
    ldr r1, =data_0206a974
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200ee78
    ldr r1, =data_0206a97c
    mov r0, r7
    mov r2, r5
    bl func_02040570
    mov r6, r0
    mov r1, r4
    mov r0, #0x8
    bl func_0201490c
    ldrh r0, [r6, #0xe]
    add r1, r4, #0x40
    str r0, [r4, #0x4]
    ldrh r0, [r6, #0xc]
    swpb r0, r0, [r1]
    ldrh r0, [r6, #0xe]
    cmp r0, #0x0
    beq L_0200ee48
    cmp r0, #0x1
    beq L_0200ee5c
    b L_0200ee70
L_0200ee48:
    ldr r0, [r6, #0x8]
    str r0, [r4, #0x28]
    ldr r0, [r6, #0x4]
    str r0, [r4, #0x30]
    b L_0200eefc
L_0200ee5c:
    ldrh r0, [r6, #0x2]
    strh r0, [r4, #0x28]
    ldrh r0, [r6, #0x0]
    strh r0, [r4, #0x30]
    b L_0200eefc
L_0200ee70:
    bl func_02051a48
    b L_0200eefc
L_0200ee78:
    ldr r1, =data_0206a988
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200eebc
    mov r1, r4
    mov r0, #0x7
    bl func_0201490c
    mov r0, #0x14
    strh r0, [r4, #0x28]
    mov r0, #0x1
    str r0, [r4, #0x4]
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    bic r0, r0, #0x8
    swpb r0, r0, [r1]
    b L_0200eefc
L_0200eebc:
    ldr r1, =data_0206a98c
    add r0, r6, #0x1
    bl func_020592b0
    cmp r0, #0x0
    bne L_0200eef8
    mov r1, r4
    mov r0, #0x9
    bl func_0201490c
    mov r0, #0x14
    strh r0, [r4, #0x28]
    mov r0, #0x1
    str r0, [r4, #0x4]
    mov r0, #0x32
    strh r0, [r4, #0x30]
    b L_0200eefc
L_0200eef8:
    bl func_02051a48
L_0200eefc:
    add r0, sp, #0x0
    mov r1, r5
    bl func_02030ee0
    mov r0, r4
    ldmfd sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
