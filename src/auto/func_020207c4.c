#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02020a0c();
extern void func_02020b38();
extern void func_02020c64();
extern void func_02020d70();
extern void func_02020e9c();
extern void func_02020fa8();
extern void func_020210d0();
extern void func_0202122c();
extern void func_02021250();
extern void func_020213fc();
extern char data_0206dd38[];
extern char data_0206ea14[];
// clang-format off
asm void func_020207c4(void) {
    stmfd sp!, {r4, lr}
    mov r4, r0
    ldr r0, [r4, #0x4]
    cmp r0, #0x0
    bne L_02020854
    ldr r0, =data_0206ea14
    ldr r1, [r4, #0x28]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x28]
    cmp r0, r1
    ble L_02020804
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
L_02020804:
    ldr r0, =data_0206ea14
    ldr r1, [r4, #0x30]
    ldr r0, [r0, #0x0]
    ldr r0, [r0, #0x4]
    ldr r0, [r0, #0x28]
    cmp r0, r1
    movlt r0, #0x1
    ldmltfd sp!, {r4, pc}
    ldrb r0, [r4, #0x57]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_02020920
    mov r0, r4
    bl func_02021250
    ldrb r0, [r4, #0x57]
    add r1, r4, #0x57
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    b L_02020920
L_02020854:
    cmp r0, #0x1
    bne L_020208d0
    ldrh r1, [r4, #0x28]
    ldrh r0, [r4, #0x30]
    ldr r2, [r4, #0x2c]
    add r0, r1, r0
    cmp r2, r0
    bls L_02020884
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
L_02020884:
    ldr r0, [r4, #0x2c]
    add r1, r0, #0x1
    str r1, [r4, #0x2c]
    ldrh r0, [r4, #0x30]
    cmp r1, r0
    movlo r0, #0x1
    ldmlofd sp!, {r4, pc}
    ldrb r0, [r4, #0x57]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_02020920
    mov r0, r4
    bl func_02021250
    ldrb r0, [r4, #0x57]
    add r1, r4, #0x57
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
    b L_02020920
L_020208d0:
    cmp r0, #0x2
    bne L_02020920
    ldr r0, [r4, #0x38]
    cmp r0, #0x2
    bne L_020208f4
    ldrb r0, [r4, #0x3c]
    add r1, r4, #0x3c
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
L_020208f4:
    ldrb r0, [r4, #0x57]
    mov r0, r0, lsl #0x1f
    movs r0, r0, lsr #0x1f
    bne L_02020920
    mov r0, r4
    bl func_02021250
    ldrb r0, [r4, #0x57]
    add r1, r4, #0x57
    bic r0, r0, #0x1
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_02020920:
    ldr r0, [r4, #0x40]
    cmp r0, #0x7
    addls pc, pc, r0, lsl #0x2
    b L_020209a4
L_02020930:
    b L_020209a4
    b L_0202095c
    b L_02020968
    b L_02020974
    b L_02020950
    b L_02020980
    b L_0202098c
    b L_02020998
L_02020950:
    mov r0, r4
    bl func_02020a0c
    b L_020209a8
L_0202095c:
    mov r0, r4
    bl func_02020b38
    b L_020209a8
L_02020968:
    mov r0, r4
    bl func_02020c64
    b L_020209a8
L_02020974:
    mov r0, r4
    bl func_02020d70
    b L_020209a8
L_02020980:
    mov r0, r4
    bl func_02020e9c
    b L_020209a8
L_0202098c:
    mov r0, r4
    bl func_02020fa8
    b L_020209a8
L_02020998:
    mov r0, r4
    bl func_020210d0
    b L_020209a8
L_020209a4:
    mov r0, #0x2
L_020209a8:
    ldr r1, =data_0206dd38
    ldr r2, [r1, #0x0]
    cmp r2, #0x800
    movlt r2, #0x800
    strlt r2, [r1, #0x0]
    blt L_020209cc
    cmp r2, #0x3000
    movgt r2, #0x3000
    strgt r2, [r1, #0x0]
L_020209cc:
    ldrb r1, [r4, #0x3c]
    mov r1, r1, lsl #0x1e
    movs r1, r1, lsr #0x1f
    ldmeqfd sp!, {r4, pc}
    ldrb r1, [r4, #0x55]
    mov r0, r4
    bl func_020213fc
    ldr r0, [r4, #0x4]
    cmp r0, #0x2
    beq L_020209fc
    mov r0, r4
    bl func_0202122c
L_020209fc:
    mov r0, #0x2
    ldmfd sp!, {r4, pc}
}
// clang-format on
