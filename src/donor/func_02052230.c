/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b791c from projets/spore-creatures/src/donor/func_020b791c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
// clang-format off
#pragma cplusplus off
asm void func_02052230(register const void* src, register void* dest) {
    stmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    sub sp, sp, #4
    add r2, r0, #4
    add r7, r2, #1
    ldrb r10, [r0]
    and r4, r10, #0xf
    mov r3, #0
    mov lr, #0
    and r10, r4, #7
    add r11, r10, #4
    str r11, [sp]
    ldr r10, [r0]
    mov r12, r10, lsr #8
    ldrb r10, [r2]
    add r10, r10, #1
    add r0, r2, r10, lsl #1
    mov r2, r7
_2067c60:
    cmp r12, #0
    ble _2067ce8
    mov r8, #0x20
    ldr r5, [r0], #4
_2067c70:
    subs r8, r8, #1
    blt _2067c60
    mov r10, #1
    and r9, r10, r5, lsr #31
    ldrb r6, [r2]
    mov r6, r6, lsl r9
    mov r10, r2, lsr #1
    mov r10, r10, lsl #1
    ldrb r11, [r2]
    and r11, r11, #0x3f
    add r11, r11, #1
    add r10, r10, r11, lsl #1
    add r2, r10, r9
    tst r6, #0x80
    beq _2067cd8
    mov r3, r3, lsr r4
    ldrb r10, [r2]
    rsb r11, r4, #0x20
    orr r3, r3, r10, lsl r11
    mov r2, r7
    add lr, lr, #1
    ldr r11, [sp]
    cmp lr, r11
    streq r3, [r1], #4
    subeq r12, r12, #4
    moveq lr, #0
_2067cd8:
    cmp r12, #0
    movgt r5, r5, lsl #1
    bgt _2067c70
    b _2067c60
_2067ce8:
    add sp, sp, #4
    ldmfd sp!, {r4, r5, r6, r7, r8, r9, r10, r11, lr}
    bx lr
}
// clang-format on
