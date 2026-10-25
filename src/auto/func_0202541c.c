#include "m2c.h"

extern char data_0206b918[];
extern char data_020877d0[];
extern char data_020878e0[];
void func_0200a0f8(void);
void func_0201cf84(void);
void func_02022b60(void);
void func_0202541c(void);
void func_02027a38(void);
void func_02027ac8(void);
void func_0203b96c(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202541c(void) {
    stmdb sp!, {r3, r4, r5, lr}
    mov r4, r0
    mov r0, #0x0
    mov r5, r1
    bl func_0203b96c
    cmp r5, #0x4
    addls pc, pc, r5, lsl #0x2
    b @L02025624
@L0202543c:
    b @L02025624
    b @L02025450
    b @L02025460
    b @L020254e4
    b @L02025618
@L02025450:
    mov r0, r4
    mov r1, #0x1
    bl func_02022b60
    b @L02025624
@L02025460:
    mov r0, r4
    mov r1, #0x0
    bl func_02022b60
    ldrb r0, [r4, #0x28]
    cmp r0, #0x4
    ldrhs r0, [r4, #0x24]
    orrhs r0, r0, #0x1000000
    ldmhsia sp!, {r3, r4, r5, pc}
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_0201cf84
    cmp r0, #0x0
    ldreqb r0, [r4, #0x28]
    cmpeq r0, #0x0
    beq @L02025624
    ldrb r2, [r4, #0x28]
    ldr r1, =data_020877d0
    mov r0, #0x0
    str r2, [r1, #0x1c]
    bl func_02027a38
    ldrb r0, [r4, #0x28]
    bl func_02027ac8
    ldr r1, =data_020877d0
    ldr r2, =data_020878e0
    add r0, r1, #0x6
    ldr r3, [r1, #0x1c]
    add r1, r0, #0x100
    swpb r0, r3, [r1]
    mov r1, #0x1
    ldr r0, [r2, r3, lsl #0x2]
    bl func_0202541c
    b @L02025624
@L020254e4:
    mov r0, r4
    mov r1, #0x1
    bl func_02022b60
    ldrb r1, [r4, #0x28]
    cmp r1, #0x4
    ldrne r0, =data_020877d0
    strne r1, [r0, #0x28]
    ldrb r0, [r4, #0x28]
    cmp r0, #0x4
    bhs @L02025568
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_0201cf84
    cmp r0, #0x0
    ldreqb r0, [r4, #0x28]
    cmpeq r0, #0x0
    beq @L02025544
    ldr r0, =data_020877d0
    mov r1, #0x4
    str r1, [r0, #0x24]
    ldrb r1, [r4, #0x28]
    str r1, [r0, #0x1c]
    b @L02025568
@L02025544:
    ldr r1, =data_020877d0
    ldr r2, =data_020878e0
    add r0, r1, #0x6
    ldr r3, [r1, #0x1c]
    add r1, r0, #0x100
    swpb r0, r3, [r1]
    mov r1, #0x1
    ldr r0, [r2, r3, lsl #0x2]
    bl func_0202541c
@L02025568:
    ldrb r0, [r4, #0x28]
    cmp r0, #0x4
    beq @L0202559c
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_0201cf84
    cmp r0, #0x0
    ldreqb r0, [r4, #0x28]
    cmpeq r0, #0x0
    beq @L0202559c
    mov r0, #0x1
    bl func_0200a0f8
@L0202559c:
    ldr r0, =data_0206b918
    ldr r0, [r0, #0x4]
    and r0, r0, #0xff
    bl func_0201cf84
    cmp r0, #0x0
    ldreqb r0, [r4, #0x28]
    cmpeq r0, #0x0
    beq @L020255d4
    ldrb r0, [r4, #0x28]
    cmp r0, #0x4
    beq @L020255d4
    mov r0, #0x0
    bl func_02027a38
    b @L0202560c
@L020255d4:
    cmp r0, #0x0
    beq @L0202560c
    ldr r1, =data_020877d0
    ldr r2, =data_020878e0
    add r0, r1, #0x6
    ldr r3, [r1, #0x28]
    add r1, r0, #0x100
    swpb r0, r3, [r1]
    mov r1, #0x1
    ldr r0, [r2, r3, lsl #0x2]
    bl func_0202541c
    ldr r0, [r4, #0x24]
    orr r0, r0, #0x1000000
    ldmia sp!, {r3, r4, r5, pc}
@L0202560c:
    ldrb r0, [r4, #0x28]
    bl func_02027ac8
    b @L02025624
@L02025618:
    mov r0, r4
    mov r1, #0x0
    bl func_02022b60
@L02025624:
    mov r0, #0x0
    ldmia sp!, {r3, r4, r5, pc}
}
// clang-format on
