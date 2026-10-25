#include "m2c.h"

void func_0202a9ec(void);
// clang-format off
asm void func_0202aa54(void) {
    stmdb sp!, {r4, r5, r6, lr}
    mov ip, #0x0
    mov r6, r0
    mov r5, r3
    sub r4, ip, #0x1
    b @2
@1
    sub r0, r0, #0x1f
    mov r0, r0, lsl #0x10
    mov r0, r0, lsr #0x10
    and r0, r0, #0xff
    ldr r3, [r2, r0, lsl #0x2]
    add r0, r4, #0x1
    ldrb r3, [r2, r3]
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
    add r0, ip, r3
    mov r0, r0, lsl #0x10
    mov ip, r0, asr #0x10
@2
    cmp ip, r1
    bgt @3
    add r0, r6, r4
    ldrb r0, [r0, #0x1]
    cmp r0, #0x0
    bne @1
@3
    cmp ip, r1
    subgt r0, r4, #0x1
    movgt r0, r0, lsl #0x10
    movgt r4, r0, asr #0x10
    add r1, r4, #0x1
    swpb r0, r1, [r5]
    ldrb r0, [r6, r1]
    cmp r0, #0x0
    beq @6
    b @5
@4
    sub r0, r4, #0x1
    mov r0, r0, lsl #0x10
    mov r4, r0, asr #0x10
@5
    ldrb r0, [r6, r4]
    sub r0, r0, #0x1f
    and r0, r0, #0xff
    bl func_0202a9ec
    cmp r0, #0x0
    bne @6
    cmp r4, #0x0
    bge @4
@6
    cmp r4, #0x0
    addge r0, r4, #0x1
    swpgeb r0, r0, [r5]
    ldmia sp!, {r4, r5, r6, pc}
}
// clang-format on
