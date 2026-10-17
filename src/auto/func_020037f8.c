#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020037e0();
extern void func_02003b60();
extern char data_020692ec[];
extern char data_0206e670[];
extern char data_0206e684[];
extern char data_0206e6d4[];
extern char data_0206fcac[];
// clang-format off
asm void func_020037f8(void) {
    stmfd sp!, {r4, lr}
    ldr ip, =data_0206fcac
    ldr r4, =0x1864
    mov lr, #0x1
    mla r4, r2, r4, ip
    swpb r2, r2, [r4]
    add ip, r4, #0x8
    swpb r2, lr, [ip]
    add ip, r4, #0x9
    swpb r2, lr, [ip]
    add ip, r4, #0xa
    swpb r2, lr, [ip]
    ldr r2, =data_020692ec
    str r0, [r4, #0xc]
    ldr r2, [r2, #0x0]
    cmp r2, #0x4
    beq L_0200386c
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    bne L_0200386c
    ldr r0, [r4, #0xc]
    cmp r0, #0x1
    bhi L_0200386c
    ldr r0, =data_0206e6d4
    add r1, r4, #0x7a
    ldrb r0, [r0, #0x5e]
    swpb r0, r0, [r1]
    b L_020038a8
L_0200386c:
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    beq L_020038a0
    cmp r2, #0x1
    bne L_020038a0
    ldr r0, [r4, #0xc]
    cmp r0, #0x1
    bhi L_020038a0
    add r1, r4, #0x7a
    mov r0, #0x4
    swpb r0, r0, [r1]
    b L_020038a8
L_020038a0:
    add r2, r4, #0x7a
    swpb r0, r1, [r2]
L_020038a8:
    mov r0, r4
    mov r2, r3
    mov r1, #0x1
    bl func_02003b60
    mov r0, r4
    mov r1, #0x1
    bl func_020037e0
    ldr r3, =data_0206e670
    mov lr, #0x1
    ldrb r0, [r3, #0x0]
    add r2, r4, #0x1800
    mov ip, #0x0
    and r0, r0, #0x7
    add r0, r0, r0, lsl #0x1
    add r0, r4, r0
    add r0, r0, #0x1000
    add r0, r0, #0x48
    add r1, r0, #0x800
    swpb r0, lr, [r1]
    ldrb r3, [r3, #0x0]
    and r0, r3, #0x7
    add r0, r0, r0, lsl #0x1
    add r0, r4, r0
    add r0, r0, #0x1000
    add r0, r0, #0x4a
    add r1, r0, #0x800
    swpb r0, r3, [r1]
    strh ip, [r2, #0x20]
    ldmfd sp!, {r4, pc}
}
// clang-format on
