#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020222b8();
extern void func_02022354();
extern void func_020306c0();
extern void func_0203ff6c();
extern void OS_Terminate();
extern char data_02063e44[];
extern char data_0206400c[];
extern char data_02064024[];
extern char data_0206403c[];
extern char data_0206e698[];
extern char data_0206e6a4[];
extern char data_02086d00[];
// clang-format off
asm void func_0200a684(void) {
    stmfd sp!, {r4, lr}
    ldr r0, =data_02086d00
    ldrb r0, [r0, #0x0]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_0200a7e4
L_0200a69c:
    b L_0200a6b8
    b L_0200a7c4
    ldmfd sp!, {r4, pc}
    b L_0200a7e4
    b L_0200a6d4
    b L_0200a724
    b L_0200a774
L_0200a6b8:
    ldr r0, =data_02064024
    bl func_0203ff6c
    ldr r1, =data_02086d00
    mov r2, #0x1
    str r0, [r1, #0x4]
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, pc}
L_0200a6d4:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    ldmeqfd sp!, {r4, pc}
    ldr ip, =data_0206e6a4
    ldr r3, =data_0206e698
    ldr r4, [ip, #0x0]
    ldr lr, [r3, #0x0]
    mov r0, #0x0
    mov r1, #0x1
    mov r2, #0x3
    str r4, [ip, #0x4]
    str lr, [r3, #0x4]
    bl func_020222b8
    ldr r0, =data_0206400c
    bl func_0203ff6c
    ldr r1, =data_02086d00
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_0200a724:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    ldmeqfd sp!, {r4, pc}
    mov r0, #0x0
    mov r1, #0x1
    mov r2, #0x3
    bl func_020222b8
    ldr r2, =data_0206e6a4
    ldr r1, =data_0206e698
    ldr ip, [r2, #0x0]
    ldr r3, [r1, #0x0]
    ldr r0, =data_02063e44
    str ip, [r2, #0x4]
    str r3, [r1, #0x4]
    bl func_0203ff6c
    ldr r1, =data_02086d00
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_0200a774:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    ldmeqfd sp!, {r4, pc}
    mov r0, #0x0
    mov r1, #0x3c
    mov r2, #0x3
    bl func_020222b8
    ldr r2, =data_0206e6a4
    ldr r1, =data_0206e698
    ldr ip, [r2, #0x0]
    ldr r3, [r1, #0x0]
    ldr r0, =data_0206403c
    str ip, [r2, #0x4]
    str r3, [r1, #0x4]
    bl func_0203ff6c
    ldr r1, =data_02086d00
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_0200a7c4:
    mov r0, #0x0
    bl func_020306c0
    cmp r0, #0x0
    ldmeqfd sp!, {r4, pc}
    ldr r1, =data_02086d00
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_0200a7e4:
    bl OS_Terminate
    ldmfd sp!, {r4, pc}
}
// clang-format on
