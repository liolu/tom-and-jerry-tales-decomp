#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020316f0();
extern void func_02032c40();
extern char data_0208a360[];
// clang-format off
asm void func_020326c0(void) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, lr}
    mov r5, r1
    mov r1, #0x68
    mul r2, r5, r1
    mov r6, r0
    ldr ip, =data_0208a360
    ldrb r1, [r6, #0x12]
    add r4, ip, r2
    add r8, r4, #0x2f
    strh r1, [r4, #0x2]
    ldrb r1, [r6, #0x10]
    add r9, r4, #0x31
    add lr, r4, #0x30
    strh r1, [r4, #0x2c]
    ldrb r7, [r6, #0x13]
    mov r1, #0x0
    add r3, r4, #0x2e
    strh r7, [r4, #0x6]
    ldrb r7, [r6, #0x14]
    str r7, [r4, #0x8]
    ldrb r7, [r6, #0x15]
    str r7, [r4, #0x1c]
    ldrb r7, [r6, #0x16]
    str r7, [r4, #0x20]
    ldrb r7, [r6, #0x17]
    str r7, [r4, #0x24]
    ldrb r7, [r6, #0x18]
    swpb r7, r7, [r8]
    ldrb r7, [r6, #0x19]
    swpb r7, r7, [r9]
    ldrb r7, [r6, #0x1a]
    swpb r7, r7, [lr]
    ldrb r7, [r6, #0x1b]
    mov r7, r7, lsl #0xb
    str r7, [r4, #0x28]
    ldr r7, [r6, #0x1c]
    str r7, [r4, #0xc]
    ldr r7, [r6, #0x20]
    str r7, [r4, #0x10]
    ldrh r7, [r6, #0x24]
    strh r7, [r4, #0x14]
    ldrh r7, [r6, #0x26]
    strh r7, [r4, #0x16]
    ldrb r7, [r6, #0x29]
    ldrb r9, [r6, #0x2a]
    ldrb r8, [r6, #0x28]
    mov r10, r7, lsl #0x5
    mov r7, r10, asr #0x7
    mov r9, r9, lsl #0x5
    mov r8, r8, lsl #0x5
    add r7, r10, r7, lsr #0x18
    mov r10, r9, asr #0x7
    mov lr, r8, asr #0x7
    add r9, r9, r10, lsr #0x18
    mov r10, r7, asr #0x8
    add r7, r8, lr, lsr #0x18
    mov r8, r10, lsl #0x5
    mov r9, r9, asr #0x8
    orr r7, r8, r7, asr #0x8
    orr r7, r7, r9, lsl #0xa
    strh r7, [r4, #0x32]
    ldrb r7, [r6, #0x2d]
    ldrb r9, [r6, #0x2e]
    ldrb r8, [r6, #0x2c]
    mov r10, r7, lsl #0x5
    mov r7, r10, asr #0x7
    mov r9, r9, lsl #0x5
    mov r8, r8, lsl #0x5
    add lr, r10, r7, lsr #0x18
    mov r10, r9, asr #0x7
    mov r7, r8, asr #0x7
    add r9, r9, r10, lsr #0x18
    mov r10, lr, asr #0x8
    add r7, r8, r7, lsr #0x18
    mov r8, r10, lsl #0x5
    mov r9, r9, asr #0x8
    orr r7, r8, r7, asr #0x8
    orr r7, r7, r9, lsl #0xa
    strh r7, [r4, #0x34]
    ldrb r7, [r6, #0x31]
    ldrb r9, [r6, #0x32]
    ldrb r8, [r6, #0x30]
    mov r10, r7, lsl #0x5
    mov r7, r10, asr #0x7
    mov r9, r9, lsl #0x5
    mov r8, r8, lsl #0x5
    add lr, r10, r7, lsr #0x18
    mov r10, r9, asr #0x7
    mov r7, r8, asr #0x7
    add r9, r9, r10, lsr #0x18
    mov r10, lr, asr #0x8
    add r7, r8, r7, lsr #0x18
    mov r8, r10, lsl #0x5
    mov r9, r9, asr #0x8
    orr r7, r8, r7, asr #0x8
    orr r7, r7, r9, lsl #0xa
    strh r7, [r4, #0x36]
    ldrb r7, [r6, #0x35]
    ldrb r9, [r6, #0x36]
    ldrb r8, [r6, #0x34]
    mov r10, r7, lsl #0x5
    mov r7, r10, asr #0x7
    mov r9, r9, lsl #0x5
    mov r8, r8, lsl #0x5
    add lr, r10, r7, lsr #0x18
    mov r10, r9, asr #0x7
    mov r7, r8, asr #0x7
    add r9, r9, r10, lsr #0x18
    mov r10, lr, asr #0x8
    add r7, r8, r7, lsr #0x18
    mov r8, r10, lsl #0x5
    mov r9, r9, asr #0x8
    orr r7, r8, r7, asr #0x8
    orr r7, r7, r9, lsl #0xa
    strh r7, [r4, #0x38]
    strh r1, [ip, r2]
    ldrb r7, [r3, #0x0]
    mov r2, r1
    bic r7, r7, #0xf
    swpb r7, r7, [r3]
    bl func_020316f0
    strh r0, [r4, #0x4]
    mov r0, r5
    bl func_02032c40
    str r0, [r4, #0x18]
    ldrb r0, [r4, #0x2e]
    add r1, r4, #0x2e
    add r2, r4, #0x50
    bic r0, r0, #0xf
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    mov r0, #0xff
    swpb r0, r0, [r2]
    add r1, r4, #0x3a
    ldrb r0, [r6, #0x38]
    add r2, r4, #0x3b
    swpb r0, r0, [r1]
    ldrb r0, [r6, #0x39]
    swpb r0, r0, [r2]
    ldr r0, [r4, #0x54]
    bic r0, r0, #0x1
    str r0, [r4, #0x54]
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, pc}
}
// clang-format on
