#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a0f8();
extern void func_020163d4();
extern void func_020306fc();
extern char data_0206e6d4[];
extern char data_02087f80[];
// clang-format off
asm void func_0202b278(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_02087f80
    ldrb r0, [r0, #0x0]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    ldmfd sp!, {r3, pc}
L_0202b290:
    b L_0202b2ac
    b L_0202b2d0
    b L_0202b2f4
    b L_0202b318
    b L_0202b33c
    b L_0202b360
    b L_0202b384
L_0202b2ac:
    mov r0, #0x6
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r1, =data_02087f80
    ldrb r0, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_0202b2d0:
    mov r0, #0x7
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r1, =data_02087f80
    ldrb r0, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_0202b2f4:
    mov r0, #0x8
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r1, =data_02087f80
    ldrb r0, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_0202b318:
    mov r0, #0x9
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r1, =data_02087f80
    ldrb r0, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_0202b33c:
    mov r0, #0x9
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r1, =data_02087f80
    ldrb r0, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_0202b360:
    mov r0, #0x8
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r1, =data_02087f80
    ldrb r0, [r1, #0x0]
    add r0, r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_0202b384:
    mov r0, #0x3
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mov r0, #0xa
    bl func_0200a0f8
    ldr r0, =data_0206e6d4
    ldr r1, [r0, #0x54]
    orr r1, r1, #0xc000000
    str r1, [r0, #0x54]
    bl func_020163d4
    ldr r1, =data_02087f80
    mov r0, #0x0
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
