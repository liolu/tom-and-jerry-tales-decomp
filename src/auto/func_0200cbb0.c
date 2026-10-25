#include "m2c.h"

void func_0200cab0(void);
void func_0200cb30(void);
void func_0200d090(void);
void func_0201631c(void);
void func_0201666c(void);
void func_020168f8(void);
void func_020222b8(void);
void func_020306fc(void);
void func_0203d0d8(void);
void func_0203dea8(void);
void func_0203deb8(void);
void func_02040228(void);
void func_0204f490(void);
extern char data_0206a5c8[];
extern char data_0206a6c0[];
extern char data_0206a6c8[];
extern char data_0206a6d0[];
extern char data_0206a6d8[];
extern char data_0206e6d4[];
extern char data_02086dac[];
extern char data_02086dbc[];
extern char data_020b8b44[];
// clang-format off
asm void func_0200cbb0(void) {
    stmdb sp!, {r4, r5, lr}
    sub sp, sp, #0xc
    bl func_02040228
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    beq L_0200ccfc
    ldr r0, =data_02086dac
    mov r4, #0x0
    ldrsb r3, [r0, #0x3]
    cmp r3, #0x8
    addls pc, pc, r3, lsl #0x2
    b L_0200ccd4
L_0200cbe4:
    b L_0200cc08
    b L_0200cc30
    b L_0200cc30
    b L_0200cc50
    b L_0200cc64
    b L_0200cc7c
    b L_0200ccd4
    b L_0200cca0
    b L_0200ccc0
L_0200cc08:
    ldrsb r2, [r0, #0x1]
    ldr r1, =data_0206a5c8
    ldr r0, =data_02086dbc
    ldr r5, [r1, r2, lsl #0x2]
    ldr r1, =data_0206a6c0
    mov r2, r4
    str r5, [sp, #0x0]
    bl func_0204f490
    mov r4, #0x1
    b L_0200ccd4
L_0200cc30:
    ldrsb r5, [r0, #0x1]
    ldr r0, =data_02086dbc
    ldr r1, =data_0206a6c8
    mov r2, r4
    str r5, [sp, #0x0]
    bl func_0204f490
    mov r4, #0x1
    b L_0200ccd4
L_0200cc50:
    bl func_0200d090
    ldr r1, =data_02086dac
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_0200ccd4
L_0200cc64:
    ldr r0, =data_02086dbc
    ldr r1, =data_0206a6d0
    mov r2, r4
    bl func_0204f490
    mov r4, #0x1
    b L_0200ccd4
L_0200cc7c:
    str r4, [sp, #0x0]
    ldrsb r5, [r0, #0x1]
    ldr r0, =data_02086dbc
    ldr r1, =data_0206a6d8
    mov r2, r4
    str r5, [sp, #0x4]
    bl func_0204f490
    mov r4, #0x1
    b L_0200ccd4
L_0200cca0:
    ldrsb r5, [r0, #0x1]
    ldr r0, =data_02086dbc
    ldr r1, =data_0206a6c8
    mov r2, r4
    str r5, [sp, #0x0]
    bl func_0204f490
    mov r4, #0x1
    b L_0200ccd4
L_0200ccc0:
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x0]
    bl func_020168f8
    bl func_0201666c
    bl func_0201631c
L_0200ccd4:
    cmp r4, #0x0
    beq L_0200ce5c
    mvn r0, #0xf
    mov r1, #0x8
    mov r2, #0x3
    bl func_020222b8
    ldr r1, =data_02086dac
    mov r0, #0x7
    swpb r0, r0, [r1]
    b L_0200ce5c
L_0200ccfc:
    mov r0, #0x4
    bl func_020306fc
    cmp r0, #0x0
    bne L_0200cd1c
    mov r0, #0x5
    bl func_020306fc
    cmp r0, #0x0
    beq L_0200cd3c
L_0200cd1c:
    ldr r0, =data_02086dac
    ldr r0, [r0, #0xc]
    cmp r0, #0x0
    moveq r1, #0x1
    ldr r0, =data_02086dac
    movne r1, #0x0
    str r1, [r0, #0xc]
    b L_0200ce5c
L_0200cd3c:
    mov r0, #0x7
    bl func_020306fc
    cmp r0, #0x0
    beq L_0200cddc
    ldr r2, =data_02086dac
    ldr r0, [r2, #0xc]
    cmp r0, #0x0
    beq L_0200cd9c
    ldrsb r0, [r2, #0x3]
    add r1, r2, #0x3
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrsb r0, [r2, #0x3]
    cmp r0, #0x9
    movhs r0, #0x0
    swphsb r0, r0, [r1]
    ldr r0, =data_02086dac
    ldrsb r0, [r0, #0x3]
    cmp r0, #0x2
    bne L_0200cd94
    bl func_0200cb30
    b L_0200ce5c
L_0200cd94:
    bl func_0200cab0
    b L_0200ce5c
L_0200cd9c:
    ldrsb r0, [r2, #0x1]
    add r1, r2, #0x1
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrsb r0, [r2, #0x3]
    cmp r0, #0x2
    ldrsb r0, [r2, #0x1]
    bne L_0200cdcc
    cmp r0, #0x62
    movge r0, #0x0
    swpgeb r0, r0, [r1]
    b L_0200ce5c
L_0200cdcc:
    cmp r0, #0x9
    movhs r0, #0x0
    swphsb r0, r0, [r1]
    b L_0200ce5c
L_0200cddc:
    mov r0, #0x6
    bl func_020306fc
    cmp r0, #0x0
    beq L_0200ce5c
    ldr r2, =data_02086dac
    ldr r0, [r2, #0xc]
    cmp r0, #0x0
    beq L_0200ce20
    ldrsb r0, [r2, #0x3]
    add r1, r2, #0x3
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrsb r0, [r2, #0x3]
    cmp r0, #0x0
    movlt r0, #0x8
    swpltb r0, r0, [r1]
    b L_0200ce5c
L_0200ce20:
    ldrsb r0, [r2, #0x1]
    add r1, r2, #0x1
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrsb r0, [r2, #0x3]
    cmp r0, #0x2
    ldrsb r0, [r2, #0x1]
    bne L_0200ce50
    cmp r0, #0x0
    movlt r0, #0x61
    swpltb r0, r0, [r1]
    b L_0200ce5c
L_0200ce50:
    cmp r0, #0x0
    movlt r0, #0x8
    swpltb r0, r0, [r1]
L_0200ce5c:
    mov r0, #0x6
    bl func_020306fc
    cmp r0, #0x0
    bne L_0200ce80
    mov r0, #0x7
    bl func_020306fc
    cmp r0, #0x0
    addeq sp, sp, #0xc
    ldmeqia sp!, {r4, r5, pc}
L_0200ce80:
    bl func_0203dea8
    mov r5, r0
    bl func_0203deb8
    str r0, [sp, #0x0]
    ldr r2, =data_020b8b44
    mov r1, #0x28
    mla r4, r5, r1, r2
    mov r0, #0x0
    mov r1, r0
    mov r2, #0x80
    mov r3, #0x96
    stmib sp, {r0, r4}
    bl func_0203d0d8
    ldr r0, =data_02086dac
    ldrsb r0, [r0, #0x3]
    cmp r0, #0x2
    bne L_0200ced0
    bl func_0200cb30
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, pc}
L_0200ced0:
    bl func_0200cab0
    add sp, sp, #0xc
    ldmia sp!, {r4, r5, pc}
}
// clang-format on
