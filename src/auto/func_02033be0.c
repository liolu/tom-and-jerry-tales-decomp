#include "m2c.h"

extern char data_0208ece4[];
void func_02032598(void);
void MI_CpuCopy8(void);
// clang-format off
asm void func_02033be0(void) {
    stmdb sp!, {r3, r4, r5, lr}
    ldr r3, =data_0208ece4
    mov r2, #0xbc
    mla r4, r1, r2, r3
    mov r5, r0
    mov r1, r4
    mov r2, #0xa4
    bl MI_CpuCopy8
    add r0, r5, #0xa4
    bl func_02032598
    str r0, [r4, #0xb4]
    ldrb r0, [r4, #0x73]
    cmp r0, #0x0
    ldmneia sp!, {r3, r4, r5, pc}
    ldrb r0, [r4, #0x72]
    cmp r0, #0x0
    bne L_02033c34
    add r1, r4, #0x73
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldmia sp!, {r3, r4, r5, pc}
L_02033c34:
    cmp r0, #0x4
    bne L_02033c4c
    add r1, r4, #0x73
    mov r0, #0x2
    swpb r0, r0, [r1]
    ldmia sp!, {r3, r4, r5, pc}
L_02033c4c:
    cmp r0, #0x3
    add r1, r4, #0x73
    moveq r0, #0x10
    swpeqb r0, r0, [r1]
    movne r0, #0x8
    swpneb r0, r0, [r1]
    ldmia sp!, {r3, r4, r5, pc}
}
// clang-format on
