#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020306c0();
extern void func_020306fc();
extern char data_020692ec[];
extern char data_0206e674[];
extern char data_0206e678[];
// clang-format off
asm void func_02007770(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_020692ec
    ldr r1, =data_0206e678
    ldr r0, [r0, #0x0]
    mov r2, #0x0
    cmp r0, #0x0
    swpb r0, r2, [r1]
    bne L_02007854
    mov r0, #0x5
    bl func_020306c0
    cmp r0, #0x0
    bne L_020077b0
    mov r0, #0xb
    bl func_020306c0
    cmp r0, #0x0
    beq L_020077c0
L_020077b0:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_020077c0:
    mov r0, #0x4
    bl func_020306c0
    cmp r0, #0x0
    bne L_020077e0
    mov r0, #0x0
    bl func_020306c0
    cmp r0, #0x0
    beq L_020077f0
L_020077e0:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
L_020077f0:
    mov r0, #0x6
    bl func_020306c0
    cmp r0, #0x0
    bne L_02007810
    mov r0, #0xa
    bl func_020306c0
    cmp r0, #0x0
    beq L_02007820
L_02007810:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x4
    swpb r0, r0, [r1]
L_02007820:
    mov r0, #0x7
    bl func_020306c0
    cmp r0, #0x0
    bne L_02007840
    mov r0, #0x1
    bl func_020306c0
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
L_02007840:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
L_02007854:
    ldr r0, =data_0206e674
    ldrb r0, [r0, #0x0]
    cmp r0, #0x0
    ldmnefd sp!, {r3, pc}
    mov r0, #0x5
    bl func_020306c0
    cmp r0, #0x0
    bne L_02007884
    mov r0, #0xb
    bl func_020306c0
    cmp r0, #0x0
    beq L_02007894
L_02007884:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x1
    swpb r0, r0, [r1]
L_02007894:
    mov r0, #0x4
    bl func_020306c0
    cmp r0, #0x0
    bne L_020078b4
    mov r0, #0x0
    bl func_020306c0
    cmp r0, #0x0
    beq L_020078c4
L_020078b4:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x2
    swpb r0, r0, [r1]
L_020078c4:
    mov r0, #0x6
    bl func_020306c0
    cmp r0, #0x0
    bne L_020078e4
    mov r0, #0xa
    bl func_020306c0
    cmp r0, #0x0
    beq L_020078f4
L_020078e4:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x4
    swpb r0, r0, [r1]
L_020078f4:
    mov r0, #0x7
    bl func_020306c0
    cmp r0, #0x0
    bne L_02007914
    mov r0, #0x1
    bl func_020306c0
    cmp r0, #0x0
    beq L_02007924
L_02007914:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x8
    swpb r0, r0, [r1]
L_02007924:
    mov r0, #0x5
    bl func_020306fc
    cmp r0, #0x0
    bne L_02007944
    mov r0, #0xb
    bl func_020306fc
    cmp r0, #0x0
    beq L_02007954
L_02007944:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x10
    swpb r0, r0, [r1]
L_02007954:
    mov r0, #0x4
    bl func_020306fc
    cmp r0, #0x0
    bne L_02007974
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    beq L_02007984
L_02007974:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x20
    swpb r0, r0, [r1]
L_02007984:
    mov r0, #0x6
    bl func_020306fc
    cmp r0, #0x0
    bne L_020079a4
    mov r0, #0xa
    bl func_020306fc
    cmp r0, #0x0
    beq L_020079b4
L_020079a4:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x40
    swpb r0, r0, [r1]
L_020079b4:
    mov r0, #0x7
    bl func_020306fc
    cmp r0, #0x0
    bne L_020079d4
    mov r0, #0x1
    bl func_020306fc
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
L_020079d4:
    ldr r1, =data_0206e678
    ldrb r0, [r1, #0x0]
    orr r0, r0, #0x80
    swpb r0, r0, [r1]
    ldmfd sp!, {r3, pc}
}
// clang-format on
