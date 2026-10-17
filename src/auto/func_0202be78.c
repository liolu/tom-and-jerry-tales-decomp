#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_0206e6d4[];
extern char data_020880c0[];
extern char data_020880ec[];
// clang-format off
asm void func_0202be78(void) {
    stmfd sp!, {r4, lr}
    ldr r2, =data_020880c0
    ldr r1, =data_020880ec
    ldrh r4, [r2, #0x1a]
    cmp r0, #0x2
    strh r4, [r1, #0x6]
    ldrh lr, [r2, #0x1c]
    strh lr, [r1, #0x8]
    ldrh ip, [r2, #0x1e]
    strh ip, [r1, #0xa]
    bne L_0202bec0
    mov r0, #0x64
    mul r3, r4, r0
    mul r2, lr, r0
    strh r3, [r1, #0x6]
    mul r0, ip, r0
    strh r2, [r1, #0x8]
    strh r0, [r1, #0xa]
L_0202bec0:
    ldr r0, =data_0206e6d4
    ldr r3, =data_020880ec
    ldr ip, [r0, #0x54]
    ldr r2, [r0, #0x58]
    add r1, r3, #0x2
    str ip, [r0, #0x94]
    str r2, [r0, #0x98]
    mov ip, #0x0
    swpb r0, ip, [r1]
    add r1, r3, #0x4
    swpb r0, ip, [r1]
    add r1, r3, #0x1
    swpb r0, ip, [r3]
    add r2, r3, #0x5
    swpb r0, ip, [r1]
    add r1, r3, #0x3
    swpb r0, ip, [r2]
    swpb r0, ip, [r1]
    ldmfd sp!, {r4, pc}
}
// clang-format on
