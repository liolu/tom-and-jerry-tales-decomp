#include "m2c.h"

extern char data_02064104[];
extern char data_02064348[];
extern char data_0206a8c0[];
extern char data_0206ea14[];
extern char data_02086dfc[];
extern char data_02086e0c[];
extern char data_020b8b44[];
void func_020016a4(void);
void func_02003058(void);
void func_02003738(void);
void func_02003e84(void);
void func_020222b8(void);
void func_020306c0(void);
void func_020306fc(void);
void func_0203d098(void);
void func_0203d740(void);
void func_0203d8d8(void);
void func_0203dea8(void);
void func_0203deb8(void);
void func_0203dec8(void);
void func_0203ded8(void);
void func_0203ff1c(void);
void func_02040094(void);
void func_02040228(void);
void func_0204b08c(void);
void func_0204f490(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0200dd68(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0xc
    bl func_02040228
    mov r4, r0
    mov r0, #0x3
    bl func_020306fc
    cmp r0, #0x0
    beq L_0200ddb0
    ldr r0, =data_02086e0c
    ldr r1, =data_0206a8c0
    mov r2, #0x1
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    ldr r2, =data_02086e0c
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
L_0200ddb0:
    bl func_020016a4
    ldr r3, =data_02086dfc
    ldr r0, [r3, #0x8]
    cmp r0, #0x0
    beq L_0200ddd8
    mov r0, #0x0
    mov r1, #0x8
    mov r2, #0x3
    str r0, [r3, #0x8]
    bl func_020222b8
L_0200ddd8:
    mov r0, #0x8
    bl func_020306fc
    cmp r0, #0x0
    beq L_0200de0c
    ldr r1, =data_02086dfc
    ldrsb r0, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrsb r0, [r1, #0x0]
    cmp r0, #0x37
    moveq r0, #0x0
    swpeqb r0, r0, [r1]
    b L_0200de3c
L_0200de0c:
    mov r0, #0x9
    bl func_020306fc
    cmp r0, #0x0
    beq L_0200de3c
    ldr r1, =data_02086dfc
    ldrsb r0, [r1, #0x0]
    sub r0, r0, #0x1
    swpb r0, r0, [r1]
    ldrsb r0, [r1, #0x0]
    cmp r0, #0x0
    movlt r0, #0x36
    swpltb r0, r0, [r1]
L_0200de3c:
    mov r0, #0x9
    bl func_020306fc
    cmp r0, #0x0
    bne L_0200de5c
    mov r0, #0x8
    bl func_020306fc
    cmp r0, #0x0
    beq L_0200df0c
L_0200de5c:
    ldr r0, =data_02086dfc
    ldr r2, =data_0206ea14
    ldrsb r1, [r0, #0x0]
    ldr r0, [r2, #0x0]
    mov r2, #0x1
    bl func_02003738
    bl func_0203dea8
    ldr r2, =data_020b8b44
    mov r1, #0x28
    mla r0, r1, r0, r2
    bl func_0203d098
    mov r3, #0x0
    ldr r0, =data_02086dfc
    str r3, [sp, #0x0]
    ldr r1, =data_0206ea14
    ldrsb r2, [r0, #0x0]
    ldr r1, [r1, #0x0]
    mov r0, #0x2
    bl func_02003058
    mov r5, r0
    bl func_0203dea8
    mov r4, r0
    bl func_0203dec8
    mov r8, r0
    bl func_0203deb8
    mov r7, r0
    bl func_0203ded8
    mov r6, r0
    mov r0, r5
    mov r1, r6
    bl func_0203d8d8
    mov r0, r0, asr #0x1
    rsb r0, r0, #0x80
    mov r0, r0, lsl #0x10
    mov r1, r0, lsr #0x10
    mov r0, r5
    ldr r5, =data_020b8b44
    mov r2, #0x28
    mla r2, r4, r2, r5
    stmia sp, {r7, r8}
    str r2, [sp, #0x8]
    mov r3, r6
    mov r2, #0xb0
    bl func_0203d740
L_0200df0c:
    mov r0, #0x4
    bl func_020306c0
    cmp r0, #0x0
    beq L_0200df2c
    ldr r0, =data_02086dfc
    ldrh r1, [r0, #0x2]
    add r1, r1, #0x100
    strh r1, [r0, #0x2]
L_0200df2c:
    mov r0, #0x5
    bl func_020306c0
    cmp r0, #0x0
    beq L_0200df4c
    ldr r0, =data_02086dfc
    ldrh r1, [r0, #0x2]
    sub r1, r1, #0x100
    strh r1, [r0, #0x2]
L_0200df4c:
    ldr r1, =data_02086dfc
    ldr r0, =data_0206ea14
    ldrh r2, [r1, #0x2]
    ldr r4, [r0, #0x0]
    ldr r1, =data_02064348
    mov r0, r2, asr #0x4
    mov r2, r0, lsl #0x1
    add r0, r2, #0x1
    mov r2, r2, lsl #0x1
    mov r0, r0, lsl #0x1
    ldrsh r2, [r1, r2]
    ldrsh r3, [r1, r0]
    ldr r1, =data_02064104
    add r0, r4, #0x7c
    bl func_0204b08c
    bl func_02003e84
    add sp, sp, #0xc
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}
// clang-format on
