#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02015fb4();
extern void func_02016038();
extern void func_0201c534();
extern void func_0203fa64();
extern char data_0206dd38[];
// clang-format off
asm void func_020210d0(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, r0
    ldrh r0, [r5, #0x34]
    bl func_02015fb4
    mov r4, r0
    ldrsb r0, [r5, #0x54]
    bl func_0201c534
    cmp r0, #0x1
    bne L_0202113c
    add r1, r5, #0x55
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldrh r0, [r5, #0x34]
    bl func_02016038
    cmp r0, #0x0
    beq L_02021134
    ldr r0, [r4, #0x40]
    ldrb r0, [r0, #0x3c]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_02021134
    ldr r0, =data_0206dd38
    ldr r1, [r0, #0x0]
    add r1, r1, #0x800
    str r1, [r0, #0x0]
L_02021134:
    mov r0, #0x2
    ldmfd sp!, {r3, r4, r5, pc}
L_0202113c:
    ldrsb r0, [r5, #0x54]
    bl func_0201c534
    cmp r0, #0x0
    beq L_02021194
    add r1, r5, #0x55
    mov r0, #0x4
    swpb r0, r0, [r1]
    ldrh r0, [r5, #0x34]
    bl func_02016038
    cmp r0, #0x0
    beq L_0202118c
    ldr r0, [r4, #0x40]
    ldrb r0, [r0, #0x3c]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    bne L_0202118c
    ldr r0, =data_0206dd38
    ldr r1, [r0, #0x0]
    sub r1, r1, #0x800
    str r1, [r0, #0x0]
L_0202118c:
    mov r0, #0x2
    ldmfd sp!, {r3, r4, r5, pc}
L_02021194:
    ldrb r0, [r5, #0x3c]
    mov r0, r0, lsl #0x1e
    movs r0, r0, lsr #0x1f
    beq L_020211d0
    ldrsb r0, [r5, #0x54]
    bl func_0201c534
    cmp r0, #0x0
    bne L_020211d0
    mov r0, #0x65
    bl func_0203fa64
    add r1, r5, #0x55
    mov r0, #0x4
    swpb r0, r0, [r1]
    mov r0, #0x2
    ldmfd sp!, {r3, r4, r5, pc}
L_020211d0:
    mov r0, #0x1
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
