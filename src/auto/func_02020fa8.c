#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02015fb4();
extern void func_02016038();
extern void func_0201c534();
extern void func_0201c670();
extern void func_0203fa64();
extern char data_0206dd38[];
// clang-format off
asm void func_02020fa8(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrh r0, [r5, #0x34]
    bl func_02015fb4
    mov r4, r0
    ldrsb r0, [r5, #0x54]
    bl func_0201c534
    cmp r0, #0x1
    bne L_02021014
    add r1, r5, #0x55
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldrh r0, [r5, #0x34]
    bl func_02016038
    cmp r0, #0x0
    beq L_0202100c
    ldr r0, [r4, #0x40]
    ldrb r0, [r0, #0x3c]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_0202100c
    ldr r0, =data_0206dd38
    ldr r1, [r0, #0x0]
    add r1, r1, #0x800
    str r1, [r0, #0x0]
L_0202100c:
    mov r0, #0x2
    ldmfd sp!, {r3, r4, r5, pc}
L_02021014:
    ldrsb r0, [r5, #0x54]
    bl func_0201c534
    cmp r0, #0x0
    beq L_0202106c
    add r1, r5, #0x55
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldrh r0, [r5, #0x34]
    bl func_02016038
    cmp r0, #0x0
    beq L_02021064
    ldr r0, [r4, #0x40]
    ldrb r0, [r0, #0x3c]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_02021064
    ldr r0, =data_0206dd38
    ldr r1, [r0, #0x0]
    sub r1, r1, #0x800
    str r1, [r0, #0x0]
L_02021064:
    mov r0, #0x2
    ldmfd sp!, {r3, r4, r5, pc}
L_0202106c:
    ldrb r0, [r5, #0x3c]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    beq L_020210c4
    ldrsb r0, [r5, #0x54]
    bl func_0201c534
    cmp r0, #0x0
    bne L_020210c4
    ldrsb r0, [r5, #0x54]
    bl func_0201c670
    ldrb r1, [r5, #0x56]
    cmp r1, r0
    addls r1, r5, #0x55
    movls r0, #0x1
    bls L_020210b8
    mov r0, #0x65
    bl func_0203fa64
    add r1, r5, #0x55
    mov r0, #0x4
L_020210b8:
    swpb r0, r0, [r1]
    mov r0, #0x2
    ldmfd sp!, {r3, r4, r5, pc}
L_020210c4:
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
