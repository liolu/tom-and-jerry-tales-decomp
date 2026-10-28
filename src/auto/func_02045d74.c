#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02044df4();
extern void func_020591c0();
extern void STD_GetStringLength();
extern void STD_CompareString();
extern char __upper_mapC[];
extern char data_0206de58[];
extern char data_021a90a4[];
extern char data_021a910c[];
extern char data_021a9110[];
extern char data_021a9b18[];
extern char data_021ac118[];
// clang-format off
asm void func_02045d74(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x10c
    ldr r2, =data_021a90a4
    ldr r1, =data_0206de58
    ldr r8, [r2, #0xa6c]
    ldr r2, [r2, #0x34]
    mov r10, r0
    str r2, [sp, #0x0]
    bl STD_CompareString
    cmp r0, #0x0
    addeq sp, sp, #0x10c
    ldmeqfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r0, r10
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0xcb
    mov r1, r10
    mov r2, #0x40
    mov r7, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r7
    ble L_02045e14
    ldr r1, =__upper_mapC
    add r3, sp, #0xcb
L_02045dd8:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02045df0
    cmp r0, #0x80
    bge L_02045df0
    ldrb r0, [r1, r0]
L_02045df0:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r7, lsl #0x6
    add r0, r0, r7, lsl #0x10
    sub r0, r0, r7
    and r7, r0, #0x7f
    blt L_02045dd8
L_02045e14:
    mov r6, r7
    mov r5, #0x0
    ldr r4, =data_021a9b18
    mov r9, #0x4c
    b L_02045e3c
L_02045e28:
    add r6, r6, #0x1
    cmp r6, #0x80
    movge r6, r5
    cmp r6, r7
    beq L_02045e64
L_02045e3c:
    mla r1, r6, r9, r4
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02045e28
    adds r0, r1, #0x9
    beq L_02045e28
    mov r1, r10
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02045e28
L_02045e64:
    mov r6, #0x0
    cmp r8, #0x0
    sub r7, r6, #0x1
    ble L_02045ef8
    ldr r5, =data_021a910c
    ldr r11, =data_021a9110
    ldr r4, =data_021a90a4
L_02045e80:
    ldr r0, [r4, #0xa6c]
    cmp r0, #0x0
    moveq r9, #0x0
    beq L_02045ed0
    ldr r2, [r4, #0xa70]
    add r7, r7, #0x1
    cmp r7, r2
    bge L_02045ecc
    mov r0, #0x50
    mla r1, r7, r0, r5
L_02045ea8:
    ldrb r0, [r1, #0x50]
    cmp r0, #0x0
    moveq r0, #0x50
    mlaeq r9, r7, r0, r11
    beq L_02045ed0
    add r1, r1, #0x50
    add r7, r7, #0x1
    cmp r7, r2
    blt L_02045ea8
L_02045ecc:
    mov r9, #0x0
L_02045ed0:
    mov r1, r10
    add r0, r9, #0x2c
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02045eec
    mov r0, r9
    bl func_02044df4
L_02045eec:
    add r6, r6, #0x1
    cmp r6, r8
    blt L_02045e80
L_02045ef8:
    mov r0, #0x0
    str r0, [sp, #0x4]
    ldr r0, [sp, #0x0]
    cmp r0, #0x0
    ldr r0, [sp, #0x4]
    addle sp, sp, #0x10c
    sub r5, r0, #0x1
    ldmlefd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02045f18:
    ldr r0, =data_021a90a4
    ldr r1, [r0, #0x34]
    cmp r1, #0x0
    moveq r6, #0x0
    beq L_02045f70
    ldr r2, [r0, #0x38]
    add r5, r5, #0x1
    cmp r5, r2
    bge L_02045f6c
    ldr r3, [r0, #0x2c]
    mov r0, #0xa4
    mla r1, r5, r0, r3
L_02045f48:
    ldrb r0, [r1, #0xa0]
    cmp r0, #0x0
    moveq r0, #0xa4
    mlaeq r6, r5, r0, r3
    beq L_02045f70
    add r5, r5, #0x1
    cmp r5, r2
    add r1, r1, #0xa4
    blt L_02045f48
L_02045f6c:
    mov r6, #0x0
L_02045f70:
    cmp r6, #0x0
    beq L_02046364
    mov r0, r6
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x8a
    mov r1, r6
    mov r2, #0x40
    mov r9, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r9
    ble L_02045fe8
    ldr r1, =__upper_mapC
    add r3, sp, #0x8a
L_02045fac:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_02045fc4
    cmp r0, #0x80
    bge L_02045fc4
    ldrb r0, [r1, r0]
L_02045fc4:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r9, lsl #0x6
    add r0, r0, r9, lsl #0x10
    sub r0, r0, r9
    and r9, r0, #0x7f
    blt L_02045fac
L_02045fe8:
    mov r8, r9
    mov r11, #0x0
    ldr r7, =data_021a9b18
    mov r4, #0x4c
    b L_02046014
L_02045ffc:
    add r8, r8, #0x1
    cmp r8, #0x80
    movge r8, r11
    cmp r8, r9
    mvneq r8, #0x0
    beq L_0204603c
L_02046014:
    mla r1, r8, r4, r7
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02045ffc
    adds r0, r1, #0x9
    beq L_02045ffc
    mov r1, r6
    bl STD_CompareString
    cmp r0, #0x0
    bne L_02045ffc
L_0204603c:
    cmp r8, #0x0
    ldrge r1, =data_021a9b18
    movlt r9, #0x0
    movge r0, #0x4c
    mlage r9, r8, r0, r1
    cmp r9, #0x0
    beq L_02046364
    ldr r0, [r9, #0x4]
    cmp r0, #0x0
    bne L_02046364
    mov r0, r10
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x49
    mov r1, r10
    mov r2, #0x40
    mov r8, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r1, r8
    ble L_020460d4
    ldr r0, =__upper_mapC
    add r2, sp, #0x49
L_02046098:
    ldrsb r3, [r2, #0x0]
    cmp r3, #0x0
    blt L_020460b0
    cmp r3, #0x80
    bge L_020460b0
    ldrb r3, [r0, r3]
L_020460b0:
    swpb r3, r3, [r2]
    ldrsb r3, [r2], #0x1
    add r1, r1, #0x1
    cmp r1, r4
    add r3, r3, r8, lsl #0x6
    add r3, r3, r8, lsl #0x10
    sub r3, r3, r8
    and r8, r3, #0x7f
    blt L_02046098
L_020460d4:
    mov r7, r8
    ldr r4, =data_021a9b18
    mov r11, #0x4c
    b L_020460fc
L_020460e4:
    add r7, r7, #0x1
    cmp r7, #0x80
    movge r7, #0x0
    cmp r7, r8
    mvneq r7, #0x0
    beq L_02046124
L_020460fc:
    mla r1, r7, r11, r4
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_020460e4
    adds r0, r1, #0x9
    beq L_020460e4
    mov r1, r10
    bl STD_CompareString
    cmp r0, #0x0
    bne L_020460e4
L_02046124:
    cmp r7, #0x0
    movlt r1, #0x0
    ldrge r1, =data_021a9b18
    movge r0, #0x4c
    mlage r1, r7, r0, r1
    ldr r0, [r6, #0x9c]
    cmp r0, r1
    bne L_02046364
    ldr r1, [r9, #0x0]
    ldrb r0, [r1, #0x0]
    cmp r0, #0x0
    beq L_02046364
    add r1, r1, #0x8
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, =data_021ac118
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_02046274
    mov r0, r6
    bl STD_GetStringLength
    mov r4, r0
    add r0, sp, #0x8
    mov r1, r6
    mov r2, #0x40
    mov r9, #0x0
    bl func_020591c0
    cmp r4, #0x0
    mov r2, r9
    ble L_020461e0
    ldr r1, =__upper_mapC
    add r3, sp, #0x8
L_020461a4:
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x0
    blt L_020461bc
    cmp r0, #0x80
    bge L_020461bc
    ldrb r0, [r1, r0]
L_020461bc:
    swpb r0, r0, [r3]
    ldrsb r0, [r3], #0x1
    add r2, r2, #0x1
    cmp r2, r4
    add r0, r0, r9, lsl #0x6
    add r0, r0, r9, lsl #0x10
    sub r0, r0, r9
    and r9, r0, #0x7f
    blt L_020461a4
L_020461e0:
    mov r8, r9
    mov r11, #0x0
    ldr r7, =data_021a9b18
    mov r4, #0x4c
    b L_0204620c
L_020461f4:
    add r8, r8, #0x1
    cmp r8, #0x80
    movge r8, r11
    cmp r8, r9
    mvneq r8, #0x0
    beq L_02046234
L_0204620c:
    mla r1, r8, r4, r7
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_020461f4
    adds r0, r1, #0x9
    beq L_020461f4
    mov r1, r6
    bl STD_CompareString
    cmp r0, #0x0
    bne L_020461f4
L_02046234:
    cmp r8, #0x0
    blt L_02046274
    ldr r1, =data_021a9b18
    mov r0, #0x4c
    mla r1, r8, r0, r1
    ldrb r0, [r1, #0x8]
    cmp r0, #0x0
    beq L_02046274
    add r1, r1, #0x8
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldr r0, =data_021ac118
    ldr r0, [r0, #0x0]
    sub r1, r0, #0x1
    ldr r0, =data_021ac118
    str r1, [r0, #0x0]
L_02046274:
    mov r4, #0x0
    str r4, [r6, #0x54]
    str r4, [r6, #0x58]
    str r4, [r6, #0x6c]
    str r4, [r6, #0x70]
    str r4, [r6, #0x84]
    ldr r0, =data_021a90a4
    str r4, [r6, #0x88]
    ldr r9, [r0, #0x34]
    sub r7, r4, #0x1
    cmp r9, #0x0
    ble L_02046364
    ldr ip, [r0, #0x2c]
    ldr r11, [r0, #0x38]
    mov r1, #0xa4
    mov lr, r4
    mov r3, r4
    mov r0, r1
L_020462bc:
    cmp r9, #0x0
    moveq r2, r3
    beq L_020462fc
    add r7, r7, #0x1
    cmp r7, r11
    bge L_020462f8
    mla r8, r7, r1, ip
L_020462d8:
    ldrb r2, [r8, #0xa0]
    cmp r2, #0x0
    mlaeq r2, r7, r0, ip
    beq L_020462fc
    add r8, r8, #0xa4
    add r7, r7, #0x1
    cmp r7, r11
    blt L_020462d8
L_020462f8:
    mov r2, lr
L_020462fc:
    cmp r2, r6
    bne L_02046358
    cmp r7, r11
    bgt L_02046364
    cmp r9, #0x0
    beq L_02046364
    mov r0, #0xa4
    mul r3, r7, r0
    add r0, ip, r3
    ldrb r0, [r0, #0xa0]
    cmp r0, #0x0
    bne L_0204633c
    ldr r0, =data_021a90a4
    ldr r1, [r0, #0x34]
    sub r1, r1, #0x1
    str r1, [r0, #0x34]
L_0204633c:
    ldr r0, =data_021a90a4
    mov r2, #0x1
    ldr r0, [r0, #0x2c]
    add r0, r0, r3
    add r1, r0, #0xa0
    swpb r0, r2, [r1]
    b L_02046364
L_02046358:
    add r4, r4, #0x1
    cmp r4, r9
    blt L_020462bc
L_02046364:
    ldr r0, [sp, #0x4]
    add r1, r0, #0x1
    ldr r0, [sp, #0x0]
    str r1, [sp, #0x4]
    cmp r1, r0
    blt L_02045f18
    add sp, sp, #0x10c
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
