#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02018878();
extern void func_02018984();
extern void func_02030878();
extern void func_02030898();
extern void func_0203c568();
extern void func_0203fa64();
extern void FX_Atan2Idx();
extern void MIi_CpuCopy16();
extern char data_02087410[];
// clang-format off
asm void func_0201bdcc(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x28
    mov r4, r0
    ldr r0, [r4, #0x1c]
    cmp r0, #0x0
    addne sp, sp, #0x28
    andne r0, r0, #0xff
    ldmnefd sp!, {r3, r4, r5, pc}
    bl func_02030878
    cmp r0, #0x0
    beq L_0201c174
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
    beq L_0201be74
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
L_0201be74:
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
    blo L_0201bec0
    ldrh r2, [r4, #0x2c]
    mul r1, r2, r2
    cmp r0, r1
    bls L_0201befc
L_0201bec0:
    ldrsb r0, [r4, #0x0]
    mov r1, #0x1000
    ldrh r3, [r4, #0x32]
    mov r2, r1
    bl func_0203c568
    ldrb r1, [r4, #0x31]
    ldrb r0, [r4, #0x30]
    add sp, sp, #0x28
    cmp r1, r0
    movhs r0, #0x1
    movlo r0, #0x2
    str r0, [r4, #0x1c]
    ldr r0, [r4, #0x1c]
    and r0, r0, #0xff
    ldmfd sp!, {r3, r4, r5, pc}
L_0201befc:
    ldrb r0, [r4, #0x4]
    cmp r0, #0x0
    beq L_0201c13c
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
    bne L_0201bf8c
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
    beq L_0201bf8c
    ldrb r0, [r4, #0x2e]
    add r1, r4, #0x2e
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_0201bf8c:
    ldrb r0, [r4, #0x2e]
    tst r0, #0x4
    bne L_0201bff0
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
    beq L_0201bff0
    ldrb r0, [r4, #0x2e]
    add r1, r4, #0x2e
    orr r0, r0, #0x4
    swpb r0, r0, [r1]
L_0201bff0:
    ldrb r0, [r4, #0x2e]
    tst r0, #0x2
    bne L_0201c054
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
    beq L_0201c054
    ldrb r0, [r4, #0x2e]
    add r1, r4, #0x2e
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
L_0201c054:
    ldrb r0, [r4, #0x2e]
    tst r0, #0x8
    bne L_0201c0b8
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
    beq L_0201c0b8
    ldrb r0, [r4, #0x2e]
    add r1, r4, #0x2e
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
L_0201c0b8:
    ldrb r0, [r4, #0x2e]
    cmp r0, #0xf
    bne L_0201c160
    ldrb r0, [r4, #0x31]
    add r1, r4, #0x31
    add r2, r4, #0x2e
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    mov r0, #0x0
    swpb r0, r0, [r2]
    ldrb r1, [r4, #0x31]
    ldrb r0, [r4, #0x30]
    cmp r1, r0
    bne L_0201c160
    mov r0, #0x64
    bl func_0203fa64
    mov r1, #0x1000
    ldrsb r0, [r4, #0x0]
    ldrh r3, [r4, #0x32]
    mov r2, r1
    bl func_0203c568
    ldr r0, =data_02087410
    mov r2, #0x4
    ldrsb r1, [r0, #0x0]
    ldr r3, [r0, #0x30]
    add r0, r1, #0x9
    mov r1, r0, lsl #0x4
    add r0, r1, #0x5
    add r1, r1, #0x1
    add r0, r3, r0, lsl #0x1
    add r1, r3, r1, lsl #0x1
    bl MIi_CpuCopy16
    b L_0201c160
L_0201c13c:
    add r1, r4, #0x4
    mov r0, #0x1
    swpb r0, r0, [r1]
    mov r0, #0x0
    str r0, [r4, #0x1c]
    ldr r0, [r4, #0x10]
    str r0, [r4, #0x34]
    ldr r0, [r4, #0x14]
    str r0, [r4, #0x38]
L_0201c160:
    ldr r0, [r4, #0x10]
    str r0, [r4, #0x8]
    ldr r0, [r4, #0x14]
    str r0, [r4, #0xc]
    b L_0201c1a8
L_0201c174:
    ldrb r0, [r4, #0x4]
    cmp r0, #0x0
    beq L_0201c1a8
    add r1, r4, #0x4
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldrb r1, [r4, #0x31]
    ldrb r0, [r4, #0x30]
    cmp r1, r0
    movhs r0, #0x1
    strhs r0, [r4, #0x1c]
    movlo r0, #0x2
    strlo r0, [r4, #0x1c]
L_0201c1a8:
    ldrsb r0, [r4, #0x0]
    mov r1, #0x1000
    ldrh r3, [r4, #0x32]
    mov r2, r1
    bl func_0203c568
    ldr r0, [r4, #0x1c]
    and r0, r0, #0xff
    add sp, sp, #0x28
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
