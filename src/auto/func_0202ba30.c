#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02022be4();
extern void func_0202b630();
extern void func_0203b96c();
extern void func_0203c24c();
extern void func_0203d0d8();
extern char data_02087f80[];
extern char data_02087fac[];
extern char data_020b8b6c[];
// clang-format off
asm void func_0202ba30(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    ldr r0, =data_02087f80
    ldr r1, [r0, #0x10]
    cmp r1, #0x0
    addeq sp, sp, #0xc
    ldmeqfd sp!, {pc}
    ldrb r1, [r0, #0x1]
    cmp r1, #0x6
    addls pc, pc, r1, lsl #0x2
    b L_0202bd3c
L_0202ba5c:
    b L_0202bd3c
    b L_0202bd3c
    b L_0202ba78
    b L_0202bbc8
    b L_0202bd3c
    b L_0202bbdc
    b L_0202bc1c
L_0202ba78:
    mov r0, #0x0
    bl func_0203b96c
    ldr r3, =data_02087f80
    ldr r0, [r3, #0xc]
    cmp r0, #0x20
    ble L_0202bb84
    sub r1, r0, #0x10
    str r1, [r3, #0xc]
    ldr r0, [r3, #0x8]
    cmp r1, #0x80
    sub r0, r0, #0x10
    str r0, [r3, #0x8]
    ldr r0, [r3, #0x24]
    sub r0, r0, #0x10
    str r0, [r3, #0x24]
    bge L_0202badc
    ldr r0, [r3, #0x20]
    sub r0, r0, #0x10
    str r0, [r3, #0x20]
    ldr r0, [r3, #0x18]
    sub r0, r0, #0x10
    str r0, [r3, #0x18]
    ldr r0, [r3, #0x14]
    sub r0, r0, #0x10
    str r0, [r3, #0x14]
L_0202badc:
    mov r0, r1, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, #0x2e
    mov r1, #0x20
    bl func_0203c24c
    ldr r1, =data_02087f80
    mov r0, #0x2f
    ldr r2, [r1, #0x8]
    mov r1, #0x60
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_02087f80
    mov r0, #0x30
    ldr r2, [r1, #0x24]
    mov r1, #0xa0
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_02087f80
    mov r0, #0x31
    ldr r2, [r1, #0x20]
    mov r1, #0x20
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_02087f80
    mov r0, #0x32
    ldr r2, [r1, #0x18]
    mov r1, #0x60
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r2, =data_02087f80
    mov r0, #0x33
    ldr r2, [r2, #0x14]
    mov r1, #0xa0
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_0202bb84:
    add r1, r3, #0x1
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r2, r3, #0x2e
    mov r1, #0x1
    swpb r0, r1, [r2]
    ldr r0, [r3, #0x3c]
    bl func_0202b630
    ldr r0, =data_02087f80
    mov r1, #0x2
    ldr r0, [r0, #0x40]
    bl func_0202b630
    ldr r0, =data_02087fac
    mov r1, #0x1
    bl func_02022be4
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_0202bbc8:
    add r1, r0, #0x1
    mov r0, #0x4
    swpb r0, r0, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_0202bbdc:
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r0, #0x20
    str r1, [sp, #0x4]
    ldr ip, =data_020b8b6c
    mov r1, r0
    mov r2, #0xc0
    mov r3, #0x78
    str ip, [sp, #0x8]
    bl func_0203d0d8
    ldr r0, =data_02087f80
    mov r2, #0x6
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_0202bc1c:
    mov r0, #0x0
    bl func_0203b96c
    ldr r0, =data_02087f80
    ldr r1, [r0, #0xc]
    cmp r1, #0xc0
    bge L_0202bd30
    add r1, r1, #0x10
    str r1, [r0, #0xc]
    ldr r1, [r0, #0x8]
    add r1, r1, #0x10
    str r1, [r0, #0x8]
    ldr r1, [r0, #0x24]
    add r1, r1, #0x10
    str r1, [r0, #0x24]
    ldr r1, [r0, #0x20]
    cmp r1, #0xc0
    bge L_0202bc80
    add r1, r1, #0x10
    str r1, [r0, #0x20]
    ldr r1, [r0, #0x18]
    add r1, r1, #0x10
    str r1, [r0, #0x18]
    ldr r1, [r0, #0x14]
    add r1, r1, #0x10
    str r1, [r0, #0x14]
L_0202bc80:
    ldr r1, =data_02087f80
    mov r0, #0x2e
    ldr r2, [r1, #0xc]
    mov r1, #0x20
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_02087f80
    mov r0, #0x2f
    ldr r2, [r1, #0x8]
    mov r1, #0x60
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_02087f80
    mov r0, #0x30
    ldr r2, [r1, #0x24]
    mov r1, #0xa0
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_02087f80
    mov r0, #0x31
    ldr r2, [r1, #0x20]
    mov r1, #0x20
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_02087f80
    mov r0, #0x32
    ldr r2, [r1, #0x18]
    mov r1, #0x60
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r2, =data_02087f80
    mov r0, #0x33
    ldr r2, [r2, #0x14]
    mov r1, #0xa0
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_0202bd30:
    add r1, r0, #0x1
    mov r0, #0x7
    swpb r0, r0, [r1]
L_0202bd3c:
    add sp, sp, #0xc
    ldmfd sp!, {pc}
}
// clang-format on
