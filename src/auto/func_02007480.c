#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a0f8();
extern void func_02013198();
extern void func_0201dc08();
extern char data_0206accc[];
extern char data_0206acd0[];
extern char data_0206e6d4[];
extern char data_0206ea14[];
extern char data_02086b08[];
extern char data_02087038[];
// clang-format off
asm void func_02007480(void) {
    stmfd sp!, {r4, lr}
    ldr ip, =data_02086b08
    ldr r1, [ip, #0xc]
    cmp r1, #0x0
    ldmeqfd sp!, {r4, pc}
    ldrb r0, [ip, #0x4]
    cmp r0, #0x0
    beq L_020074b4
    cmp r0, #0x1
    beq L_0200759c
    cmp r0, #0x2
    beq L_02007648
    ldmfd sp!, {r4, pc}
L_020074b4:
    ldr r3, =data_0206ea14
    mov r0, #0x8
    ldr r1, [r3, #0x0]
    mov r2, #0x6
    add r1, r1, #0x1000
    str r2, [r1, #0x834]
    ldr r1, [r3, #0x0]
    mov r2, #0x0
    add r1, r1, #0x1000
    str r2, [r1, #0x830]
    ldr r1, [r3, #0x0]
    sub lr, r0, #0x9
    add r1, r1, #0x1000
    add r1, r1, #0x48
    add r2, r1, #0x800
    swpb r1, r0, [r2]
    ldr r2, =data_0206e6d4
    ldr r1, [r3, #0x0]
    ldrh r4, [r1, #0xea]
    add r1, r1, #0x1800
    strh r4, [r1, #0x40]
    ldr r1, [r3, #0x0]
    add r1, r1, #0x1000
    str lr, [r1, #0x844]
    ldrsh r1, [r2, #0x88]
    cmp r1, #0xa
    ble L_0200752c
    sub r0, r0, #0xb
    bl func_0201dc08
    b L_02007554
L_0200752c:
    add r1, ip, #0x4
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldr r1, [r3, #0x0]
    mov r2, #0x1a
    add r1, r1, #0x1000
    mov r0, #0x1b
    str r2, [r1, #0x83c]
    bl func_0200a0f8
    ldmfd sp!, {r4, pc}
L_02007554:
    ldr r0, =data_02086b08
    ldr r0, [r0, #0xc]
    cmp r0, #0x1
    ldreq r0, =data_0206ea14
    moveq r1, #0x18
    ldrne r0, =data_0206ea14
    movne r1, #0x19
    ldr r0, [r0, #0x0]
    add r0, r0, #0x1000
    str r1, [r0, #0x83c]
    mov r0, #0x1d
    bl func_0200a0f8
    ldr r0, =data_02086b08
    ldrb r2, [r0, #0x4]
    add r1, r0, #0x4
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_0200759c:
    cmp r1, #0x1
    bne L_020075ec
    ldr r0, =data_02087038
    ldr r1, =data_0206acd0
    ldr r0, [r0, #0x0]
    ldr r1, [r1, #0x0]
    mov r2, #0x1
    bl func_02013198
    ldr r1, =data_0206acd0
    ldr r2, =data_02087038
    ldr r1, [r1, #0x0]
    str r0, [r2, #0x0]
    cmp r0, r1
    bgt L_020075ec
    ldr r0, =data_02086b08
    str r1, [r2, #0x0]
    ldrb r2, [r0, #0x4]
    add r1, r0, #0x4
    add r0, r2, #0x1
    swpb r0, r0, [r1]
L_020075ec:
    ldr r0, =data_02086b08
    ldr r0, [r0, #0xc]
    cmp r0, #0x2
    ldmnefd sp!, {r4, pc}
    ldr r0, =data_02087038
    ldr r1, =data_0206accc
    ldr r0, [r0, #0x0]
    ldr r1, [r1, #0x0]
    mov r2, #0x1
    bl func_02013198
    ldr r1, =data_0206accc
    ldr r2, =data_02087038
    ldr r1, [r1, #0x0]
    str r0, [r2, #0x0]
    cmp r0, r1
    ldmltfd sp!, {r4, pc}
    ldr r0, =data_02086b08
    str r1, [r2, #0x0]
    ldrb r2, [r0, #0x4]
    add r1, r0, #0x4
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
L_02007648:
    ldr r0, =data_0206ea14
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x24]
    cmp r0, #0x10
    cmpne r0, #0xf
    cmpne r0, #0x12
    ldmeqfd sp!, {r4, pc}
    mov r0, #0x0
    str r0, [ip, #0xc]
    add r1, ip, #0x4
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
