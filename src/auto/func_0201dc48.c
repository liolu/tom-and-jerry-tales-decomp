#include "m2c.h"

void func_0202c1e4(void);
void func_0202caac(void);
void func_0202cba8(void);
void func_02062f0c(void);
extern char data_020692ec[];
extern char data_0206b158[];
extern char data_0206b230[];
extern char data_0206e6d4[];
extern char data_020875a8[];
extern char data_020875f8[];
extern char data_02087600[];
extern char data_020876d0[];
extern char data_020876d4[];
extern char data_020880c0[];
// clang-format off
asm void func_0201dc48(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, lr}
    sub sp, sp, #0x8
    ldr r3, =data_020875a8
    mov r0, #0x0
    add r2, r3, #0x9
    swpb r1, r0, [r2]
    add r2, r3, #0x7
    mov r1, #0x1
    str r0, [r3, #0x2c]
    str r1, [r3, #0x28]
    str r0, [r3, #0x18]
    swpb r1, r0, [r2]
    ldr r4, =data_020876d4
    mov r1, r0
L_0201dc80:
    add r2, r0, #0x1
    mov r2, r2, lsl #0x10
    add r3, r4, r0
    mov r0, r2, lsr #0x10
    cmp r0, #0x6
    swpb r2, r1, [r3]
    blo L_0201dc80
    ldr r4, =data_020876d0
    mov r0, #0x0
L_0201dca4:
    add r2, r1, #0x1
    mov r2, r2, lsl #0x10
    add r3, r4, r1
    mov r1, r2, lsr #0x10
    cmp r1, #0x3
    swpb r2, r0, [r3]
    blo L_0201dca4
    ldr r1, =data_020876d0
    mvn r3, #0x0
    add r2, r1, #0x2
    swpb r1, r3, [r2]
    ldr r3, =data_0206b230
    mov r4, #0xc0
L_0201dcd8:
    add r1, r0, #0x1
    mov r1, r1, lsl #0x10
    add r2, r3, r0
    mov r0, r1, lsr #0x10
    cmp r0, #0x6
    swpb r1, r4, [r2]
    blo L_0201dcd8
    ldr r1, =data_0206e6d4
    ldr r0, =data_020880c0
    ldrb r5, [r1, #0x70]
    ldrh r2, [r0, #0x16]
    ldrsh r4, [r1, #0x64]
    ldr r3, =data_020875a8
    mul r2, r5, r2
    strh r2, [r3, #0x50]
    ldr r2, [r0, #0x28]
    ldrh r1, [r1, #0x6a]
    mul r2, r4, r2
    strh r2, [r3, #0x52]
    strh r1, [r3, #0x54]
    ldrh r5, [r0, #0x1e]
    ldr r1, =0x88888889
    ldr r2, =data_0206b158
    smull r0, r6, r1, r5
    add r6, r5, r6
    mov r0, r5, lsr #0x1f
    add r6, r0, r6, asr #0x4
    strh r6, [r2, #0x4]
    ldrh r5, [r3, #0x54]
    ldrh r1, [r2, #0x4]
    mov r0, r5
    bl func_02062f0c
    ldr r1, =data_020875a8
    strh r0, [r1, #0xc]
    ldrh r0, [r1, #0xc]
    cmp r0, #0x0
    moveq r0, #0x1
    streqh r0, [r1, #0xc]
    ldr r0, =data_020875a8
    ldrh r1, [r0, #0xc]
    cmp r1, #0xa
    movhi r1, #0xa
    strhih r1, [r0, #0xc]
    ldr r1, =data_020875a8
    mov r0, r5, lsl #0xc
    ldrh r1, [r1, #0xc]
    bl func_02062f0c
    ldr r1, =data_020875a8
    mov r2, r4, lsl #0xc
    str r0, [r1, #0x38]
    ldr r0, =data_020692ec
    str r2, [r1, #0x14]
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0201de58
L_0201ddb8:
    b L_0201de58
    b L_0201ddcc
    b L_0201de14
    b L_0201ddec
    b L_0201ddfc
L_0201ddcc:
    ldrh r3, [r1, #0x50]
    ldrh r2, [r1, #0x52]
    mov r0, #0x1
    add r2, r3, r2
    add r2, r5, r2
    str r2, [r1, #0x3c]
    str r0, [r1, #0x10]
    b L_0201de58
L_0201ddec:
    str r5, [r1, #0x3c]
    mov r0, #0x9
    str r0, [r1, #0x10]
    b L_0201de58
L_0201ddfc:
    ldr r0, =data_0206e6d4
    mov r2, #0xa
    ldrh r0, [r0, #0x7c]
    str r0, [r1, #0x3c]
    str r2, [r1, #0x10]
    b L_0201de58
L_0201de14:
    ldr r1, =data_0206e6d4
    add r2, sp, #0x0
    ldr r0, [r1, #0x74]
    ldr r1, [r1, #0x78]
    bl func_0202cba8
    ldrh r1, [sp, #0x2]
    mov r0, #0x64
    ldrh r3, [sp, #0x0]
    mul r2, r1, r0
    ldr r0, =0x1770
    ldrh r4, [sp, #0x4]
    mla r1, r3, r0, r2
    ldr r0, =data_020875a8
    add r1, r4, r1
    str r1, [r0, #0x3c]
    mov r1, #0x8
    str r1, [r0, #0x10]
L_0201de58:
    ldr r4, =data_020875f8
    ldr r7, =data_0206b158+0x6
    ldr r6, =data_02087600
    mov r5, #0x0
L_0201de68:
    mov r1, r5, lsl #0x1
    ldrh r0, [r4, r1]
    ldrh r1, [r7, r1]
    mov r0, r0, lsl #0xc
    bl func_02062f0c
    add r1, r5, #0x1
    mov r1, r1, lsl #0x10
    str r0, [r6, r5, lsl #0x2]
    mov r5, r1, lsr #0x10
    cmp r5, #0x3
    blo L_0201de68
    ldr r1, =data_0206e6d4
    ldr r0, =data_0206b158
    ldrsh r2, [r1, #0x64]
    ldrh r1, [r0, #0x8]
    mov r0, r2, lsl #0xc
    bl func_02062f0c
    ldr r2, =data_020875a8
    ldr r1, =data_0206b158
    str r0, [r2, #0x34]
    ldrh r1, [r1, #0xa]
    ldr r0, [r2, #0x38]
    bl func_02062f0c
    ldr r2, =data_020875a8
    ldr r1, =data_020692ec
    str r0, [r2, #0x60]
    ldr r0, [r2, #0x3c]
    ldr r1, [r1, #0x0]
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    mov r2, #0x1
    bl func_0202caac
    ldr r1, =data_020875a8
    ldr r0, =data_020692ec
    ldr r2, [r1, #0x3c]
    ldr r1, [r0, #0x0]
    mov r0, r2, lsl #0x10
    mov r0, r0, lsr #0x10
    bl func_0202c1e4
    ldr r1, =data_020692ec
    ldr r3, =data_020875a8
    ldr r1, [r1, #0x0]
    str r0, [r3, #0x24]
    cmp r1, #0x1
    beq L_0201dfd4
    cmp r0, #0x3
    addls pc, pc, r0, lsl #0x2
    b L_0201dff8
L_0201df28:
    b L_0201df8c
    b L_0201df70
    b L_0201df54
    b L_0201df38
L_0201df38:
    ldr r0, =data_0206e6d4
    mov r1, #0x4
    str r1, [r3, #0x20]
    add r1, r0, #0xa0
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_0201dff8
L_0201df54:
    ldr r0, =data_0206e6d4
    mov r1, #0x3
    str r1, [r3, #0x20]
    add r1, r0, #0xa0
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_0201dff8
L_0201df70:
    ldr r0, =data_0206e6d4
    mov r1, #0x2
    str r1, [r3, #0x20]
    add r1, r0, #0xa0
    mov r0, #0x1
    swpb r0, r0, [r1]
    b L_0201dff8
L_0201df8c:
    ldr r2, =data_0206e6d4
    mov r0, #0x5
    str r0, [r3, #0x20]
    add r1, r2, #0xa0
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldrb r0, [r2, #0x5f]
    mov r1, r0, lsl #0x1f
    movs r1, r1, lsr #0x1f
    bne L_0201dfc0
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    beq L_0201dff8
L_0201dfc0:
    ldr r0, =data_0206e6d4
    mov r2, #0x1
    add r1, r0, #0xa0
    swpb r0, r2, [r1]
    b L_0201dff8
L_0201dfd4:
    ldr r0, =data_0206e6d4
    ldrb r1, [r0, #0x18]
    cmp r1, #0x5
    addne r1, r0, #0xa0
    movne r0, #0x1
    swpneb r0, r0, [r1]
    mov r1, #0x0
    ldr r0, =data_020875a8
    str r1, [r0, #0x20]
L_0201dff8:
    ldr r0, =data_020875a8
    mov r2, #0x0
    ldr r3, [r0, #0x20]
    add r1, r0, #0x1
    str r3, [r0, #0x1c]
    str r2, [r0, #0x48]
    swpb r0, r2, [r1]
    add sp, sp, #0x8
    ldmia sp!, {r3, r4, r5, r6, r7, pc}
}
// clang-format on
