#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02006b70();
extern void func_0201490c();
extern void func_02014cf0();
extern void func_02014e34();
extern void func_0201dc08();
extern char data_0206e6d4[];
extern char data_020880c0[];
extern char data_020aecfc[];
// clang-format off
asm void func_020059ac(void) {
    stmfd sp!, {r3, r4, r5, lr}
    ldr r1, =data_0206e6d4
    ldr r1, [r1, #0xb0]
    cmp r1, #0x0
    ldmnefd sp!, {r3, r4, r5, pc}
    ldr r2, =data_020aecfc
    mov r1, #0xbc
    mla r4, r0, r1, r2
    ldr r0, [r4, #0x58]
    mov r0, r0, lsl #0x19
    movs r0, r0, lsr #0x1f
    beq L_02005a20
    mov r0, #0x32
    bl func_0201dc08
    bl func_02006b70
    mov r0, #0xd
    bl func_02014cf0
    mov r5, r0
    mov r1, r5
    mov r0, #0xd
    bl func_0201490c
    add r1, r5, #0x40
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldr r1, =data_020880c0
    mov r0, r5
    ldrb r1, [r1, #0x20]
    strh r1, [r5, #0x28]
    bl func_02014e34
L_02005a20:
    ldr r0, [r4, #0x58]
    bic r0, r0, #0x40
    str r0, [r4, #0x58]
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
