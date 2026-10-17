#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a0f8();
extern void func_020163d4();
extern void func_020306fc();
extern char data_0206e6d4[];
extern char data_020871f4[];
// clang-format off
asm void func_020173f4(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020871f4
    ldrb r0, [r0, #0x1]
    cmp r0, #0x6
    addls pc, pc, r0, lsl #0x2
    ldmfd sp!, {r3, pc}
L_0201740c:
    b L_02017428
    b L_02017450
    b L_02017478
    b L_020174a0
    b L_020174c8
    b L_020174f0
    b L_02017518
L_02017428:
    mov r0, #0x6
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r0, =data_020871f4
    ldrb r2, [r0, #0x1]
    add r1, r0, #0x1
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_02017450:
    mov r0, #0x7
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r0, =data_020871f4
    ldrb r2, [r0, #0x1]
    add r1, r0, #0x1
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_02017478:
    mov r0, #0x8
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r0, =data_020871f4
    ldrb r2, [r0, #0x1]
    add r1, r0, #0x1
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_020174a0:
    mov r0, #0x9
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r0, =data_020871f4
    ldrb r2, [r0, #0x1]
    add r1, r0, #0x1
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_020174c8:
    mov r0, #0x9
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r0, =data_020871f4
    ldrb r2, [r0, #0x1]
    add r1, r0, #0x1
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_020174f0:
    mov r0, #0x8
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    ldr r0, =data_020871f4
    ldrb r2, [r0, #0x1]
    add r1, r0, #0x1
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_02017518:
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
    ldr r0, =data_020871f4
    mov r2, #0x0
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
