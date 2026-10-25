#include "m2c.h"

void func_0203b96c(void);
void func_0203c24c(void);
extern char data_02087410[];
extern char data_02087454[];
extern char data_02087455[];
extern char data_02087456[];
extern char data_02087458[];
extern char data_0208745c[];
extern char data_02087460[];
extern char data_02087464[];
extern char data_02087468[];
extern char data_0208746c[];
// clang-format off
asm s32 func_0201c54c(s32 arg0) {
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    mov r4, r0
    mov r0, #0x0
    bl func_0203b96c
    mov r7, #0x0
    mov r6, #0x100
    mov r5, #0xc0
@L_0201c568:
    add r0, r7, r4, lsl #0x2
    mov r0, r0, lsl #0x10
    mov r1, r6
    mov r2, r5
    mov r0, r0, lsr #0x10
    bl func_0203c24c
    add r0, r7, #0x1
    and r7, r0, #0xff
    cmp r7, #0x4
    blo @L_0201c568
    ldr r2, =data_02087410
    ldrb r0, [r2, #0x1]
    add r1, r2, #0x1
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, =data_0208746c
    ldrsb r0, [r2, #0x0]
    cmp r0, r4
    mvneq r0, #0x0
    swpeqb r0, r0, [r2]
    mov r0, #0x44
    mul r2, r4, r0
    ldrb r0, [r1, r2]
    add r1, r1, r2
    cmp r0, #0x0
    beq @L_0201c5e0
    ldr r0, =data_02087410
    mov r4, #0x0
    add r3, r0, #0x3
    swpb r0, r4, [r3]
@L_0201c5e0:
    ldr r0, =data_02087454
    ldr r4, =data_02087455
    add r3, r0, r2
    mvn r0, #0x0
    swpb r0, r0, [r3]
    add r4, r4, r2
    mov r0, #0x0
    ldr ip, =data_02087458
    swpb r3, r0, [r4]
    ldr r3, =data_02087456
    add r4, ip, r2
    strh r0, [r3, r2]
    swpb r3, r0, [r4]
    ldr r3, =data_02087410
    ldr r4, =data_0208745c
    ldr lr, [r3, #0x3c]
    ldr ip, =data_02087460
    str lr, [r4, r2]
    ldr r3, [r3, #0x40]
    ldr r4, =data_02087464
    str r3, [ip, r2]
    ldr r3, =data_02087468
    str r0, [r4, r2]
    str r0, [r3, r2]
    swpb r0, r0, [r1]
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
