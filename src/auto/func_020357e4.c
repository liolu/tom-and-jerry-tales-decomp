#include "m2c.h"

void func_0204b77c(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_020357e4(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    mov r5, r0
    mov r4, r1
    ldr r2, [r4, #0x0]
    ldr r1, [r5, #0x1c]
    ldrb r3, [r5, #0x34]
    mul r0, r1, r2
    ldr r6, [r5, #0x18]
    cmp r3, #0x4
    mov r11, r2
    add r0, r6, r0, asr #0xc
    cmpne r3, #0x5
    beq L_02035820
    cmp r3, #0x6
    bne L_0203592c
L_02035820:
    mov r9, #0x0
    add r7, r5, #0x34
    mov r8, r9
    mov r10, #0x1000
    ldr r6, =0xfd7
    b L_02035918
L_02035838:
    ldr r0, [r5, #0x18]
    rsb r0, r0, #0x1000
    bl func_0204b77c
    ldr r1, [r4, #0x0]
    sub r0, r1, r0
    str r0, [r4, #0x0]
    str r9, [r5, #0x18]
    ldrh r0, [r5, #0x20]
    cmp r0, #0x0
    subne r0, r0, #0x1
    bne L_0203587c
    ldrb r0, [r5, #0x24]
    add r0, r5, r0, lsl #0x2
    ldr r0, [r0, #0x4]
    add r0, r0, #0x1000
    ldr r0, [r0, #0xe90]
    sub r0, r0, #0x2
L_0203587c:
    strh r0, [r5, #0x20]
    ldrh r0, [r5, #0x20]
    cmp r0, #0x0
    bne L_020358c4
    ldrb r0, [r5, #0x24]
    add r0, r5, r0, lsl #0x2
    ldr r0, [r0, #0x4]
    add r0, r0, #0x1000
    ldr r0, [r0, #0xe90]
    sub r0, r0, #0x2
    strh r0, [r5, #0x22]
    ldrb r0, [r5, #0x34]
    add r0, r0, #0xfb
    and r0, r0, #0xff
    cmp r0, #0x1
    strlsh r8, [r5, #0x22]
    swplsb r0, r8, [r7]
    b L_020358cc
L_020358c4:
    sub r0, r0, #0x1
    strh r0, [r5, #0x22]
L_020358cc:
    ldrb r0, [r5, #0x34]
    cmp r0, #0x0
    ldreqh r0, [r5, #0x20]
    streqh r0, [r5, #0x22]
    ldrb r2, [r5, #0x24]
    ldrh r1, [r5, #0x22]
    mov r0, r10
    add r2, r5, r2, lsl #0x2
    ldr r2, [r2, #0x4]
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mov r1, r1, lsl #0xc
    bl func_0204b77c
    str r0, [r5, #0x1c]
    ldr r2, [r4, #0x0]
    mov r1, r0
    mul r0, r1, r2
    mov r0, r0, asr #0xc
L_02035918:
    cmp r0, r6
    ble L_02035a34
    cmp r2, #0x0
    bgt L_02035838
    b L_02035a34
L_0203592c:
    mov r9, #0x0
    add r7, r5, #0x34
    mov r8, r9
    mov r10, #0x1000
    ldr r6, =0xfd7
    b L_02035a28
L_02035944:
    ldr r0, [r5, #0x18]
    rsb r0, r0, #0x1000
    bl func_0204b77c
    ldr r1, [r4, #0x0]
    sub r0, r1, r0
    str r0, [r4, #0x0]
    str r9, [r5, #0x18]
    ldrh r0, [r5, #0x20]
    add r0, r0, #0x1
    strh r0, [r5, #0x20]
    ldrb r1, [r5, #0x24]
    ldrh r0, [r5, #0x20]
    add r1, r5, r1, lsl #0x2
    ldr r1, [r1, #0x4]
    add r1, r1, #0x1000
    ldr r1, [r1, #0xe90]
    sub r1, r1, #0x1
    cmp r0, r1
    blo L_020359a0
    strh r9, [r5, #0x20]
    ldrb r0, [r5, #0x34]
    cmp r0, #0x2
    swpeqb r0, r9, [r7]
L_020359a0:
    ldrh r0, [r5, #0x20]
    add r0, r0, #0x1
    strh r0, [r5, #0x22]
    ldrb r0, [r5, #0x34]
    cmp r0, #0x0
    ldreqh r0, [r5, #0x20]
    streqh r0, [r5, #0x22]
    beq L_020359ec
    cmp r0, #0x3
    bne L_020359ec
    ldrb r1, [r5, #0x24]
    ldrh r0, [r5, #0x22]
    add r1, r5, r1, lsl #0x2
    ldr r1, [r1, #0x4]
    add r1, r1, #0x1000
    ldr r1, [r1, #0xe90]
    sub r1, r1, #0x2
    cmp r0, r1
    swpeqb r0, r8, [r7]
L_020359ec:
    ldrb r2, [r5, #0x24]
    ldrh r1, [r5, #0x20]
    mov r0, r10
    add r2, r5, r2, lsl #0x2
    ldr r2, [r2, #0x4]
    add r1, r2, r1
    add r1, r1, #0x1000
    ldrb r1, [r1, #0xea0]
    mov r1, r1, lsl #0xc
    bl func_0204b77c
    str r0, [r5, #0x1c]
    ldr r2, [r4, #0x0]
    mov r1, r0
    mul r0, r1, r2
    mov r0, r0, asr #0xc
L_02035a28:
    cmp r0, r6
    cmpgt r2, #0x0
    bgt L_02035944
L_02035a34:
    ldr r0, [r5, #0x28]
    add r0, r0, r11
    str r0, [r5, #0x28]
    ldr r1, [r5, #0x2c]
    bl func_0204b77c
    strh r0, [r5, #0x30]
    ldrh r1, [r5, #0x30]
    ldr r0, =0xfd7
    cmp r1, r0
    ldmlsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    ldrb r0, [r5, #0x24]
    add r1, r5, #0x33
    add r2, r5, #0x32
    add r0, r5, r0, lsl #0x2
    ldr r0, [r0, #0x4]
    mov r3, #0x0
    str r0, [r5, #0x0]
    ldr r0, [r5, #0x18]
    str r0, [r5, #0xc]
    ldr r0, [r5, #0x1c]
    str r0, [r5, #0x10]
    ldrh r0, [r5, #0x20]
    strh r0, [r5, #0x14]
    ldrh r0, [r5, #0x22]
    strh r0, [r5, #0x16]
    ldrb r0, [r5, #0x34]
    swpb r0, r0, [r1]
    swpb r0, r3, [r2]
    strh r3, [r5, #0x30]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
