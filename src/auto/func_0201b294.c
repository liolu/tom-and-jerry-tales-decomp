#include "m2c.h"

void func_02018878(void);
void func_02018984(void);
void func_02030878(void);
void func_02030898(void);
void func_0203c568(void);
void FX_Atan2Idx(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0201b294(void) {
    stmdb sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x28
    mov r4, r0
    ldr r0, [r4, #0x1c]
    cmp r0, #0x3
    addeq sp, sp, #0x28
    andeq r0, r0, #0xff
    ldmeqia sp!, {r3, r4, r5, pc}
    bl func_02030878
    cmp r0, #0x0
    beq L_0201b608
    add r0, sp, #0x24
    add r1, sp, #0x20
    bl func_02030898
    ldr r1, [sp, #0x24]
    mvn r0, #0x0
    str r1, [r4, #0x10]
    ldr r1, [sp, #0x20]
    str r1, [r4, #0x14]
    ldr r1, [r4, #0x34]
    cmp r1, r0
    beq L_0201b33c
    ldr r0, [r4, #0x20]
    ldr r3, [r4, #0x38]
    ldr r2, [r4, #0x24]
    sub r1, r1, r0
    sub r0, r3, r2
    mov r0, r0, lsl #0xc
    mov r1, r1, lsl #0xc
    bl FX_Atan2Idx
    ldr ip, [sp, #0x20]
    ldr r3, [r4, #0x24]
    ldr r2, [sp, #0x24]
    ldr r1, [r4, #0x20]
    sub r3, ip, r3
    sub r1, r2, r1
    mov r5, r0
    mov r0, r3, lsl #0xc
    mov r1, r1, lsl #0xc
    bl FX_Atan2Idx
    sub r0, r0, r5
    strh r0, [r4, #0x32]
L_0201b33c:
    ldr r3, [r4, #0x10]
    ldr r2, [r4, #0x20]
    ldr r1, [r4, #0x14]
    ldr r0, [r4, #0x24]
    sub r2, r3, r2
    sub r1, r1, r0
    mov r0, r2, lsl #0x10
    mov r1, r1, lsl #0x10
    mov r0, r0, asr #0x10
    mov r1, r1, asr #0x10
    bl func_02018984
    ldrh r2, [r4, #0x28]
    mul r1, r2, r2
    cmp r0, r1
    blo L_0201b388
    ldrh r2, [r4, #0x2c]
    mul r1, r2, r2
    cmp r0, r1
    bls L_0201b3d4
L_0201b388:
    ldrsb r0, [r4, #0x0]
    mov r1, #0x1000
    ldrh r3, [r4, #0x32]
    mov r2, r1
    bl func_0203c568
    ldrb r0, [r4, #0x2e]
    cmp r0, #0xf
    bne L_0201b3bc
    ldrb r0, [r4, #0x2f]
    cmp r0, #0x0
    movne r0, #0x1
    strne r0, [r4, #0x1c]
    bne L_0201b3c4
L_0201b3bc:
    mov r0, #0x3
    str r0, [r4, #0x1c]
L_0201b3c4:
    ldr r0, [r4, #0x1c]
    add sp, sp, #0x28
    and r0, r0, #0xff
    ldmia sp!, {r3, r4, r5, pc}
L_0201b3d4:
    ldrh r2, [r4, #0x2a]
    mul r1, r2, r2
    cmp r0, r1
    addlo r1, r4, #0x2f
    movlo r0, #0x0
    swplob r0, r0, [r1]
    ldrb r0, [r4, #0x4]
    cmp r0, #0x0
    beq L_0201b5c8
    ldr r0, [r4, #0x10]
    str r0, [sp, #0x18]
    ldr r0, [r4, #0x14]
    str r0, [sp, #0x1c]
    ldr r0, [r4, #0x8]
    str r0, [sp, #0x10]
    ldr r0, [r4, #0xc]
    str r0, [sp, #0x14]
    ldrb r0, [r4, #0x2e]
    tst r0, #0x1
    bne L_0201b47c
    ldr r1, [r4, #0x20]
    add r0, sp, #0x18
    str r1, [sp, #0x0]
    str r1, [sp, #0x8]
    ldrh r2, [r4, #0x28]
    ldr r3, [r4, #0x24]
    add r1, sp, #0x10
    sub r2, r3, r2
    str r2, [sp, #0xc]
    ldrh r3, [r4, #0x2c]
    ldr ip, [r4, #0x24]
    add r2, sp, #0x8
    sub ip, ip, r3
    add r3, sp, #0x0
    str ip, [sp, #0x4]
    bl func_02018878
    cmp r0, #0x0
    beq L_0201b47c
    ldrb r0, [r4, #0x2e]
    add r1, r4, #0x2e
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_0201b47c:
    ldrb r0, [r4, #0x2e]
    tst r0, #0x4
    bne L_0201b4e0
    ldr r1, [r4, #0x20]
    add r0, sp, #0x18
    str r1, [sp, #0x0]
    str r1, [sp, #0x8]
    ldrh r2, [r4, #0x28]
    ldr r3, [r4, #0x24]
    add r1, sp, #0x10
    add r2, r3, r2
    str r2, [sp, #0xc]
    ldrh r3, [r4, #0x2c]
    ldr ip, [r4, #0x24]
    add r2, sp, #0x8
    add ip, ip, r3
    add r3, sp, #0x0
    str ip, [sp, #0x4]
    bl func_02018878
    cmp r0, #0x0
    beq L_0201b4e0
    ldrb r0, [r4, #0x2e]
    add r1, r4, #0x2e
    orr r0, r0, #0x4
    swpb r0, r0, [r1]
L_0201b4e0:
    ldrb r0, [r4, #0x2e]
    tst r0, #0x2
    bne L_0201b544
    ldrh r1, [r4, #0x28]
    ldr r2, [r4, #0x20]
    add r0, sp, #0x18
    add r1, r2, r1
    str r1, [sp, #0x8]
    ldrh r2, [r4, #0x2c]
    ldr r3, [r4, #0x20]
    add r1, sp, #0x10
    add r2, r3, r2
    str r2, [sp, #0x0]
    ldr ip, [r4, #0x24]
    add r2, sp, #0x8
    add r3, sp, #0x0
    str ip, [sp, #0x4]
    str ip, [sp, #0xc]
    bl func_02018878
    cmp r0, #0x0
    beq L_0201b544
    ldrb r0, [r4, #0x2e]
    add r1, r4, #0x2e
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
L_0201b544:
    ldrb r0, [r4, #0x2e]
    tst r0, #0x8
    bne L_0201b5a8
    ldrh r1, [r4, #0x28]
    ldr r2, [r4, #0x20]
    add r0, sp, #0x18
    sub r1, r2, r1
    str r1, [sp, #0x8]
    ldrh r2, [r4, #0x2c]
    ldr r3, [r4, #0x20]
    add r1, sp, #0x10
    sub r2, r3, r2
    str r2, [sp, #0x0]
    ldr ip, [r4, #0x24]
    add r2, sp, #0x8
    add r3, sp, #0x0
    str ip, [sp, #0x4]
    str ip, [sp, #0xc]
    bl func_02018878
    cmp r0, #0x0
    beq L_0201b5a8
    ldrb r0, [r4, #0x2e]
    add r1, r4, #0x2e
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
L_0201b5a8:
    ldrb r0, [r4, #0x2e]
    cmp r0, #0xf
    bne L_0201b5f4
    ldrb r0, [r4, #0x2f]
    cmp r0, #0x0
    movne r0, #0x1
    strne r0, [r4, #0x1c]
    b L_0201b5f4
L_0201b5c8:
    add r1, r4, #0x4
    mov r2, #0x1
    swpb r0, r2, [r1]
    add r1, r4, #0x2f
    swpb r0, r2, [r1]
    mov r0, #0x0
    str r0, [r4, #0x1c]
    ldr r0, [r4, #0x10]
    str r0, [r4, #0x34]
    ldr r0, [r4, #0x14]
    str r0, [r4, #0x38]
L_0201b5f4:
    ldr r0, [r4, #0x10]
    str r0, [r4, #0x8]
    ldr r0, [r4, #0x14]
    str r0, [r4, #0xc]
    b L_0201b650
L_0201b608:
    ldrb r0, [r4, #0x4]
    cmp r0, #0x0
    beq L_0201b650
    add r1, r4, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldrb r0, [r4, #0x2e]
    cmp r0, #0xf
    bne L_0201b648
    ldrb r0, [r4, #0x2f]
    cmp r0, #0x0
    movne r0, #0x1
    strne r0, [r4, #0x1c]
    moveq r0, #0x2
    streq r0, [r4, #0x1c]
    b L_0201b650
L_0201b648:
    mov r0, #0x3
    str r0, [r4, #0x1c]
L_0201b650:
    ldrsb r0, [r4, #0x0]
    mov r1, #0x1000
    ldrh r3, [r4, #0x32]
    mov r2, r1
    bl func_0203c568
    ldr r0, [r4, #0x1c]
    and r0, r0, #0xff
    add sp, sp, #0x28
    ldmia sp!, {r3, r4, r5, pc}
}
// clang-format on
