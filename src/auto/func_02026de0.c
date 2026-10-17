#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201d10c();
extern void func_0202bd5c();
extern void func_0202be78();
extern void func_0202bff4();
extern void func_0202c1e4();
extern void func_0202cc34();
extern void func_0202cc54();
extern void func_0203b96c();
extern void func_0203c24c();
extern void func_0203d0d8();
extern void func_0203d740();
extern void func_0204221c();
extern void func_0204f490();
extern void func_0205bdf4();
extern char data_0206b918[];
extern char data_0206b9d4[];
extern char data_0206bad4[];
extern char data_0206bad8[];
extern char data_0206c30c[];
extern char data_0206c314[];
extern char data_0206e690[];
extern char data_0206e6d4[];
extern char data_0206e6f4[];
extern char data_020877d0[];
extern char data_02087dd0[];
extern char data_020b8be4[];
// clang-format off
asm void func_02026de0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, lr}
    sub sp, sp, #0xc
    mov r0, #0x1
    bl func_0203b96c
    ldr r1, =data_020877d0
    ldr r0, [r1, #0x2c]
    cmp r0, #0x2
    bne L_02026ea0
    ldr r1, =data_0206e6d4
    ldr r0, =data_0206b918
    ldrb r4, [r1, #0x50]
    ldrb r0, [r0, #0x1]
    cmp r0, r4
    beq L_02027674
    mov r0, #0x7e
    bl func_0204221c
    mov r2, r0
    ldr r0, =data_02087dd0
    ldr r1, =data_0206c30c
    mov r3, r4
    bl func_0205bdf4
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r4, =data_020b8be4
    mov r0, #0x5
    mov r1, #0x3
    mov r2, #0xfa
    mov r3, #0x19
    str r4, [sp, #0x8]
    bl func_0203d0d8
    ldr r1, =data_0206e6d4
    ldr r0, =data_0206b918
    ldrb r3, [r1, #0x50]
    add r1, r0, #0x1
    mov r2, #0x0
    swpb r0, r3, [r1]
    mov r1, r4
    str r2, [sp, #0x0]
    str r2, [sp, #0x4]
    str r1, [sp, #0x8]
    ldr r0, =data_0206e690
    mov r1, #0x5
    ldr r3, [r0, #0x0]
    ldr r0, =data_02087dd0
    mov r2, #0x3
    bl func_0203d740
    b L_02027674
L_02026ea0:
    cmp r0, #0x7
    bne L_02027538
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    cmp r0, #0x7
    cmpne r0, #0x6
    beq L_02027674
    ldr r2, [r1, #0x24]
    ldr r0, [r1, #0x1c]
    cmp r2, r0
    beq L_020273f8
    mov r0, #0x0
    ldr r2, =data_020b8be4
    str r0, [sp, #0x0]
    stmib sp, {r0, r2}
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x0]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x0
    ldr r2, =data_020b8be4
    str r0, [sp, #0x0]
    stmib sp, {r0, r2}
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x1]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x0
    ldr r2, =data_020b8be4
    str r0, [sp, #0x0]
    stmib sp, {r0, r2}
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x2]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr r2, =data_020b8be4
    str r0, [sp, #0x4]
    str r2, [sp, #0x8]
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x3]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x1c]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_02026fd0
L_02026fa4:
    b L_02026fb4
    b L_02026fbc
    b L_02026fcc
    b L_02026fc4
L_02026fb4:
    mov r4, #0x1
    b L_02026fd0
L_02026fbc:
    mov r4, #0x2
    b L_02026fd0
L_02026fc4:
    mov r4, #0x3
    b L_02026fd0
L_02026fcc:
    mov r4, #0x4
L_02026fd0:
    ldr r0, =data_0206b918
    and r1, r4, #0xff
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_0202bd5c
    mov r0, r4
    bl func_0202be78
    ldr r3, =data_0206b918
    ldr r1, =data_0206bad8
    ldr r0, =data_0206bad4
    ldr r2, =data_0206e690
    ldr r3, [r3, #0x4]
    ldr r9, [r2, #0x0]
    ldrb r8, [r1, #0x1]
    ldrb r7, [r0, #0x1]
    ldr r1, =data_0206e6f4
    mov r0, #0x3
    add r6, r1, r3, lsl #0x3
    mov r1, r4
    bl func_0202bff4
    mov r1, r7
    mov r2, r8
    mov r3, r9
    mov r7, #0x0
    str r7, [sp, #0x0]
    str r7, [sp, #0x4]
    ldr r7, =data_020b8be4
    str r7, [sp, #0x8]
    bl func_0203d740
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x1c]
    cmp r0, #0x0
    beq L_020270e4
    ldr r1, =data_0206bad8
    ldr r0, =data_0206bad4
    ldr r2, =data_0206e690
    ldrb r8, [r1, #0x2]
    ldrb r7, [r0, #0x2]
    mov r1, r4
    ldr r9, [r2, #0x0]
    mov r0, #0x2
    bl func_0202bff4
    mov r1, #0x0
    str r1, [sp, #0x0]
    ldr ip, =data_020b8be4
    str r1, [sp, #0x4]
    mov r1, r7
    mov r2, r8
    mov r3, r9
    str ip, [sp, #0x8]
    bl func_0203d740
    ldr r1, =data_0206bad8
    ldr r0, =data_0206bad4
    ldr r2, =data_0206e690
    ldrb r7, [r1, #0x3]
    ldrb r8, [r0, #0x3]
    mov r1, r4
    ldr r9, [r2, #0x0]
    mov r0, #0x1
    bl func_0202bff4
    mov r1, r8
    mov r2, r7
    mov r3, r9
    mov r7, #0x0
    str r7, [sp, #0x0]
    str r7, [sp, #0x4]
    ldr r7, =data_020b8be4
    str r7, [sp, #0x8]
    bl func_0203d740
L_020270e4:
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x1c]
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_020272d8
L_020270f8:
    b L_02027108
    b L_0202716c
    b L_02027260
    b L_020271e4
L_02027108:
    mov r0, #0x4e
    bl func_0204221c
    mov r2, r0
    ldrh r3, [r6, #0x6]
    ldr r0, =data_02087dd0
    ldr r1, =data_0206c30c
    bl func_0204f490
    mov r1, #0x0
    str r1, [sp, #0x0]
    ldr r0, =data_020b8be4
    str r1, [sp, #0x4]
    ldr r1, =data_0206bad4
    str r0, [sp, #0x8]
    ldr r2, =data_0206bad8
    ldr r0, =data_0206e690
    ldrb r1, [r1, #0x0]
    ldrb r2, [r2, #0x0]
    ldr r3, [r0, #0x0]
    ldr r0, =data_02087dd0
    bl func_0203d740
    ldrh r0, [r6, #0x6]
    mov r1, r4
    bl func_0202c1e4
    mov r5, r0
    b L_020272d8
L_0202716c:
    mov r0, #0x4e
    bl func_0204221c
    ldr r1, =data_0206b918
    mov r5, r0
    ldr r0, [r1, #0x4]
    and r0, r0, #0xff
    bl func_0202cc34
    mov r3, r0
    ldr r0, =data_02087dd0
    ldr r1, =data_0206c314
    mov r2, r5
    bl func_0204f490
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8be4
    ldr r0, =data_02087dd0
    str r1, [sp, #0x8]
    ldr r1, =data_0206bad4
    ldr r2, =data_0206bad8
    ldrb r1, [r1, #0x0]
    ldrb r2, [r2, #0x0]
    ldr r3, =data_0206e690
    ldr r3, [r3, #0x0]
    bl func_0203d740
    ldrh r0, [r6, #0x0]
    mov r1, r4
    bl func_0202c1e4
    mov r5, r0
    b L_020272d8
L_020271e4:
    mov r0, #0x4e
    bl func_0204221c
    ldr r1, =data_0206b918
    mov r5, r0
    ldr r1, [r1, #0x4]
    mov r0, #0x3
    and r1, r1, #0xff
    bl func_0202cc54
    mov r3, r0
    ldr r0, =data_02087dd0
    ldr r1, =data_0206c314
    mov r2, r5
    bl func_0204f490
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8be4
    ldr r0, =data_02087dd0
    str r1, [sp, #0x8]
    ldr r1, =data_0206bad4
    ldr r2, =data_0206bad8
    ldrb r1, [r1, #0x0]
    ldrb r2, [r2, #0x0]
    ldr r3, =data_0206e690
    ldr r3, [r3, #0x0]
    bl func_0203d740
    ldrh r0, [r6, #0x2]
    mov r1, r4
    bl func_0202c1e4
    mov r5, r0
    b L_020272d8
L_02027260:
    mov r0, #0x4e
    bl func_0204221c
    ldr r1, =data_0206b918
    mov r5, r0
    ldr r1, [r1, #0x4]
    mov r0, #0x4
    and r1, r1, #0xff
    bl func_0202cc54
    mov r3, r0
    ldr r0, =data_02087dd0
    ldr r1, =data_0206c314
    mov r2, r5
    bl func_0204f490
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r1, =data_020b8be4
    ldr r0, =data_02087dd0
    str r1, [sp, #0x8]
    ldr r1, =data_0206bad4
    ldr r2, =data_0206bad8
    ldrb r1, [r1, #0x0]
    ldrb r2, [r2, #0x0]
    ldr r3, =data_0206e690
    ldr r3, [r3, #0x0]
    bl func_0203d740
    ldrh r0, [r6, #0x4]
    mov r1, r4
    bl func_0202c1e4
    mov r5, r0
L_020272d8:
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x1c]
    cmp r0, #0x3
    beq L_02027308
    cmp r0, #0x1
    bne L_02027330
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    cmp r0, #0x3
    cmpne r0, #0x4
    cmpne r0, #0x0
    bne L_02027330
L_02027308:
    mov r0, #0x23
    mov r1, #0x26
    mov r2, #0x3c
    bl func_0203c24c
    mov r0, #0x1f
    mov r1, #0x26
    mov r2, #0xc0
    bl func_0203c24c
    mov r6, #0x0
    b L_02027354
L_02027330:
    mov r0, #0x1f
    mov r1, #0x26
    mov r2, #0x3c
    bl func_0203c24c
    mov r0, #0x23
    mov r1, #0x26
    mov r2, #0x1e
    bl func_0203c24c
    mov r6, #0x1
L_02027354:
    cmp r5, #0x3
    bne L_02027378
    cmp r6, #0x0
    beq L_02027378
    mov r0, #0x20
    mov r1, #0x26
    mov r2, #0x3c
    bl func_0203c24c
    b L_02027388
L_02027378:
    mov r0, #0x20
    mov r1, #0x26
    mov r2, #0xc0
    bl func_0203c24c
L_02027388:
    ldr r0, =data_0206b918
    ldr r2, =data_0206b9d4
    ldr r0, [r0, #0x4]
    sub r1, r4, #0x1
    add r0, r2, r0, lsl #0x2
    ldrb r0, [r1, r0]
    bl func_0201d10c
    cmp r0, #0x0
    mov r0, #0x24
    mov r1, #0x26
    beq L_020273d4
    cmp r6, #0x0
    beq L_020273c8
    mov r2, #0x1e
    bl func_0203c24c
    b L_020273dc
L_020273c8:
    mov r2, #0x3c
    bl func_0203c24c
    b L_020273dc
L_020273d4:
    mov r2, #0xc0
    bl func_0203c24c
L_020273dc:
    ldr r2, =data_020877d0
    ldr r0, =data_0206b918
    ldr r3, [r2, #0x1c]
    add r1, r0, #0x1
    str r3, [r2, #0x24]
    mov r0, #0xff
    swpb r0, r0, [r1]
L_020273f8:
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x28]
    cmp r0, #0x5
    bne L_02027674
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r4, =data_020b8be4
    mov r0, #0x5
    mov r1, #0x3
    mov r2, #0xfa
    mov r3, #0x19
    str r4, [sp, #0x8]
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r2, r4
    stmib sp, {r0, r2}
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x0]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r2, r4
    stmib sp, {r0, r2}
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x1]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r1, r4
    stmib sp, {r0, r1}
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x2]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    mov r2, r4
    str r2, [sp, #0x8]
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x3]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x1f
    mov r1, #0x26
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x20
    mov r1, #0x26
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x23
    mov r1, #0x26
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x24
    mov r1, #0x26
    mov r2, #0xc0
    bl func_0203c24c
    b L_02027674
L_02027538:
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    ldr r4, =data_020b8be4
    mov r0, #0x5
    mov r1, #0x3
    mov r2, #0xfa
    mov r3, #0x19
    str r4, [sp, #0x8]
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r2, r4
    stmib sp, {r0, r2}
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x0]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r2, r4
    stmib sp, {r0, r2}
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x1]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    mov r1, r4
    stmib sp, {r0, r1}
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x2]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x0
    str r0, [sp, #0x0]
    str r0, [sp, #0x4]
    mov r2, r4
    str r2, [sp, #0x8]
    ldr r1, =data_0206bad8
    mov r2, #0xff
    ldrb r1, [r1, #0x3]
    mov r3, #0x19
    sub r1, r1, #0x5
    mov r1, r1, lsl #0x10
    mov r1, r1, lsr #0x10
    bl func_0203d0d8
    mov r0, #0x1f
    mov r1, #0x26
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x20
    mov r1, #0x26
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x23
    mov r1, #0x26
    mov r2, #0xc0
    bl func_0203c24c
    mov r0, #0x24
    mov r1, #0x26
    mov r2, #0xc0
    bl func_0203c24c
    ldr r0, =data_0206b918
    mov r2, #0xff
    add r1, r0, #0x1
    swpb r0, r2, [r1]
L_02027674:
    mov r0, #0x0
    bl func_0203b96c
    add sp, sp, #0xc
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, pc}
}
// clang-format on
