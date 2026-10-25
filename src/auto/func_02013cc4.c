#include "m2c.h"

extern char data_020692ec[];
extern char data_0206e680[];
extern char data_0206e6d4[];
extern char data_0208703c[];
extern char data_02087f78[];
extern char data_020b8b44[];
void func_0202ab18(void);
void func_0202af8c(void);
void func_020306fc(void);
void func_02030794(void);
void func_02030878(void);
void func_0203b96c(void);
void func_0203c24c(void);
void func_0203cd5c(void);
void func_0203d0d8(void);
void func_0204221c(void);
// clang-format off
asm void func_02013cc4(void) {
    stmdb sp!, {r4, lr}
    sub sp, sp, #0x20
    ldr r1, =data_0208703c
    mov r4, r0
    ldr r0, [r1, #0x8]
    cmp r0, #0x0
    addne sp, sp, #0x20
    ldmneia sp!, {r4, pc}
    ldrsb r1, [r1, #0x1]
    mvn r0, #0x0
    cmp r1, r0
    bne L_02013d24
    ldr r0, =data_020b8b44
    ldr r0, [r0, #0x0]
    bl func_0203cd5c
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne L_02013d24
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0xb4]
    add r1, r0, #0xb4
    add r0, r2, #0x1
    swpb r0, r0, [r1]
L_02013d24:
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    ldreq r1, =data_0206e6d4
    ldreqb r0, [r1, #0xb4]
    cmpeq r0, #0x6
    bne L_02013d60
    ldr r0, =data_0208703c
    ldrsb r0, [r0, #0x1]
    add r0, r0, #0x1
    add r0, r4, r0
    ldrb r0, [r0, #0x40]
    cmp r0, #0x0
    moveq r0, #0x1
    streq r0, [r1, #0xb8]
L_02013d60:
    ldr r1, =data_0208703c
    mvn r0, #0x0
    ldrsb r1, [r1, #0x1]
    cmp r1, r0
    beq L_02013ddc
    add r0, r4, r1
    ldrb r0, [r0, #0x40]
    cmp r0, #0x0
    ldreq r0, =data_02087f78
    ldreq r0, [r0, #0x0]
    cmpeq r0, #0x0
    beq L_02013ddc
    ldr r0, =data_02087f78
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_02013ec4
    bl func_02030878
    cmp r0, #0x0
    beq L_02013dcc
    add r0, sp, #0x18
    mov r1, #0x0
    bl func_02030794
    cmp r0, #0x0
    beq L_02013ddc
    ldrh r0, [sp, #0x1c]
    cmp r0, #0x1
    bne L_02013ddc
L_02013dcc:
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    beq L_02013ec4
L_02013ddc:
    ldr r2, =data_0208703c
    ldrsb r0, [r2, #0x1]
    add r1, r2, #0x1
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrsb r0, [r2, #0x1]
    add r0, r4, r0
    ldrb r0, [r0, #0x40]
    cmp r0, #0x0
    mov r0, #0x0
    bne L_02013e48
    bl func_0203b96c
    mov r0, #0x10
    mov r1, #0x0
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x11
    mov r1, #0x0
    mov r2, #0xc0
    bl func_0203c24c
    ldr r1, =data_0208703c
    mov r3, #0x1
    ldr r0, =data_0206e6d4
    mov r2, #0x14
    str r3, [r1, #0x8]
    strh r2, [r0, #0x14]
    b L_02013ec4
L_02013e48:
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr ip, =data_020b8b44
    mov r0, #0xa
    mov r1, #0x96
    mov r2, #0xeb
    mov r3, #0x29
    str ip, [sp, #0x8]
    bl func_0203d0d8
    ldr r0, =data_0208703c
    ldrsb r0, [r0, #0x1]
    add r0, r4, r0
    ldrb r0, [r0, #0x40]
    add r0, r0, #0xf
    bl func_0204221c
    mov r2, #0xe6
    mov r1, r0
    str r2, [sp, #0x0]
    mov r2, #0x29
    ldr r0, =data_0206e680
    str r2, [sp, #0x4]
    ldr r2, [r0, #0x0]
    mov r0, #0x0
    str r2, [sp, #0x8]
    str r0, [sp, #0xc]
    ldr r4, =0x4001
    str r0, [sp, #0x10]
    mov r2, #0xa
    mov r3, #0x94
    str r4, [sp, #0x14]
    bl func_0202af8c
L_02013ec4:
    ldr r0, =data_02087f78
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    addeq sp, sp, #0x20
    ldmeqia sp!, {r4, pc}
    mov r0, #0x1
    bl func_0202ab18
    add sp, sp, #0x20
    ldmia sp!, {r4, pc}
}
// clang-format on
