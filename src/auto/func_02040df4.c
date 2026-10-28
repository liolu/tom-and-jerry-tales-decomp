#include "m2c.h"

extern char data_0206dbc0[];
extern char data_0206dbd4[];
extern char data_0206dbdc[];
extern char data_0206dbe4[];
extern char data_0206dbf4[];
extern char data_0206dbfc[];
extern char data_0206dc04[];
extern char data_0206dc18[];
extern char data_0206dc24[];
extern char data_0206dc2c[];
extern char data_0206dc34[];
extern char data_0206dc3c[];
extern char data_0206dc58[];
extern char data_0206dc60[];
extern char data_0206dc68[];
extern char data_0206dc74[];
extern char data_021a7234[];
void func_0204089c(void);
void func_02040a08(void);
void func_02040d5c(void);
void func_02041420(void);
void func_020415b8(void);
void func_02041654(void);
void func_020421a8(void);
void sprintf(void);
void strcmp(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02040df4(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x108
    mov r7, #0x0
    str r7, [sp, #0x0]
    ldrsb r3, [r0, #0x0]
    mov r9, r1
    mov r8, r2
    cmp r3, #0x9
    mov r6, #0x1
    bne L_02040e2c
L_02040e1c:
    ldrsb r1, [r0, #0x1]!
    add r6, r6, #0x1
    cmp r1, #0x9
    beq L_02040e1c
L_02040e2c:
    ldr r5, =data_0206dc60
    add r10, sp, #0x0
    add r4, sp, #0x90
    mov r11, #0x0
L_02040e3c:
    mov r1, r5
    mov r2, r10
    bl func_020421a8
    str r0, [r4, r7, lsl #0x2]
    add r7, r7, #0x1
    add r0, r4, r7, lsl #0x2
    ldr r1, [r0, #-0x4]
    mov r0, r11
    cmp r1, #0x0
    beq L_02040e6c
    cmp r7, #0x1e
    blt L_02040e3c
L_02040e6c:
    add r0, sp, #0x90
    sub r1, r7, #0x1
    ldr r0, [r0, r1, lsl #0x2]
    cmp r0, #0x0
    subeq r7, r7, #0x1
    cmp r7, #0x0
    addeq sp, sp, #0x108
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    cmp r7, #0x0
    mov r2, #0x0
    ble L_02040ebc
    add r1, sp, #0x90
L_02040e9c:
    ldr r0, [r1, r2, lsl #0x2]
    ldrsb r0, [r0, #0x0]
    cmp r0, #0x23
    moveq r7, r2
    beq L_02040ebc
    add r2, r2, #0x1
    cmp r2, r7
    blt L_02040e9c
L_02040ebc:
    cmp r7, #0x0
    addeq sp, sp, #0x108
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldr r0, =data_021a7234
    ldr r0, [r0, #0xc]
    cmp r6, r0
    bgt L_02040ee8
    mov r0, r6
    mov r1, r9
    mov r2, r8
    bl func_02041654
L_02040ee8:
    ldr r4, [sp, #0x90]
    ldr r1, =data_0206dc68
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0x0
    beq L_02041010
    ldr r1, =data_0206dbf4
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0x2
    beq L_02041010
    ldr r1, =data_0206dbdc
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0x3
    beq L_02041010
    ldr r1, =data_0206dc74
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0x1
    beq L_02041010
    ldr r1, =data_0206dbd4
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0x5
    beq L_02041010
    ldr r1, =data_0206dbe4
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0x4
    beq L_02041010
    ldr r1, =data_0206dc04
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0x6
    beq L_02041010
    ldr r1, =data_0206dc24
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0x7
    beq L_02041010
    ldr r1, =data_0206dbfc
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0x8
    beq L_02041010
    ldr r1, =data_0206dc2c
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0x9
    beq L_02041010
    ldr r1, =data_0206dc18
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    moveq r0, #0xa
    beq L_02041010
    ldr r1, =data_0206dc34
    mov r0, r4
    bl strcmp
    cmp r0, #0x0
    addne sp, sp, #0x108
    moveq r0, #0xb
    ldmneia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02041010:
    cmp r0, #0xb
    addls pc, pc, r0, lsl #0x2
    b L_02041338
L_0204101c:
    b L_0204104c
    b L_0204117c
    b L_0204107c
    b L_020410fc
    b L_020411ac
    b L_020411dc
    b L_0204120c
    b L_020412a8
    b L_020412dc
    b L_02041240
    b L_02041274
    b L_0204130c
L_0204104c:
    ldr r1, [sp, #0x98]
    ldr r0, [sp, #0x94]
    mov r2, r9
    mov r3, r8
    str r1, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0204107c:
    ldr r1, [sp, #0x94]
    ldr r0, =data_0206dbf4
    mov r2, r9
    mov r3, r8
    str r1, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
    mov r4, #0x0
    ldr r2, [sp, #0x94]
    add r3, sp, #0x44
    mov r1, r4
L_020410b4:
    ldrsb r0, [r2, #0x0]
    add r4, r4, #0x1
    add r2, r2, #0x1
    swpb r0, r0, [r3]
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x2e
    swpeqb r0, r1, [r3]
    cmp r4, #0x10
    add r3, r3, #0x1
    blt L_020410b4
    ldr r0, [sp, #0x94]
    mov r3, #0x0
    mov r1, r9
    mov r2, r8
    strb r3, [sp, #0x55]
    bl func_02040a08
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020410fc:
    ldr r1, [sp, #0x94]
    ldr r0, =data_0206dbdc
    mov r2, r9
    mov r3, r8
    str r1, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
    mov r4, #0x0
    ldr r2, [sp, #0x94]
    add r3, sp, #0x44
    mov r1, r4
L_02041134:
    ldrsb r0, [r2, #0x0]
    add r4, r4, #0x1
    add r2, r2, #0x1
    swpb r0, r0, [r3]
    ldrsb r0, [r3, #0x0]
    cmp r0, #0x2e
    swpeqb r0, r1, [r3]
    cmp r4, #0x10
    add r3, r3, #0x1
    blt L_02041134
    mov r3, #0x0
    add r0, sp, #0x44
    mov r1, r9
    mov r2, r8
    strb r3, [sp, #0x55]
    bl func_0204089c
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0204117c:
    ldr r0, =data_0206dbc0
    ldr r3, [sp, #0x94]
    ldr r2, [r0, #0x0]
    ldr r1, =data_0206dc58
    add r0, sp, #0x4
    bl sprintf
    add r0, sp, #0x4
    mov r1, r9
    mov r2, r8
    bl func_02040d5c
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020411ac:
    ldr r1, [sp, #0x94]
    ldr r0, =data_0206dbe4
    mov r2, r9
    mov r3, r8
    str r1, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020411dc:
    ldr r1, [sp, #0x94]
    ldr r0, =data_0206dbd4
    mov r2, r9
    mov r3, r8
    str r1, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0204120c:
    ldr r4, =data_0206dc3c
    ldr r0, =data_0206dc04
    add r1, sp, #0x94
    mov r2, r9
    mov r3, r8
    str r4, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02041240:
    ldr r4, =data_0206dc3c
    ldr r0, =data_0206dc2c
    add r1, sp, #0x94
    mov r2, r9
    mov r3, r8
    str r4, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_02041274:
    ldr r4, =data_0206dc3c
    ldr r0, =data_0206dc18
    add r1, sp, #0x94
    mov r2, r9
    mov r3, r8
    str r4, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020412a8:
    ldr r4, =data_0206dc3c
    ldr r0, =data_0206dc24
    add r1, sp, #0x94
    mov r2, r9
    mov r3, r8
    str r4, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_020412dc:
    ldr r1, [sp, #0x94]
    ldr r0, =data_0206dbfc
    mov r2, r9
    mov r3, r8
    str r1, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
L_0204130c:
    ldr r4, =data_0206dc3c
    ldr r0, =data_0206dc34
    ldr r1, [sp, #0x94]
    mov r2, r9
    mov r3, r8
    str r4, [sp, #0x84]
    str r0, [sp, #0x88]
    bl func_02041420
    str r0, [sp, #0x8c]
    add r0, sp, #0x84
    bl func_020415b8
L_02041338:
    add sp, sp, #0x108
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
