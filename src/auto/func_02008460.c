#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02007770();
extern void func_020085c8();
extern void func_02030898();
extern char data_0206e674[];
extern char data_0206e678[];
// clang-format off
asm void func_02008460(void) {
    stmfd sp!, {r3, r4, r5, lr}
    sub sp, sp, #0x8
    add r0, r0, #0x48
    and r2, r1, #0x7
    add r5, r0, #0x1800
    add r0, r2, r2, lsl #0x1
    add r4, r5, r0
    sub r0, r1, #0x1
    add r2, r4, #0x2
    and r3, r0, #0x7
    swpb r0, r1, [r2]
    add r2, r3, r3, lsl #0x1
    add r0, sp, #0x0
    add r1, sp, #0x4
    add r5, r5, r2
    bl func_02030898
    bl func_02007770
    ldr r0, =data_0206e674
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_020084bc
    add r0, sp, #0x0
    bl func_020085c8
L_020084bc:
    mov r0, #0x2
    swpb r0, r0, [r4]
    ldr r0, =data_0206e678
    ldrb r0, [r0, #0x0]
    cmp r0, #0xa
    addls pc, pc, r0, lsl #0x2
    b L_020085a4
L_020084d8:
    b L_020085a4
    b L_02008504
    b L_02008518
    b L_020085a4
    b L_0200852c
    b L_02008554
    b L_0200857c
    b L_020085a4
    b L_02008540
    b L_02008568
    b L_02008590
L_02008504:
    add r1, r4, #0x1
    mov r0, #0xc0
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
L_02008518:
    add r1, r4, #0x1
    mov r0, #0x40
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
L_0200852c:
    add r1, r4, #0x1
    mov r0, #0x80
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
L_02008540:
    add r1, r4, #0x1
    mov r0, #0x0
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
L_02008554:
    add r1, r4, #0x1
    mov r0, #0xa0
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
L_02008568:
    add r1, r4, #0x1
    mov r0, #0xe0
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
L_0200857c:
    add r1, r4, #0x1
    mov r0, #0x60
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
L_02008590:
    add r1, r4, #0x1
    mov r0, #0x20
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
L_020085a4:
    mov r0, #0x1
    swpb r0, r0, [r4]
    add r1, r4, #0x1
    ldrb r0, [r5, #0x1]
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
