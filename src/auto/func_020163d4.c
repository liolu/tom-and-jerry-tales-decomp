#include "m2c.h"

void func_02016510(void);
extern char data_0206e6d4[];
extern char data_0206e6ec[];
extern char data_02087090[];
extern char data_02087098[];
extern char data_0208709c[];
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020163d4(void) {
    stmdb sp!, {r4, lr}
    ldr r0, =data_0206e6d4
    ldr r3, =data_02087090
    ldrb r0, [r0, #0x0]
    mvn r2, #0x0
    swpb r1, r0, [r3]
    ldrsb r1, [r3, #0x0]
    cmp r1, r2
    moveq r1, #0x3
    swpeqb r1, r1, [r3]
    ldr r1, =data_02087090
    ldrsb r3, [r1, #0x0]
    cmp r3, #0x0
    beq L_02016420
    cmp r3, #0x1
    beq L_02016438
    cmp r3, #0x2
    beq L_02016450
    b L_02016464
L_02016420:
    mov r1, #0x50
    mul r2, r3, r1
    ldr r3, =0x54414a01
    ldr r1, =data_02087098
    str r3, [r1, r2]
    b L_02016464
L_02016438:
    mov r1, #0x50
    mul r2, r3, r1
    ldr r3, =0x54414a02
    ldr r1, =data_02087098
    str r3, [r1, r2]
    b L_02016464
L_02016450:
    mov r1, #0x50
    mul r2, r3, r1
    ldr r3, =0x54414a03
    ldr r1, =data_02087098
    str r3, [r1, r2]
L_02016464:
    ldr r2, =data_0208709c
    mov r1, #0x50
    mla lr, r0, r1, r2
    ldr r4, =data_0206e6ec
    mov ip, #0x4
L_02016478:
    ldmia r4!, {r0, r1, r2, r3}
    stmia lr!, {r0, r1, r2, r3}
    subs ip, ip, #0x1
    bne L_02016478
    ldmia r4, {r0, r1, r2}
    stmia lr, {r0, r1, r2}
    bl func_02016510
    ldmia sp!, {r4, pc}
}
// clang-format on
