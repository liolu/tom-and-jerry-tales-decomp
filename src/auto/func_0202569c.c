#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200a0f8();
extern void func_0201cf68();
extern void func_0201cf84();
extern void func_0201d0f4();
extern void func_0202274c();
extern void func_02022d20();
extern void func_020252a4();
extern void func_0202541c();
extern void func_02027ac8();
extern void func_0203b96c();
extern char data_020692ec[];
extern char data_0206b918[];
extern char data_0206e684[];
extern char data_0206e6d4[];
extern char data_020877d0[];
extern char data_02087838[];
extern char data_02087844[];
extern char data_02087908[];
extern char data_02087998[];
extern char data_02087a70[];
extern char data_02087c20[];
extern char data_02087d40[];
// clang-format off
asm void func_0202569c(void) {
    stmfd sp!, {r3, r4, r5, lr}
    mov r5, #0x0
    ldr r0, =data_02087838
    mov r1, r5
    mov r2, #0x1
    bl func_0202274c
    tst r0, #0x1000000
    ldmeqfd sp!, {r3, r4, r5, pc}
    and r4, r0, #0xff
    cmp r4, #0x1
    bne L_020256e0
    mov r0, #0x1
    bl func_0201cf68
    cmp r0, #0x0
    ldrne r0, =data_0206b918
    movne r5, #0x1
    strne r5, [r0, #0x4]
L_020256e0:
    cmp r4, #0x0
    bne L_02025708
    mov r0, #0x0
    bl func_0201cf68
    cmp r0, #0x0
    beq L_02025708
    ldr r0, =data_0206b918
    mov r1, #0x0
    str r1, [r0, #0x4]
    mov r5, #0x1
L_02025708:
    cmp r4, #0x2
    bne L_02025730
    mov r0, #0x2
    bl func_0201cf68
    cmp r0, #0x0
    beq L_02025730
    ldr r0, =data_0206b918
    mov r1, #0x2
    str r1, [r0, #0x4]
    mov r5, #0x1
L_02025730:
    cmp r4, #0x3
    bne L_02025758
    mov r0, #0x3
    bl func_0201cf68
    cmp r0, #0x0
    beq L_02025758
    ldr r0, =data_0206b918
    mov r1, #0x3
    str r1, [r0, #0x4]
    mov r5, #0x1
L_02025758:
    cmp r4, #0x5
    bne L_02025780
    mov r0, #0x5
    bl func_0201cf68
    cmp r0, #0x0
    beq L_02025780
    ldr r0, =data_0206b918
    mov r1, #0x5
    str r1, [r0, #0x4]
    mov r5, #0x1
L_02025780:
    cmp r4, #0x4
    bne L_020257a8
    mov r0, #0x4
    bl func_0201cf68
    cmp r0, #0x0
    beq L_020257a8
    ldr r0, =data_0206b918
    mov r1, #0x4
    str r1, [r0, #0x4]
    mov r5, #0x1
L_020257a8:
    cmp r4, #0x6
    bne L_020257c8
    ldr r1, =data_0206b918
    mov r2, #0x6
    ldr r0, =data_0206e684
    mov r5, #0x1
    str r2, [r1, #0x4]
    str r5, [r0, #0x0]
L_020257c8:
    cmp r4, #0xa
    bne L_02025838
    mov r0, #0x20
    bl func_0200a0f8
    ldr r3, =data_0206b918
    mov r0, #0x0
    ldr r1, [r3, #0x4]
    mov r2, r1, lsr #0x1f
    rsb r1, r2, r1, lsl #0x1d
    add r1, r2, r1, ror #0x1d
    str r1, [r3, #0x4]
    bl func_0203b96c
    ldr r2, =data_020877d0
    mov r0, #0xa
    add r1, r2, #0x9
    mov r3, #0x0
    str r0, [r2, #0x2c]
    swpb r0, r3, [r1]
    add r1, r2, #0xb
    mov r0, #0xf
    swpb r0, r0, [r1]
    ldr r1, =data_020692ec
    mov r0, #0x3
    str r0, [r2, #0x30]
    ldr r0, =data_0206e684
    str r3, [r1, #0x0]
    str r3, [r0, #0x0]
    ldmfd sp!, {r3, r4, r5, pc}
L_02025838:
    cmp r5, #0x0
    beq L_0202597c
    ldr r1, =data_020877d0
    mov r2, #0xa
    mov r0, #0x21
    str r2, [r1, #0x24]
    bl func_0200a0f8
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_0201d0f4
    ldr r1, =data_0206e6d4
    ldr r3, =data_020877d0
    add r1, r1, #0x1
    swpb r0, r0, [r1]
    ldr r0, =data_02087a70
    mov r4, #0x7
    mov r1, r0
    mov r2, #0x4
    str r4, [r3, #0x2c]
    bl func_02022d20
    ldr r0, =data_02087908
    mov r2, #0x4
    mov r1, r0
    bl func_02022d20
    ldr r0, =data_02087998
    mov r2, #0x4
    mov r1, r0
    bl func_02022d20
    ldr r0, =data_02087c20
    mov r2, #0x4
    mov r1, r0
    bl func_02022d20
    mov r2, #0x1
    ldr r1, =data_020877d0
    ldr r0, =data_02087d40
    str r2, [r1, #0x1c]
    str r2, [r1, #0x28]
    ldr r1, =data_02087998
    mov r2, #0x4
    bl func_02022d20
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_0201cf84
    cmp r0, #0x0
    beq L_02025924
    ldr r3, =data_020877d0
    mov r4, #0x0
    str r4, [r3, #0x1c]
    ldr r0, =data_02087a70
    ldr r1, =data_02087998
    mov r2, #0x4
    str r4, [r3, #0x28]
    bl func_02022d20
    ldr r0, =data_02087d40
    ldr r1, =data_02087a70
    mov r2, #0x4
    bl func_02022d20
L_02025924:
    ldr r1, =data_020877d0
    ldr r2, =data_02087844
    add r0, r1, #0x6
    ldr r3, [r1, #0x1c]
    add r1, r0, #0x100
    swpb r0, r3, [r1]
    mov r1, #0x1
    ldr r0, [r2, r3, lsl #0x2]
    bl func_0202541c
    ldr r0, =data_02087998
    ldr r1, =data_02087c20
    mov r2, #0x4
    bl func_02022d20
    ldr r0, =data_02087c20
    ldr r1, =data_02087908
    mov r2, #0x4
    bl func_02022d20
    ldr r0, =data_020877d0
    ldr r0, [r0, #0x1c]
    and r0, r0, #0xff
    bl func_02027ac8
    ldmfd sp!, {r3, r4, r5, pc}
L_0202597c:
    ldr r1, =data_0206b918
    ldr r0, =data_020877d0
    ldr r2, [r1, #0x4]
    add r1, r0, #0x6a
    swpb r0, r2, [r1]
    ldr r0, =data_02087844
    mov r1, #0x1
    ldr r0, [r0, r2, lsl #0x2]
    bl func_020252a4
    ldmfd sp!, {r3, r4, r5, pc}
}
// clang-format on
