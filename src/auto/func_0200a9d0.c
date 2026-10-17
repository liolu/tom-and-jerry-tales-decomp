#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0200160c();
extern void func_02001654();
extern void func_020016a4();
extern void func_02004b44();
extern void func_0200a0f8();
extern void func_0200ad74();
extern void func_0200b6f8();
extern void func_0200b734();
extern void func_02014ea4();
extern void func_02015194();
extern void func_02016f18();
extern void func_02018990();
extern void func_02018e70();
extern void func_020222b8();
extern void func_02022354();
extern void func_020301ec();
extern void func_020301f0();
extern void func_0203f930();
extern void func_0203f948();
extern void func_0203ff1c();
extern void func_02040094();
extern void func_02040228();
extern void func_0204398c();
extern void func_02043ab0();
extern void func_02043fd0();
extern void func_0204d600();
extern void func_0204f490();
extern void func_02051a48();
extern void func_0205918c();
extern char data_020692ec[];
extern char data_0206a3bc[];
extern char data_0206a3c4[];
extern char data_0206a3d0[];
extern char data_0206a3dc[];
extern char data_0206a3e8[];
extern char data_0206a3fc[];
extern char data_0206a408[];
extern char data_0206a410[];
extern char data_0206dd38[];
extern char data_0206e684[];
extern char data_0206e6d4[];
extern char data_02086d08[];
extern char data_02086d2c[];
extern char data_02086d3c[];
// clang-format off
asm void func_0200a9d0(void) {
    stmfd sp!, {r4, lr}
    sub sp, sp, #0x8
    bl func_02040228
    ldr r1, =data_02086d08
    mov r4, r0
    ldrb r0, [r1, #0x1]
    cmp r0, #0x4
    addls pc, pc, r0, lsl #0x2
    b L_0200acb0
L_0200a9f4:
    b L_0200aa08
    b L_0200ab34
    b L_0200ab68
    b L_0200abac
    b L_0200ac48
L_0200aa08:
    bl func_02004b44
    bl func_0200b734
    bl func_02014ea4
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_0200aa28
    bl func_02018990
L_0200aa28:
    bl func_0200160c
    mov r0, #0x5
    bl func_02001654
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x4
    bne L_0200aa4c
    mov r0, #0x17
    bl func_0200a0f8
L_0200aa4c:
    mov r0, #0x0
    mov r1, #0x1e
    mov r2, #0x3
    bl func_020222b8
    ldr r0, =data_0206e684
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldreq r0, =data_020692ec
    ldreq r0, [r0, #0x0]
    cmpeq r0, #0x1
    bne L_0200ab1c
    ldr r1, =data_0206e6d4
    ldr r0, =data_02086d2c
    ldrb r2, [r1, #0x18]
    mov r1, #0x0
    swpb r1, r1, [r0]
    cmp r2, #0x5
    addls pc, pc, r2, lsl #0x2
    b L_0200aae0
L_0200aa98:
    b L_0200aab0
    b L_0200aab0
    b L_0200aad4
    b L_0200aab0
    b L_0200aabc
    b L_0200aac8
L_0200aab0:
    ldr r1, =data_0206a3bc
    bl func_0205918c
    b L_0200aae4
L_0200aabc:
    ldr r1, =data_0206a3c4
    bl func_0205918c
    b L_0200aae4
L_0200aac8:
    ldr r1, =data_0206a3d0
    bl func_0205918c
    b L_0200aae4
L_0200aad4:
    ldr r1, =data_0206a3dc
    bl func_0205918c
    b L_0200aae4
L_0200aae0:
    bl func_02051a48
L_0200aae4:
    ldr r0, =data_02086d2c
    bl func_0204398c
    ldr r0, =data_02086d2c
    bl func_02043ab0
    ldr r0, =data_02086d2c
    bl func_02043fd0
    ldr r1, =data_02086d08
    mov r2, #0x1
    strh r0, [r1, #0x4]
    add r1, r1, #0x1
    swpb r0, r2, [r1]
    bl func_0200ad74
    add sp, sp, #0x8
    ldmfd sp!, {r4, pc}
L_0200ab1c:
    ldr r0, =data_02086d08
    mov r2, #0x2
    add r1, r0, #0x1
    swpb r0, r2, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, pc}
L_0200ab34:
    bl func_0200ad74
    ldr r0, =data_02086d08
    ldrh r2, [r0, #0x4]
    sub r1, r2, #0x1
    cmp r2, #0x0
    strh r1, [r0, #0x4]
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, pc}
    add r1, r0, #0x1
    mov r0, #0x2
    swpb r0, r0, [r1]
    add sp, sp, #0x8
    ldmfd sp!, {r4, pc}
L_0200ab68:
    bl func_02016f18
    ldr r0, =data_0206e6d4
    ldr r0, [r0, #0xbc]
    cmp r0, #0x0
    addne sp, sp, #0x8
    ldmnefd sp!, {r4, pc}
    bl func_02015194
    bl func_02014ea4
    bl func_0200b6f8
    ldr r0, =data_0206a3e8
    mov r1, #0x0
    bl func_020301ec
    bl func_0200ad74
    bl func_020301f0
    bl func_020016a4
    add sp, sp, #0x8
    ldmfd sp!, {r4, pc}
L_0200abac:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    addeq sp, sp, #0x8
    ldmeqfd sp!, {r4, pc}
    ldr r1, =data_0206dd38
    mov r2, #0x1000
    mov r0, #0x0
    str r2, [r1, #0x0]
    bl func_0203f930
    bl func_0203f948
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    cmp r0, #0x1
    bne L_0200ac14
    mov r1, #0x1
    ldr r0, =data_02086d08
    str r1, [sp, #0x0]
    ldrb ip, [r0, #0x2]
    ldr r0, =data_02086d3c
    ldr r1, =data_0206a3fc
    mov r2, #0x0
    mov r3, #0x5
    str ip, [sp, #0x4]
    bl func_0204f490
    b L_0200ac28
L_0200ac14:
    ldr r0, =data_02086d3c
    ldr r1, =data_0206a408
    mov r2, #0x2
    mov r3, #0x1
    bl func_0204f490
L_0200ac28:
    ldr r0, [r4, #0x1c]
    ldr r2, =data_02086d3c
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    add sp, sp, #0x8
    ldmfd sp!, {r4, pc}
L_0200ac48:
    ldr r1, =data_0206dd38
    mov r2, #0x1000
    mov r0, #0x0
    str r2, [r1, #0x0]
    bl func_0203f930
    bl func_0203f948
    bl func_02018e70
    ldr r0, =data_02086d3c
    ldr r1, =data_0206a410
    mov r2, #0x4
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    ldr r2, =data_02086d3c
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    mov r0, #0x4
    str r0, [sp, #0x0]
    ldr r0, =0x4000050
    mov r1, #0x10
    mov r2, #0x1
    mov r3, #0xb
    bl func_0204d600
    add sp, sp, #0x8
    ldmfd sp!, {r4, pc}
L_0200acb0:
    bl func_02051a48
    add sp, sp, #0x8
    ldmfd sp!, {r4, pc}
}
// clang-format on
