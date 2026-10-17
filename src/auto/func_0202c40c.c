#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0201d10c();
extern void func_0202bfbc();
extern void func_0202c1e4();
extern void func_0202c2ac();
extern void func_0204221c();
extern char data_0206cbcc[];
extern char data_0206e6d4[];
extern char data_0206e6fa[];
extern char data_020880ec[];
// clang-format off
asm void func_0202c40c(void) {
    stmfd sp!, {r4, r5, r6, lr}
    mov r5, r1
    mov r6, r0
    bl func_0202c1e4
    mov r4, r0
    mov r0, r5
    bl func_0202c2ac
    cmp r4, #0x1
    blt L_0202c468
    cmp r5, #0x1
    beq L_0202c468
    ldr r3, =data_0206e6d4
    ldrb r1, [r3, #0x5f]
    mov r2, r1, lsl #0x1d
    movs r2, r2, lsr #0x1f
    bne L_0202c468
    bic r1, r1, #0x1
    orr r1, r1, #0x1
    add r2, r3, #0x5f
    swpb r1, r1, [r2]
    ldrb r1, [r3, #0x5f]
    orr r1, r1, #0x4
    swpb r1, r1, [r2]
L_0202c468:
    cmp r5, #0x1
    bne L_0202c4e4
    ldr r0, =data_020880ec
    ldrh r4, [r0, #0xa]
    cmp r6, r4
    blo L_0202c7dc
    ldr r3, =data_0206e6d4
    ldr r1, =data_0206e6fa
    ldrb r2, [r3, #0x18]
    mov r2, r2, lsl #0x3
    ldrh r1, [r1, r2]
    cmp r1, r4
    bhs L_0202c7dc
    ldrb r4, [r3, #0x50]
    add r1, r3, #0x50
    add r2, r0, #0x4
    add r0, r4, #0x1
    swpb r0, r0, [r1]
    mov r0, #0x1
    swpb r0, r0, [r2]
    ldrb r0, [r3, #0x5f]
    mov r1, r0, lsl #0x1c
    movs r1, r1, lsr #0x1f
    bne L_0202c7dc
    orr r0, r0, #0x2
    add r1, r3, #0x5f
    swpb r0, r0, [r1]
    ldrb r0, [r3, #0x5f]
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
    b L_0202c7dc
L_0202c4e4:
    cmp r0, #0x3
    bhs L_0202c7dc
    cmp r4, #0x3
    bne L_0202c7dc
    cmp r5, #0x3
    bne L_0202c690
    ldr r0, =data_0206e6d4
    ldr r2, =data_0206cbcc
    ldrb r0, [r0, #0x18]
    sub r1, r5, #0x1
    add r0, r2, r0, lsl #0x2
    ldrb r0, [r1, r0]
    cmp r0, #0xb
    bgt L_0202c524
    beq L_0202c65c
    b L_0202c7c8
L_0202c524:
    sub r0, r0, #0x12
    cmp r0, #0x8
    addls pc, pc, r0, lsl #0x2
    b L_0202c7c8
L_0202c534:
    b L_0202c558
    b L_0202c58c
    b L_0202c7c8
    b L_0202c7c8
    b L_0202c5c0
    b L_0202c7c8
    b L_0202c628
    b L_0202c7c8
    b L_0202c5f4
L_0202c558:
    mov r0, #0x12
    bl func_0201d10c
    cmp r0, #0x0
    bne L_0202c7c8
    ldr r1, =data_0206e6d4
    mov r0, #0x71
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    orr r1, r3, #0x4
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_0202c7c8
L_0202c58c:
    mov r0, #0x13
    bl func_0201d10c
    cmp r0, #0x0
    bne L_0202c7c8
    ldr r1, =data_0206e6d4
    mov r0, #0x72
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    orr r1, r3, #0x8
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_0202c7c8
L_0202c5c0:
    mov r0, #0x16
    bl func_0201d10c
    cmp r0, #0x0
    bne L_0202c7c8
    ldr r1, =data_0206e6d4
    mov r0, #0x75
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    orr r1, r3, #0x40
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_0202c7c8
L_0202c5f4:
    mov r0, #0x1a
    bl func_0201d10c
    cmp r0, #0x0
    bne L_0202c7c8
    ldr r1, =data_0206e6d4
    mov r0, #0x79
    ldrb r3, [r1, #0x99]
    add r2, r1, #0x99
    orr r1, r3, #0x40
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_0202c7c8
L_0202c628:
    mov r0, #0x18
    bl func_0201d10c
    cmp r0, #0x0
    bne L_0202c7c8
    ldr r1, =data_0206e6d4
    mov r0, #0x78
    ldrb r3, [r1, #0x99]
    add r2, r1, #0x99
    orr r1, r3, #0x10
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_0202c7c8
L_0202c65c:
    mov r0, #0xb
    bl func_0201d10c
    cmp r0, #0x0
    bne L_0202c7c8
    ldr r1, =data_0206e6d4
    mov r0, #0x6a
    ldrb r3, [r1, #0x99]
    add r2, r1, #0x99
    orr r1, r3, #0x2
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_0202c7c8
L_0202c690:
    cmp r5, #0x2
    bne L_0202c77c
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x18]
    cmp r2, #0x0
    beq L_0202c6b8
    add r0, r2, #0xfd
    and r0, r0, #0xff
    cmp r0, #0x1
    bhi L_0202c77c
L_0202c6b8:
    ldr r0, =data_0206cbcc
    sub r1, r5, #0x1
    add r0, r0, r2, lsl #0x2
    ldrb r0, [r1, r0]
    cmp r0, #0x4
    beq L_0202c718
    cmp r0, #0x11
    beq L_0202c6e4
    cmp r0, #0x15
    beq L_0202c748
    b L_0202c7c8
L_0202c6e4:
    mov r0, #0x11
    bl func_0201d10c
    cmp r0, #0x0
    bne L_0202c7c8
    ldr r1, =data_0206e6d4
    mov r0, #0x70
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    orr r1, r3, #0x2
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_0202c7c8
L_0202c718:
    mov r0, #0x4
    bl func_0201d10c
    cmp r0, #0x0
    bne L_0202c7c8
    ldr r1, =data_0206e6d4
    mov r0, #0x63
    ldr r2, [r1, #0x94]
    orr r2, r2, #0x10
    str r2, [r1, #0x94]
    bl func_0204221c
    bl func_0202bfbc
    b L_0202c7c8
L_0202c748:
    mov r0, #0x15
    bl func_0201d10c
    cmp r0, #0x0
    bne L_0202c7c8
    ldr r1, =data_0206e6d4
    mov r0, #0x74
    ldrb r3, [r1, #0x98]
    add r2, r1, #0x98
    orr r1, r3, #0x20
    swpb r1, r1, [r2]
    bl func_0204221c
    bl func_0202bfbc
    b L_0202c7c8
L_0202c77c:
    ldr r3, =data_0206e6d4
    ldr r0, =data_020880ec
    ldrb r4, [r3, #0x50]
    add r1, r3, #0x50
    add r2, r0, #0x4
    add r0, r4, #0x1
    swpb r0, r0, [r1]
    mov r0, #0x1
    ldrb r1, [r3, #0x5f]
    swpb r0, r0, [r2]
    mov r0, r1, lsl #0x1c
    movs r0, r0, lsr #0x1f
    bne L_0202c7c8
    orr r0, r1, #0x2
    add r1, r3, #0x5f
    swpb r0, r0, [r1]
    ldrb r0, [r3, #0x5f]
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
L_0202c7c8:
    ldr r0, =data_0206e6d4
    ldrb r2, [r0, #0x51]
    add r1, r0, #0x51
    add r0, r2, #0x1
    swpb r0, r0, [r1]
L_0202c7dc:
    ldr r1, =data_0206e6d4
    ldrb r0, [r1, #0x51]
    cmp r0, #0x5
    bne L_0202c818
    ldr r0, [r1, #0x54]
    mov r0, r0, lsl #0x2
    movs r0, r0, lsr #0x1f
    bne L_0202c818
    ldr r2, [r1, #0x94]
    ldr r0, =data_020880ec
    orr r2, r2, #0x20000000
    str r2, [r1, #0x94]
    add r1, r0, #0x3
    mov r0, #0x1
    swpb r0, r0, [r1]
L_0202c818:
    ldr r1, =data_0206e6d4
    ldrb r0, [r1, #0x51]
    cmp r0, #0xa
    ldmnefd sp!, {r4, r5, r6, pc}
    ldr r0, [r1, #0x54]
    mov r0, r0, lsl #0x3
    movs r0, r0, lsr #0x1f
    ldmnefd sp!, {r4, r5, r6, pc}
    ldr r2, [r1, #0x94]
    ldr r0, =data_020880ec
    orr r2, r2, #0x10000000
    str r2, [r1, #0x94]
    add r1, r0, #0x3
    mov r0, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {r4, r5, r6, pc}
}
// clang-format on
