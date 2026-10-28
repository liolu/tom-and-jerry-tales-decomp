#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020087b0();
extern void func_02030878();
extern void abs();
extern char data_0206ea14[];
extern char data_02086b08[];
// clang-format off
asm void func_020085c8(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    bl func_02030878
    cmp r0, #0x0
    beq L_02008794
    ldr r2, =data_02086b08
    ldrb r0, [r2, #0x3]
    cmp r0, #0x0
    bne L_02008650
    ldr r0, =data_0206ea14
    ldr r3, [r4, #0x4]
    ldr r0, [r0, #0x0]
    ldr ip, [r4, #0x0]
    add r0, r0, #0x1000
    ldr r1, [r0, #0x828]
    ldr r4, [r0, #0x824]
    sub r1, r3, r1
    mul r0, r1, r1
    sub r1, ip, r4
    mla r0, r1, r1, r0
    cmp r0, #0x384
    ldmhsfd sp!, {r4, pc}
    str ip, [r2, #0x14]
    str r3, [r2, #0x18]
    add r1, r2, #0x3
    mov r0, #0x1
    swpb r0, r0, [r1]
    add r1, r2, #0x6
    mov r0, #0xf
    swpb r0, r0, [r1]
    add r1, r2, #0x5
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_02008650:
    ldr r1, [r4, #0x4]
    ldr r0, [r2, #0x18]
    ldr r4, [r4, #0x0]
    ldr r3, [r2, #0x14]
    sub r1, r1, r0
    mvn r0, #0x1d
    cmp r1, r0
    sub r4, r4, r3
    bge L_02008694
    mov r0, #0x4
    bl func_020087b0
    ldr r0, =data_02086b08
    ldrb r2, [r0, #0x6]
    add r1, r0, #0x6
    orr r0, r2, #0x8
    swpb r0, r0, [r1]
    b L_020086cc
L_02008694:
    cmp r1, #0x12
    ble L_020086bc
    mov r0, #0x8
    bl func_020087b0
    ldr r0, =data_02086b08
    ldrb r2, [r0, #0x6]
    add r1, r0, #0x6
    orr r0, r2, #0x4
    swpb r0, r0, [r1]
    b L_020086cc
L_020086bc:
    ldrb r0, [r2, #0x6]
    add r1, r2, #0x6
    orr r0, r0, #0xc
    swpb r0, r0, [r1]
L_020086cc:
    ldr r0, =data_02086b08
    ldrb r0, [r0, #0x5]
    cmp r0, #0x0
    mov r0, r4
    beq L_02008774
    bl abs
    cmp r0, #0x4
    bge L_02008700
    ldr r0, =data_02086b08
    mov r2, #0x0
    add r1, r0, #0x5
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, pc}
L_02008700:
    cmp r4, #0x0
    bge L_0200873c
    mov r0, #0x1
    bl func_020087b0
    ldr r2, =data_02086b08
    ldr r0, =data_0206ea14
    ldrb r4, [r2, #0x6]
    ldr r3, [r0, #0x0]
    add r1, r2, #0x6
    orr r0, r4, #0x2
    swpb r0, r0, [r1]
    add r0, r3, #0x1000
    ldr r0, [r0, #0x824]
    str r0, [r2, #0x14]
    ldmfd sp!, {r4, pc}
L_0200873c:
    ldmlefd sp!, {r4, pc}
    mov r0, #0x2
    bl func_020087b0
    ldr r2, =data_02086b08
    ldr r0, =data_0206ea14
    ldrb r4, [r2, #0x6]
    ldr r3, [r0, #0x0]
    add r1, r2, #0x6
    orr r0, r4, #0x1
    swpb r0, r0, [r1]
    add r0, r3, #0x1000
    ldr r0, [r0, #0x824]
    str r0, [r2, #0x14]
    ldmfd sp!, {r4, pc}
L_02008774:
    bl abs
    cmp r0, #0xc
    ldmlefd sp!, {r4, pc}
    ldr r0, =data_02086b08
    mov r2, #0x1
    add r1, r0, #0x5
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, pc}
L_02008794:
    ldr r0, =data_02086b08
    mov r2, #0x0
    add r1, r0, #0x3
    swpb r0, r2, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
