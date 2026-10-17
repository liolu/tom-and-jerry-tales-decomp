#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_01ff8000();
extern void func_01ffa258();
extern void func_02051fd0();
extern void func_02052064();
extern void func_0205918c();
extern void func_020591c0();
extern void func_02059264();
extern char data_020690b8[];
extern char data_0206dd38[];
extern char data_0206ddbc[];
extern char data_0206e694[];
extern char data_0206e6a4[];
extern char data_0206e9f8[];
extern char data_02086b08[];
extern char data_021a90a4[];
extern char data_021a9b18[];
extern char data_021a9b20[];
extern char data_021ac118[];
// clang-format off
asm void func_02042944(void) {
    stmfd sp!, {r4, r5, r6, r7, lr}
    sub sp, sp, #0x4c
    ldr r2, =data_02086b08
    mov r3, #0x0
    swpb r0, r3, [r2]
    ldr r1, =data_0206e694
    str r3, [r1, #0x0]
    bl func_01ffa258
    ldr r7, =data_021ac118
    mov r1, #0x0
    ldr r0, =data_021a9b18
    mov r2, #0x2600
    str r1, [r7, #0x0]
    bl func_02051fd0
    ldr r4, =data_0206ddbc
    ldr r1, =data_0206e9f8
    mov r2, #0x2
    mov r0, r4
    str r2, [sp, #0x4]
    str r1, [sp, #0x0]
    bl func_02059264
    mov r5, r0
    add r0, sp, #0x8
    mov r1, r4
    mov r6, #0x0
    mov r2, #0x40
    bl func_020591c0
    cmp r5, #0x0
    mov r2, r6
    ble L_02042a00
    ldr r1, =data_020690b8
    add r3, sp, #0x8
L_020429c4:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_020429dc
    cmp r0, #0x80
    bge L_020429dc
    ldrb r0, [r1, r0]
L_020429dc:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r5
    add r0, r0, r6, lsl #0x6
    add r0, r0, r6, lsl #0x10
    sub r0, r0, r6
    and r6, r0, #0x7f
    blt L_020429c4
L_02042a00:
    mov r0, #0x4c
    mul r2, r6, r0
    ldr r1, =data_021a9b20
    mov r0, r6
    ldrb r1, [r1, r2]
    cmp r1, #0x0
    beq L_02042a54
    ldr r3, =data_021a9b18
    mov r5, #0x0
    mov r1, #0x4c
L_02042a28:
    add r0, r0, #0x1
    cmp r0, #0x80
    movge r0, r5
    bge L_02042a44
    cmp r0, r6
    mvneq r0, #0x0
    beq L_02042a54
L_02042a44:
    mla r2, r0, r1, r3
    ldrb r2, [r2, #0x8]
    cmp r2, #0x0
    bne L_02042a28
L_02042a54:
    cmp r0, #0x0
    blt L_02042aa4
    mov r1, #0x4c
    mul r3, r0, r1
    ldr r1, =data_021a9b20
    ldr r0, =data_021a9b18
    add r2, r1, r3
    add r5, r0, r3
    mov r0, #0x1
    swpb r0, r0, [r2]
    mov r1, r4
    add r0, r5, #0x9
    bl func_0205918c
    add r0, sp, #0x0
    mov r1, r5
    mov r2, #0x8
    bl func_02052064
    ldr r0, [r7, #0x0]
    add r0, r0, #0x1
    str r0, [r7, #0x0]
L_02042aa4:
    ldr r2, =data_021a90a4
    mov r1, #0x0
    str r1, [r2, #0x4]
    str r1, [r2, #0x8]
    str r1, [r2, #0xc]
    mov r3, #0x40
    mov r0, #0xa4
    str r1, [r2, #0x34]
    str r3, [r2, #0x38]
    smulbb r1, r3, r0
    ldr r0, =data_0206e6a4
    str r3, [r2, #0x3c]
    bl func_01ff8000
    ldr r1, =data_021a90a4
    mov r2, #0xa4
    str r0, [r1, #0x2c]
    str r0, [r1, #0x30]
    ldr r3, [r1, #0x38]
    mov r1, #0x0
    mul r2, r3, r2
    bl func_02051fd0
    ldr r1, =data_021a90a4
    mov r0, #0x0
    str r0, [r1, #0xa6c]
    mov r2, #0x20
    ldr r0, =data_0206dd38
    str r2, [r1, #0xa70]
    mov r1, #0x1000
    str r1, [r0, #0x0]
    add sp, sp, #0x4c
    ldmfd sp!, {r4, r5, r6, r7, pc}
}
// clang-format on
