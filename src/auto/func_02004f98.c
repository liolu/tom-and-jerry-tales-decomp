#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02004e38();
extern void func_0202bfbc();
extern void func_02039e84();
extern void func_0203a58c();
extern void func_0203a95c();
extern void func_0203fa64();
extern void func_0204221c();
extern char data_020692e4[];
extern char data_0206a298[];
extern char data_0206e6a4[];
extern char data_0206e6d4[];
extern char data_020880c0[];
// clang-format off
asm void func_02004f98(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r0, r4, lsl #0x10
    mov r0, r0, asr #0x10
    mov r5, r2
    bl func_0203a95c
    ldrsh r0, [r0, #0x0]
    bl func_0203a58c
    ldr r1, =data_0206e6d4
    ldr r0, =data_020880c0
    ldrb r2, [r1, #0x80]
    ldrb r0, [r0, #0x24]
    cmp r2, r0
    ldmlofd sp!, {r3, r4, r5, pc}
    sub r0, r5, #0x13
    cmp r0, #0x1a
    addls pc, pc, r0, lsl #0x2
    b L_02005358
L_02004fe0:
    b L_0200504c
    b L_02005358
    b L_0200506c
    b L_02005088
    b L_020050a4
    b L_020050c0
    b L_020050dc
    b L_020050f8
    b L_02005114
    b L_02005134
    b L_02005150
    b L_0200516c
    b L_0200526c
    b L_02005288
    b L_02005318
    b L_0200533c
    b L_02005358
    b L_0200518c
    b L_020051ac
    b L_020051cc
    b L_020051ec
    b L_0200520c
    b L_0200522c
    b L_0200524c
    b L_020052a4
    b L_020052c4
    b L_020052f8
L_0200504c:
    ldr r2, [r1, #0x94]
    mov r0, #0x5e
    bic r2, r2, #0x1
    orr r2, r2, #0x1
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_0200506c:
    ldr r2, [r1, #0x94]
    mov r0, #0x60
    orr r2, r2, #0x4
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_02005088:
    ldr r2, [r1, #0x94]
    mov r0, #0x62
    orr r2, r2, #0x8
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_020050a4:
    ldr r2, [r1, #0x94]
    mov r0, #0x63
    orr r2, r2, #0x10
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_020050c0:
    ldr r2, [r1, #0x94]
    mov r0, #0x64
    orr r2, r2, #0x20
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_020050dc:
    ldr r2, [r1, #0x94]
    mov r0, #0x65
    orr r2, r2, #0x40
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_020050f8:
    ldr r2, [r1, #0x94]
    mov r0, #0x66
    orr r2, r2, #0x82
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_02005114:
    ldrb r3, [r1, #0x99]
    add r2, r1, #0x99
    mov r0, #0x67
    orr r1, r3, #0x8
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_02005134:
    ldr r2, [r1, #0x94]
    mov r0, #0x68
    orr r2, r2, #0x100
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_02005150:
    ldr r2, [r1, #0x94]
    mov r0, #0x69
    orr r2, r2, #0x1200
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_0200516c:
    ldrb r3, [r1, #0x99]
    add r2, r1, #0x99
    mov r0, #0x6a
    orr r1, r3, #0x2
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_0200518c:
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    mov r0, #0x70
    orr r1, r3, #0x2
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_020051ac:
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    mov r0, #0x71
    orr r1, r3, #0x4
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_020051cc:
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    mov r0, #0x72
    orr r1, r3, #0x8
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_020051ec:
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    mov r0, #0x73
    orr r1, r3, #0x10
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_0200520c:
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    mov r0, #0x74
    orr r1, r3, #0x20
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_0200522c:
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    mov r0, #0x75
    orr r1, r3, #0x40
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_0200524c:
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    mov r0, #0x76
    orr r1, r3, #0x80
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_0200526c:
    ldr r2, [r1, #0x94]
    mov r0, #0x6b
    orr r2, r2, #0x400
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_02005288:
    ldr r2, [r1, #0x94]
    mov r0, #0x6c
    orr r2, r2, #0x800
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_020052a4:
    ldrb r3, [r1, #0x99]
    add r2, r1, #0x99
    mov r0, #0x78
    orr r1, r3, #0x10
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_020052c4:
    ldrb r3, [r1, #0x99]
    add r2, r1, #0x99
    mov r0, #0x77
    orr r1, r3, #0x20
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x59]
    add r1, r0, #0x59
    orr r0, r2, #0x20
    swpb r0, r0, [r1]
    b L_02005358
L_020052f8:
    ldrb r3, [r1, #0x99]
    add r2, r1, #0x99
    mov r0, #0x79
    orr r1, r3, #0x40
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_02005318:
    ldrb r3, [r1, #0x99]
    add r2, r1, #0x99
    mov r0, #0x6d
    bic r1, r3, #0x1
    orr r1, r1, #0x1
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_02005358
L_0200533c:
    ldrb r3, [r1, #0x99]
    add r2, r1, #0x99
    mov r0, #0x6e
    orr r1, r3, #0x4
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
L_02005358:
    mov r0, #0x24
    bl func_0203fa64
    ldr r0, =data_0206a298
    mov r1, r4
    bl func_02004e38
    ldr r0, =data_020692e4
    ldr r2, =data_0206e6a4
    ldr r1, [r0, #0x0]
    mov r0, r4
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_02039e84
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
