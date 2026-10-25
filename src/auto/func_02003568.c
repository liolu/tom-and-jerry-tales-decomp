#include "m2c.h"
void func_02032900(void);
void func_02031be4(void);
// clang-format off
asm void func_02003568(void) {
    stmdb sp!, {r3, r4, r5, lr}
    add r0, r0, #0x1000
    ldr r0, [r0, #0x694]
    mov r5, r1
    bl func_02032900
    mov r4, r0
    ldrh r0, [r4, #0x4]
    bl func_02031be4
    cmp r0, #0x0
    ldmeqia sp!, {r3, r4, r5, pc}
    ldrh r0, [r0, #0x10]
    cmp r5, r0
    ldmhsia sp!, {r3, r4, r5, pc}
    strh r5, [r4, #0x2c]
    ldrb r0, [r4, #0x50]
    add r1, r4, #0x50
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
    ldmia sp!, {r3, r4, r5, pc}
}
// clang-format on
