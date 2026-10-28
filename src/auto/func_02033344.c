#include "m2c.h"

void func_02030134(void);
void func_02030144(void);
void func_0203016c(void);
void func_02031450(void);
void func_020353c0(void);
void func_0203540c(void);
void func_0204b820(void);
void func_0204b858(void);
void G3X_GetBoxTestResult(void);
extern char data_0208876c[];
extern char data_0208a360[];
// clang-format off
asm void func_02033344(void) {
    stmdb sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #0x14
    mov r8, r0
    ldr r0, [sp, #0x38]
    mov r11, r1
    str r0, [sp, #0x38]
    mov r0, #0x0
    mov r7, r2
    mov r6, r3
    str r0, [sp, #0xc]
    bl func_02030144
    ldr r2, =0x4000444
    mov r1, #0x0
    str r1, [r2, #0x0]
    ldrh r1, [r8, #0x6]
    str r0, [sp, #0x8]
    cmp r1, #0x1
    bls L_020333a0
    mov r0, r1, lsl #0xc
    str r0, [r2, #0x28]
    str r0, [r2, #0x28]
    str r0, [r2, #0x28]
    bl func_0204b858
L_020333a0:
    ldr r0, =0x30c1
    ldr r1, =0x40004a4
    mov r4, #0x0
    str r0, [r1, #0x0]
    str r4, [r1, #0x5c]
    str r4, [r1, #0x60]
    ldr r0, [r8, #0x8]
    add r5, sp, #0x10
    str r0, [r1, #0x11c]
    ldr r0, [r8, #0xc]
    str r0, [r1, #0x11c]
    ldr r0, [r8, #0x10]
    str r0, [r1, #0x11c]
    b L_020333e4
L_020333d8:
    add r0, r4, #0x1
    mov r0, r0, lsl #0x10
    mov r4, r0, lsr #0x10
L_020333e4:
    mov r0, r5
    bl G3X_GetBoxTestResult
    cmp r0, #0x0
    beq L_020333fc
    cmp r4, #0x190
    blo L_020333d8
L_020333fc:
    cmp r4, #0x190
    movhs r0, #0x0
    strhs r0, [sp, #0x10]
    ldr r0, [sp, #0x10]
    cmp r0, #0x0
    beq L_020337f0
    ldrh r0, [r8, #0x6]
    cmp r0, #0x1
    bls L_02033434
    bl func_0204b820
    ldr r1, =0x400046c
    str r0, [r1, #0x0]
    str r0, [r1, #0x0]
    str r0, [r1, #0x0]
L_02033434:
    ldr r1, [r8, #0x0]
    cmp r1, #0x1000
    beq L_02033450
    ldr r0, =0x400046c
    str r1, [r0, #0x0]
    str r1, [r0, #0x0]
    str r1, [r0, #0x0]
L_02033450:
    ldr r0, [r8, #0x14]
    mov r4, #0x0
    cmp r0, #0x0
    bls L_020337f0
    mov r0, r7, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0x0]
L_0203346c:
    ldrh r0, [r6, #0x6]
    add r1, r8, r4, lsl #0x2
    ldr r10, [r1, #0x18]
    cmp r0, #0xff
    bhs L_02033504
    ldrb r0, [r10, #0xd]
    cmp r0, #0x1
    bhi L_020334f8
    ldrb r0, [r10, #0xc]
    cmp r0, #0x0
    beq L_020334c8
    ldrb r0, [r6, #0xa]
    ldrb r1, [r6, #0xb]
    bl func_0203016c
    add r1, r10, #0xd
    swpb r0, r0, [r1]
    ldrb r0, [r10, #0xd]
    cmp r0, #0x0
    beq L_02033504
    add r1, r10, #0xc
    mov r0, #0x0
    swpb r0, r0, [r1]
    b L_02033504
L_020334c8:
    ldrb r0, [r6, #0x8]
    ldrb r1, [r6, #0x9]
    bl func_0203016c
    add r1, r10, #0xd
    swpb r0, r0, [r1]
    ldrb r0, [r10, #0xd]
    cmp r0, #0x0
    beq L_02033504
    add r1, r10, #0xc
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_02033504
L_020334f8:
    sub r0, r0, #0x1
    add r1, r10, #0xd
    swpb r0, r0, [r1]
L_02033504:
    ldrb r0, [r10, #0xc]
    cmp r0, #0x0
    beq L_020337d8
    ldr r0, [r10, #0x0]
    cmp r0, #0x0
    ldreq r0, [r10, #0x4]
    cmpeq r0, #0x0
    ldreq r0, [r10, #0x8]
    cmpeq r0, #0x0
    movne r5, #0x1
    moveq r5, #0x0
    cmp r5, #0x0
    beq L_02033568
    ldr r0, =0x4000444
    mov r1, #0x0
    str r1, [r0, #0x0]
    sub ip, r0, #0x4
    mov r1, #0x1
    str r1, [ip, #0x0]
    ldmia r10, {r2, r3, r9}
    str r2, [r0, #0x2c]
    str r3, [r0, #0x2c]
    mov r1, #0x2
    str r9, [r0, #0x2c]
    str r1, [ip, #0x0]
L_02033568:
    ldr r0, [r8, #0x14]
    cmp r0, #0x1
    moveq r0, #0x1
    streq r0, [sp, #0x10]
    beq L_020335e0
    ldrh r0, [r10, #0xe]
    cmp r0, #0x0
    beq L_0203359c
    ldr r0, =0x400046c
    mov r1, #0x2000
    str r1, [r0, #0x0]
    str r1, [r0, #0x0]
    str r1, [r0, #0x0]
L_0203359c:
    ldr r2, =0x30c1
    ldr r1, =0x40004a4
    mov r0, #0x0
    str r2, [r1, #0x0]
    str r0, [r1, #0x5c]
    str r0, [r1, #0x60]
    ldr r0, [r10, #0x10]
    str r0, [r1, #0x11c]
    ldr r0, [r10, #0x14]
    str r0, [r1, #0x11c]
    ldr r0, [r10, #0x18]
    str r0, [r1, #0x11c]
    add r9, sp, #0x10
L_020335d0:
    mov r0, r9
    bl G3X_GetBoxTestResult
    cmp r0, #0x0
    bne L_020335d0
L_020335e0:
    ldr r0, [sp, #0x10]
    cmp r0, #0x0
    beq L_02033788
    mov r0, r4, lsl #0x1
    ldrh r1, [r11, r0]
    ldr r2, =data_0208a360
    mov r0, #0x68
    mla r9, r1, r0, r2
    ldrh r2, [r9, #0x4]
    ldr r1, =data_0208876c
    mov r0, #0x2c
    mul r0, r2, r0
    ldr r2, [r8, #0x14]
    cmp r2, #0x1
    bls L_0203363c
    ldrh r2, [r10, #0xe]
    cmp r2, #0x0
    beq L_0203363c
    mov r3, #0x800
    ldr r2, =0x400046c
    str r3, [r2, #0x0]
    str r3, [r2, #0x0]
    str r3, [r2, #0x0]
L_0203363c:
    cmp r7, #0x0
    blt L_02033664
    ldrh r2, [r9, #0x2]
    add r3, r9, #0x50
    str r2, [sp, #0x4]
    ldr r2, [sp, #0x0]
    strh r2, [r9, #0x2]
    ldrb r2, [r9, #0x50]
    orr r2, r2, #0x10
    swpb r2, r2, [r3]
L_02033664:
    ldrh r2, [r9, #0x2]
    cmp r2, #0x0
    beq L_02033678
    cmp r2, #0x1f
    blo L_02033690
L_02033678:
    ldr r0, [r1, r0]
    mov r0, r0, lsl #0x18
    mov r0, r0, asr #0x18
    cmp r0, #0x1
    cmpne r0, #0x6
    bne L_020336b0
L_02033690:
    ldrsb r0, [r9, #0x3b]
    bl func_020353c0
    strh r0, [r9, #0x0]
    ldrb r0, [r9, #0x50]
    add r1, r9, #0x50
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
    b L_020336d8
L_020336b0:
    ldrb r0, [r9, #0x3a]
    cmp r0, #0x0
    beq L_020336d8
    ldrsb r0, [r9, #0x3b]
    bl func_0203540c
    strh r0, [r9, #0x0]
    ldrb r0, [r9, #0x50]
    add r1, r9, #0x50
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
L_020336d8:
    ldrsb r1, [r9, #0x3b]
    mvn r0, #0x0
    cmp r1, r0
    ldrneh r0, [r9, #0x0]
    cmpne r0, r1
    beq L_02033704
    strh r1, [r9, #0x0]
    ldrb r0, [r9, #0x50]
    add r1, r9, #0x50
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
L_02033704:
    ldrh r0, [r8, #0x4]
    cmp r0, #0x2
    bne L_02033740
    ldrb r1, [r9, #0x2e]
    ldr r0, [sp, #0x38]
    and r0, r0, #0xff
    and r0, r0, #0xf
    bic r1, r1, #0xf
    orr r0, r1, r0
    add r1, r9, #0x2e
    swpb r0, r0, [r1]
    add r1, r9, #0x50
    ldrb r0, [r9, #0x50]
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
L_02033740:
    mov r0, r4, lsl #0x1
    ldrh r2, [r11, r0]
    add r0, r10, #0x20
    ldr r1, [r10, #0x1c]
    bl func_02031450
    cmp r7, #0x0
    blt L_02033774
    ldr r0, [sp, #0x4]
    add r1, r9, #0x50
    strh r0, [r9, #0x2]
    ldrb r0, [r9, #0x50]
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
L_02033774:
    ldr r0, [sp, #0xc]
    add r0, r0, #0x1
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    str r0, [sp, #0xc]
L_02033788:
    cmp r5, #0x0
    beq L_020337a0
    ldr r0, =0x4000448
    mov r1, #0x1
    str r1, [r0, #0x0]
    b L_020337d8
L_020337a0:
    ldr r0, [sp, #0x10]
    cmp r0, #0x0
    bne L_020337d8
    ldr r0, [r8, #0x14]
    cmp r0, #0x1
    bls L_020337d8
    ldrh r0, [r10, #0xe]
    cmp r0, #0x0
    beq L_020337d8
    ldr r0, =0x400046c
    mov r1, #0x800
    str r1, [r0, #0x0]
    str r1, [r0, #0x0]
    str r1, [r0, #0x0]
L_020337d8:
    add r0, r4, #0x1
    mov r0, r0, lsl #0x10
    ldr r1, [r8, #0x14]
    mov r4, r0, lsr #0x10
    cmp r1, r0, lsr #0x10
    bhi L_0203346c
L_020337f0:
    ldr r1, =0x4000448
    mov r2, #0x1
    ldr r0, [sp, #0x8]
    str r2, [r1, #0x0]
    bl func_02030134
    ldr r0, [sp, #0xc]
    add sp, sp, #0x14
    ldmia sp!, {r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
