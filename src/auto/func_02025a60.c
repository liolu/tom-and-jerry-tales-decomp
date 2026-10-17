#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a0f8();
extern void func_020222b8();
extern void func_0202274c();
extern void func_020252a4();
extern void func_0202541c();
extern void func_020259d4();
extern void func_02027a38();
extern void func_02027ac8();
extern void func_02027f3c();
extern void func_0203d0d8();
extern char data_0206b918[];
extern char data_020877d0[];
extern char data_02087844[];
extern char data_020878d4[];
extern char data_020878e0[];
extern char data_020b8b6c[];
// clang-format off
asm void func_02025a60(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0xc
    ldr r0, =data_020878d4
    mov r1, #0x0
    mov r2, #0x1
    bl func_0202274c
    mov r4, r0
    tst r4, #0x1000000
    addeq sp, sp, #0xc
    ldmeqfd sp!, {r3, r4, pc}
    bl func_020259d4
    and r4, r4, #0xff
    cmp r4, #0x11
    bne L_02025ad0
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x28]
    cmp r0, #0x5
    beq L_02025ad0
    mov r0, #0x1f
    bl func_0200a0f8
    mov ip, #0xb
    ldr r3, =data_020877d0
    sub r0, ip, #0x1b
    mov r1, #0x1e
    mov r2, #0x3
    str ip, [r3, #0x2c]
    bl func_020222b8
    b L_02025b14
L_02025ad0:
    mov r0, #0x1
    bl func_0200a0f8
    ldr r1, =data_020877d0
    ldr r2, =data_020878e0
    add r0, r1, #0x6
    ldr r3, [r1, #0x28]
    add r1, r0, #0x100
    swpb r0, r3, [r1]
    mov r1, #0x1
    ldr r0, [r2, r3, lsl #0x2]
    bl func_0202541c
    mov r0, #0x0
    bl func_02027a38
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x28]
    and r0, r0, #0xff
    bl func_02027ac8
L_02025b14:
    cmp r4, #0x9
    bne L_02025bb8
    mov r0, #0x20
    bl func_0200a0f8
    ldr r0, =data_0206b918
    ldr r1, =data_020877d0
    mov r3, #0x3
    ldr r2, [r0, #0x4]
    str r3, [r1, #0x2c]
    add r1, r1, #0x6a
    swpb r0, r2, [r1]
    ldr r0, =data_02087844
    mov r1, #0x1
    ldr r0, [r0, r2, lsl #0x2]
    bl func_020252a4
    ldr r1, =data_020877d0
    mov r0, #0x1
    ldr r2, [r1, #0x1c]
    add r2, r2, #0x1
    str r2, [r1, #0x24]
    bl func_02027a38
    ldr r0, =data_020877d0
    ldrb r0, [r0, #0xf]
    cmp r0, #0x0
    beq L_02025bb0
    mov r0, #0x0
    str r0, [sp, #0x0]
    ldr ip, =data_020b8b6c
    str r0, [sp, #0x4]
    mov r0, #0x40
    mov r1, #0x4d
    mov r2, #0x80
    mov r3, #0x1e
    str ip, [sp, #0x8]
    bl func_0203d0d8
    ldr r0, =data_020877d0
    mov r2, #0x0
    add r1, r0, #0xf
    swpb r0, r2, [r1]
L_02025bb0:
    mov r0, #0x0
    bl func_02027f3c
L_02025bb8:
    cmp r4, #0xc
    bne L_02025be4
    mov r4, #0xb
    ldr r3, =data_020877d0
    sub r0, r4, #0x1b
    mov r1, #0x1e
    mov r2, #0x3
    str r4, [r3, #0x2c]
    bl func_020222b8
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, pc}
L_02025be4:
    cmp r4, #0xd
    bne L_02025c10
    mov r4, #0xb
    ldr r3, =data_020877d0
    sub r0, r4, #0x1b
    mov r1, #0x1e
    mov r2, #0x3
    str r4, [r3, #0x2c]
    bl func_020222b8
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, pc}
L_02025c10:
    cmp r4, #0xf
    bne L_02025c3c
    mov r4, #0xb
    ldr r3, =data_020877d0
    sub r0, r4, #0x1b
    mov r1, #0x1e
    mov r2, #0x3
    str r4, [r3, #0x2c]
    bl func_020222b8
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, pc}
L_02025c3c:
    cmp r4, #0xe
    addne sp, sp, #0xc
    ldmnefd sp!, {r3, r4, pc}
    mov r4, #0xb
    ldr r3, =data_020877d0
    sub r0, r4, #0x1b
    mov r1, #0x1e
    mov r2, #0x3
    str r4, [r3, #0x2c]
    bl func_020222b8
    add sp, sp, #0xc
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
