#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203b96c();
extern void func_0203c1e8();
extern void func_0203c334();
extern void func_0203c4cc();
extern void func_02051ee8();
extern char data_02087410[];
extern char data_02087454[];
extern char data_02087455[];
extern char data_02087470[];
extern char data_02087474[];
extern char data_02087478[];
extern char data_0208747c[];
extern char data_02087480[];
extern char data_02087484[];
extern char data_02087488[];
extern char data_02087489[];
extern char data_0208748a[];
extern char data_0208748b[];
extern char data_0208748c[];
// clang-format off
asm void func_0201aa48(void) {
    stmfd sp!, {r0, r1, r2, r3}
    stmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    ldr r0, =data_02087410
    mov r10, r2
    ldrb r8, [r0, #0x1]
    ldr r9, [sp, #0x2c]
    ldr r2, =data_02087454
    mov r7, #0x0
    mov r0, #0x44
L_0201aa6c:
    mla r1, r7, r0, r2
    ldrb r1, [r1, #0x1]
    cmp r1, #0x0
    moveq r8, r7
    beq L_0201aa90
    add r1, r7, #0x1
    and r7, r1, #0xff
    cmp r7, r8
    bls L_0201aa6c
L_0201aa90:
    ldr r1, =data_02087410
    mov r0, #0x44
    ldrb r2, [r1, #0x1]
    mul r6, r8, r0
    add r5, r2, #0x1
    add r2, r1, #0x1
    swpb r1, r5, [r2]
    ldr r4, =data_02087454
    ldr r0, =data_02087455
    add r2, r4, r6
    swpb r1, r8, [r2]
    add r4, r0, r6
    mov r0, #0x7
    swpb r0, r0, [r4]
    ldr r2, =data_02087488
    ldr r1, =data_0208748a
    add r2, r2, r6
    ldr r11, [sp, #0x28]
    ldr r5, =data_02087474
    ldr r4, =data_02087478
    str r11, [r5, r6]
    str r9, [r4, r6]
    ldr r5, =data_0208747c
    ldr r0, =data_02087489
    str r11, [r5, r6]
    add r11, r0, r6
    ldr r0, =data_0208748b
    ldr r4, =data_02087480
    add lr, r0, r6
    ldr r0, =data_0208748c
    str r2, [sp, #0x0]
    add r2, r0, r6
    ldr ip, =data_02087484
    str r9, [r4, r6]
    mov r0, #0x10
    strh r0, [ip, r6]
    ldr ip, =data_02087470
    mov r0, #0x0
    add r1, r1, r6
    str r0, [ip, r6]
    swpb ip, r10, [r1]
    ldr r1, [sp, #0x0]
    ldrb ip, [sp, #0x38]
    swpb r3, r3, [r1]
    swpb r1, ip, [r11]
    swpb r1, r0, [lr]
    swpb r1, r0, [r2]
    bl func_0203b96c
    cmp r10, #0x7
    addls pc, pc, r10, lsl #0x2
    b L_0201b1d4
L_0201ab5c:
    b L_0201ab7c
    b L_0201ac1c
    b L_0201ad04
    b L_0201ada4
    b L_0201ae8c
    b L_0201af68
    b L_0201b050
    b L_0201b12c
L_0201ab7c:
    ldr r0, [sp, #0x28]
    mov r10, r8, lsl #0x2
    add r3, r10, #0x2
    sub r2, r0, #0x20
    sub r1, r9, #0x6f
    ldr r5, [r4, r6]
    mov r0, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    sub r5, r5, #0x5d
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x1a
    str r5, [r4, r6]
    bl func_0203c1e8
    ldr r0, [sp, #0x28]
    add r3, r10, #0x1
    sub r2, r0, #0x20
    sub r1, r9, #0x2f
    mov r0, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x1b
    bl func_0203c1e8
    ldr r0, [sp, #0x28]
    sub r1, r9, #0x10
    sub r2, r0, #0x10
    mov r0, r10, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x1d
    bl func_0203c1e8
    b L_0201b1d4
L_0201ac1c:
    ldr r1, [r5, r6]
    ldr r0, [sp, #0x28]
    add r1, r1, #0x45
    str r1, [r5, r6]
    mov r5, r8, lsl #0x2
    add r10, r5, #0x2
    add r2, r0, #0x17
    sub r1, r9, #0x57
    ldr r11, [r4, r6]
    mov r0, r10, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    sub r11, r11, #0x45
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x18
    str r11, [r4, r6]
    bl func_0203c1e8
    mov r0, r10, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203c334
    ldr r0, [sp, #0x28]
    add r4, r5, #0x1
    sub r0, r0, #0x11
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, #0x19
    mov r1, r4, lsl #0x10
    mov r1, r1, lsr #0x10
    sub r3, r9, #0x2f
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    bl func_0203c1e8
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203c334
    sub r0, r9, #0x10
    mov r0, r0, lsl #0x10
    mov r3, r0, lsr #0x10
    mov r0, #0x1c
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    ldr r2, [sp, #0x28]
    sub r2, r2, #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c1e8
    mov r0, r5, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203c334
    b L_0201b1d4
L_0201ad04:
    ldr r0, [sp, #0x28]
    mov r10, r8, lsl #0x2
    add r3, r10, #0x2
    sub r2, r0, #0x12
    sub r1, r9, #0x20
    ldr r4, [r5, r6]
    mov r0, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    add r4, r4, #0x5d
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x23
    str r4, [r5, r6]
    bl func_0203c1e8
    ldr r0, [sp, #0x28]
    add r3, r10, #0x1
    add r2, r0, #0x2e
    sub r1, r9, #0x20
    mov r0, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x24
    bl func_0203c1e8
    ldr r0, [sp, #0x28]
    sub r1, r9, #0x10
    sub r2, r0, #0x10
    mov r0, r10, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x25
    bl func_0203c1e8
    b L_0201b1d4
L_0201ada4:
    ldr r1, [r5, r6]
    ldr r0, [sp, #0x28]
    add r1, r1, #0x45
    str r1, [r5, r6]
    mov r5, r8, lsl #0x2
    add r10, r5, #0x2
    add r2, r0, #0x17
    add r1, r9, #0x17
    ldr r11, [r4, r6]
    mov r0, r10, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    add r11, r11, #0x45
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x18
    str r11, [r4, r6]
    bl func_0203c1e8
    mov r0, r10, lsl #0x10
    mov r1, #0x1
    mov r2, r1
    mov r0, r0, lsr #0x10
    bl func_0203c334
    ldr r0, [sp, #0x28]
    add r4, r5, #0x1
    sub r0, r0, #0x11
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, #0x19
    mov r1, r4, lsl #0x10
    mov r1, r1, lsr #0x10
    sub r3, r9, #0x11
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    bl func_0203c1e8
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x1
    mov r2, r1
    bl func_0203c334
    sub r0, r9, #0x10
    mov r0, r0, lsl #0x10
    mov r3, r0, lsr #0x10
    mov r0, #0x1c
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    ldr r2, [sp, #0x28]
    sub r2, r2, #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c1e8
    mov r0, r5, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x1
    mov r2, r1
    bl func_0203c334
    b L_0201b1d4
L_0201ae8c:
    ldr r0, [sp, #0x28]
    mov r5, r8, lsl #0x2
    add r10, r5, #0x2
    sub r2, r0, #0x20
    add r1, r9, #0x2f
    ldr r11, [r4, r6]
    mov r0, r10, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    add r11, r11, #0x5d
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x1a
    str r11, [r4, r6]
    bl func_0203c1e8
    mov r0, r10, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    mov r2, #0x1
    bl func_0203c334
    ldr r0, [sp, #0x28]
    add r4, r5, #0x1
    sub r0, r0, #0x20
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, #0x1b
    mov r1, r4, lsl #0x10
    mov r1, r1, lsr #0x10
    sub r3, r9, #0x11
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    bl func_0203c1e8
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    mov r2, #0x1
    bl func_0203c334
    sub r0, r9, #0x10
    mov r0, r0, lsl #0x10
    mov r3, r0, lsr #0x10
    mov r0, #0x1d
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    ldr r2, [sp, #0x28]
    sub r2, r2, #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c1e8
    mov r0, r5, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    mov r2, #0x1
    bl func_0203c334
    b L_0201b1d4
L_0201af68:
    ldr r1, [r5, r6]
    ldr r0, [sp, #0x28]
    sub r1, r1, #0x45
    str r1, [r5, r6]
    mov r5, r8, lsl #0x2
    add r10, r5, #0x2
    sub r2, r0, #0x57
    add r1, r9, #0x17
    ldr r11, [r4, r6]
    mov r0, r10, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    add r11, r11, #0x45
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x18
    str r11, [r4, r6]
    bl func_0203c1e8
    mov r0, r10, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    mov r2, #0x1
    bl func_0203c334
    ldr r0, [sp, #0x28]
    add r4, r5, #0x1
    sub r0, r0, #0x2f
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, #0x19
    mov r1, r4, lsl #0x10
    mov r1, r1, lsr #0x10
    sub r3, r9, #0x11
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    bl func_0203c1e8
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    mov r2, #0x1
    bl func_0203c334
    sub r0, r9, #0x10
    mov r0, r0, lsl #0x10
    mov r3, r0, lsr #0x10
    mov r0, #0x1c
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    ldr r2, [sp, #0x28]
    sub r2, r2, #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c1e8
    mov r0, r5, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    mov r2, #0x1
    bl func_0203c334
    b L_0201b1d4
L_0201b050:
    ldr r0, [sp, #0x28]
    mov r4, r8, lsl #0x2
    add r10, r4, #0x2
    sub r2, r0, #0x2e
    sub r1, r9, #0x20
    ldr r11, [r5, r6]
    mov r0, r10, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    sub r11, r11, #0x5d
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x23
    str r11, [r5, r6]
    bl func_0203c1e8
    mov r0, r10, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203c334
    ldr r0, [sp, #0x28]
    add r5, r4, #0x1
    sub r0, r0, #0x6e
    mov r0, r0, lsl #0x10
    mov r2, r0, lsr #0x10
    mov r0, #0x24
    mov r1, r5, lsl #0x10
    mov r1, r1, lsr #0x10
    sub r3, r9, #0x20
    mov r3, r3, lsl #0x10
    mov r3, r3, lsr #0x10
    bl func_0203c1e8
    mov r0, r5, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203c334
    sub r0, r9, #0x10
    mov r0, r0, lsl #0x10
    mov r3, r0, lsr #0x10
    mov r0, #0x25
    mov r1, r4, lsl #0x10
    mov r1, r1, lsr #0x10
    ldr r2, [sp, #0x28]
    sub r2, r2, #0x10
    mov r2, r2, lsl #0x10
    mov r2, r2, lsr #0x10
    bl func_0203c1e8
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x1
    mov r2, #0x0
    bl func_0203c334
    b L_0201b1d4
L_0201b12c:
    ldr r1, [r5, r6]
    ldr r0, [sp, #0x28]
    sub r1, r1, #0x45
    str r1, [r5, r6]
    mov r10, r8, lsl #0x2
    add r3, r10, #0x2
    sub r2, r0, #0x57
    sub r1, r9, #0x57
    ldr r5, [r4, r6]
    mov r0, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    sub r5, r5, #0x45
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x18
    str r5, [r4, r6]
    bl func_0203c1e8
    ldr r0, [sp, #0x28]
    add r3, r10, #0x1
    sub r2, r0, #0x2f
    sub r1, r9, #0x2f
    mov r0, r3, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x19
    bl func_0203c1e8
    ldr r0, [sp, #0x28]
    sub r1, r9, #0x10
    sub r2, r0, #0x10
    mov r0, r10, lsl #0x10
    mov r2, r2, lsl #0x10
    mov r3, r1, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r2, r2, lsr #0x10
    mov r3, r3, lsr #0x10
    mov r0, #0x1c
    bl func_0203c1e8
L_0201b1d4:
    ldr r0, =data_02087410
    mov r2, #0x20
    ldr r1, [r0, #0x30]
    add r0, r1, #0x80
    add r1, r1, #0x1e0
    bl func_02051ee8
    mov r4, r8, lsl #0x2
    mov r0, r4, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    mov r2, #0xf
    bl func_0203c4cc
    ldr r0, =data_02087410
    mov r2, #0x20
    ldr r1, [r0, #0x30]
    add r0, r1, #0x60
    add r1, r1, #0x1c0
    bl func_02051ee8
    add r0, r4, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    mov r2, #0xe
    bl func_0203c4cc
    add r0, r4, #0x2
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r1, #0x0
    mov r2, #0xe
    bl func_0203c4cc
    mov r0, r7
    ldmfd sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    add sp, sp, #0x10
    bx lr
}
// clang-format on
