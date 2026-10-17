#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020016a4();
extern void func_02003e84();
extern void func_02014ea4();
extern void func_02016f18();
extern void func_020222b8();
extern void func_02022354();
extern void func_02029314();
extern void func_020306fc();
extern void func_0203ff1c();
extern void func_02040094();
extern void func_02040228();
extern void func_0204398c();
extern void func_02043ab0();
extern void func_02043fd0();
extern void func_02045d74();
extern void func_0204f490();
extern char data_0206c518[];
extern char data_0206c520[];
extern char data_0206dd38[];
extern char data_02087e98[];
extern char data_02087ea8[];
extern char data_02087ed0[];
// clang-format off
asm void func_020290f4(void) {
    stmfd sp!, {r3, r4, lr}
    sub sp, sp, #0x4
    bl func_02040228
    ldr r1, =data_02087e98
    mov r4, r0
    ldrb r0, [r1, #0x2]
    cmp r0, #0x0
    beq L_0202912c
    cmp r0, #0x1
    beq L_0202918c
    cmp r0, #0x2
    beq L_02029218
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_0202912c:
    bl func_02029314
    ldr r0, =data_02087ed0
    bl func_0204398c
    ldr r0, =data_02087ed0
    bl func_02043fd0
    mov r2, r0, lsl #0xc
    ldr r1, =data_02087e98
    ldr r0, =data_02087ed0
    str r2, [r1, #0xc]
    bl func_02043ab0
    ldr r0, =data_02087e98
    mov r1, #0x0
    str r1, [r0, #0x4]
    bl func_02003e84
    mov r0, #0x0
    mov r1, #0x10
    mov r2, #0x1
    bl func_020222b8
    ldr r0, =data_02087e98
    mov r2, #0x1
    add r1, r0, #0x2
    swpb r0, r2, [r1]
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_0202918c:
    bl func_02016f18
    bl func_02014ea4
    bl func_020016a4
    mov r0, #0x3
    bl func_020306fc
    cmp r0, #0x0
    beq L_020291c8
    ldr r0, =data_02087e98
    mov r3, #0x2
    add ip, r0, #0x2
    sub r0, r3, #0x12
    mov r1, #0x10
    mov r2, #0x3
    swpb r3, r3, [ip]
    bl func_020222b8
L_020291c8:
    ldr r1, =data_02087e98
    ldr r0, =data_0206dd38
    ldr r2, [r1, #0xc]
    ldr r0, [r0, #0x0]
    sub r0, r2, r0
    str r0, [r1, #0xc]
    cmp r0, #0x0
    bgt L_0202920c
    mov r3, #0x2
    add ip, r1, #0x2
    sub r0, r3, #0x12
    swpb r3, r3, [ip]
    mov r1, #0x10
    mov r2, #0x3
    bl func_020222b8
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_0202920c:
    bl func_02003e84
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_02029218:
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    addeq sp, sp, #0x4
    ldmeqfd sp!, {r3, r4, pc}
    ldr r0, =data_02087ed0
    bl func_02045d74
    ldr r0, =data_02087e98
    ldrb r1, [r0, #0x0]
    cmp r1, #0x0
    bne L_02029280
    ldrb r2, [r0, #0x1]
    ldr r0, =data_02087ea8
    ldr r1, =data_0206c518
    str r2, [sp, #0x0]
    mov r2, #0x0
    mov r3, #0x6
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    ldr r2, =data_02087ea8
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
L_02029280:
    cmp r1, #0x1
    addne sp, sp, #0x4
    ldmnefd sp!, {r3, r4, pc}
    ldr r0, =data_02087ea8
    ldr r1, =data_0206c520
    mov r2, #0x2
    mov r3, #0x1
    bl func_0204f490
    ldr r0, [r4, #0x1c]
    ldr r2, =data_02087ea8
    mov r1, #0x2
    bl func_0203ff1c
    ldr r0, [r4, #0x18]
    bl func_02040094
    add sp, sp, #0x4
    ldmfd sp!, {r3, r4, pc}
}
// clang-format on
