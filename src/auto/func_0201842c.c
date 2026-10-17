#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02017bd4();
extern void func_02022b98();
extern void func_0203b96c();
extern void func_0203c24c();
extern void func_0203d0d8();
extern char data_020871f4[];
extern char data_02087224[];
extern char data_020b8b44[];
// clang-format off
asm void func_0201842c(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0xc
    ldr r0, =data_020871f4
    ldrb r0, [r0, #0x2]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    b L_020187a0
L_02018448:
    b L_020187a0
    b L_020187a0
    b L_02018464
    b L_02018594
    b L_020185b0
    b L_02018620
    b L_02018660
L_02018464:
    mov r0, #0x0
    bl func_0203b96c
    ldr r0, =data_020871f4
    ldr r1, [r0, #0x10]
    cmp r1, #0x20
    ble L_02018570
    sub r2, r1, #0x10
    str r2, [r0, #0x10]
    ldr r1, [r0, #0x14]
    cmp r2, #0x80
    sub r1, r1, #0x10
    str r1, [r0, #0x14]
    ldr r1, [r0, #0xc]
    sub r1, r1, #0x10
    str r1, [r0, #0xc]
    bge L_020184c8
    ldr r1, [r0, #0x20]
    sub r1, r1, #0x10
    str r1, [r0, #0x20]
    ldr r1, [r0, #0x8]
    sub r1, r1, #0x10
    str r1, [r0, #0x8]
    ldr r1, [r0, #0x24]
    sub r1, r1, #0x10
    str r1, [r0, #0x24]
L_020184c8:
    mov r0, r2, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, #0x38
    mov r1, #0x20
    bl func_0203c24c
    ldr r1, =data_020871f4
    mov r0, #0x39
    ldr r2, [r1, #0x14]
    mov r1, #0x60
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_020871f4
    mov r0, #0x3a
    ldr r2, [r1, #0xc]
    mov r1, #0xa0
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_020871f4
    mov r0, #0x3b
    ldr r2, [r1, #0x20]
    mov r1, #0x20
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_020871f4
    mov r0, #0x3c
    ldr r2, [r1, #0x8]
    mov r1, #0x60
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r2, =data_020871f4
    mov r0, #0x3d
    ldr r2, [r2, #0x24]
    mov r1, #0xa0
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_02018570:
    add r1, r0, #0x2
    mov r0, #0x3
    swpb r0, r0, [r1]
    bl func_02017bd4
    ldr r0, =data_02087224
    mov r1, #0x0
    bl func_02022b98
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_02018594:
    bl func_02017bd4
    ldr r0, =data_020871f4
    mov r2, #0x4
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_020185b0:
    mov r0, #0x0
    bl func_0203b96c
    ldr r0, =data_020871f4
    mov r2, #0x45
    ldrb r0, [r0, #0x4]
    add r0, r0, #0xff
    and r0, r0, #0xff
    cmp r0, #0x1
    mov r0, #0x3e
    bhi L_020185f4
    mov r1, #0x40
    bl func_0203c24c
    mov r0, #0x3f
    mov r1, #0x80
    mov r2, #0x45
    bl func_0203c24c
    b L_0201860c
L_020185f4:
    mov r1, #0x100
    bl func_0203c24c
    mov r0, #0x3f
    mov r1, #0x100
    mov r2, #0x45
    bl func_0203c24c
L_0201860c:
    ldr r0, =data_02087224
    mov r1, #0x0
    bl func_02022b98
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_02018620:
    mov r1, #0x0
    str r1, [sp, #0x0]
    mov r0, #0x20
    str r1, [sp, #0x4]
    ldr ip, =data_020b8b44
    mov r1, r0
    mov r2, #0xc0
    mov r3, #0x78
    str ip, [sp, #0x8]
    bl func_0203d0d8
    ldr r0, =data_020871f4
    mov r2, #0x6
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_02018660:
    mov r0, #0x0
    bl func_0203b96c
    ldr r0, =data_020871f4
    ldr r1, [r0, #0x10]
    cmp r1, #0xc0
    bge L_02018794
    add r1, r1, #0x10
    str r1, [r0, #0x10]
    ldr r1, [r0, #0x14]
    add r1, r1, #0x10
    str r1, [r0, #0x14]
    ldr r1, [r0, #0xc]
    add r1, r1, #0x10
    str r1, [r0, #0xc]
    ldr r1, [r0, #0x20]
    cmp r1, #0xc0
    bge L_020186c4
    add r1, r1, #0x10
    str r1, [r0, #0x20]
    ldr r1, [r0, #0x8]
    add r1, r1, #0x10
    str r1, [r0, #0x8]
    ldr r1, [r0, #0x24]
    add r1, r1, #0x10
    str r1, [r0, #0x24]
L_020186c4:
    ldr r1, =data_020871f4
    mov r0, #0x38
    ldr r2, [r1, #0x10]
    mov r1, #0x20
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_020871f4
    mov r0, #0x39
    ldr r2, [r1, #0x14]
    mov r1, #0x60
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_020871f4
    mov r0, #0x3a
    ldr r2, [r1, #0xc]
    mov r1, #0xa0
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_020871f4
    mov r0, #0x3b
    ldr r2, [r1, #0x20]
    mov r1, #0x20
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r1, =data_020871f4
    mov r0, #0x3c
    ldr r2, [r1, #0x8]
    mov r1, #0x60
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    ldr r2, =data_020871f4
    mov r0, #0x3d
    ldr r2, [r2, #0x24]
    mov r1, #0xa0
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c24c
    mov r0, #0x3e
    mov r1, #0x100
    mov r2, #0x45
    bl func_0203c24c
    mov r0, #0x3f
    mov r1, #0x100
    mov r2, #0x45
    bl func_0203c24c
    add sp, sp, #0xc
    ldmfd sp!, {pc}
L_02018794:
    add r1, r0, #0x2
    mov r0, #0x7
    swpb r0, r0, [r1]
L_020187a0:
    add sp, sp, #0xc
    ldmfd sp!, {pc}
}
// clang-format on
