#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201d0f4();
extern void func_0202c40c();
extern void func_0202c868();
extern void func_0202cb84();
extern char data_020692ec[];
extern char data_0206e6d4[];
extern char data_0206e734[];
extern char data_020880ec[];
// clang-format off
asm void func_0202caac(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r6, r0
    mov r5, r1
    mov r4, r2
    bl func_0202c40c
    mov r0, r6
    mov r1, r5
    bl func_0202c868
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_0202cb64
    cmp r4, #0x0
    beq L_0202cb64
    ldr r0, =data_0206e6d4
    ldrb r0, [r0, #0x18]
    add r0, r0, #0x1
    and r0, r0, #0xff
    bl func_0201d0f4
    ldr r1, =data_0206e6d4
    ldrb r2, [r1, #0x18]
    cmp r2, #0x6
    beq L_0202cb4c
    ldrb r1, [r1, #0x1e]
    tst r0, r1
    bne L_0202cb4c
    ldr r0, =data_0206e734
    ldr r1, =data_020880ec
    ldrb ip, [r0, #0x0]
    add r2, r1, #0x1
    mov lr, #0x1
    mov r1, ip, lsl #0x1d
    mov r1, r1, lsr #0x1d
    add r1, r1, #0x1
    and r3, r1, #0xff
    swpb r1, lr, [r2]
    bic r2, ip, #0x7
    and r1, r3, #0x7
    orr r1, r2, r1
    swpb r1, r1, [r0]
L_0202cb4c:
    ldr r0, =data_0206e6d4
    ldrb r3, [r0, #0x1e]
    ldrb r2, [r0, #0x1]
    add r1, r0, #0x1e
    orr r0, r3, r2, lsl #0x1
    swpb r0, r0, [r1]
L_0202cb64:
    cmp r4, #0x0
    ldmeqfd sp!, {r4, r5, r6, pc}
    bl func_0202cb84
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
