#include "m2c.h"

void func_0204398c(void);
void func_02043ab0(void);
void func_02043fd0(void);
void func_020442a8(void);
void func_02045d74(void);
extern char data_0206b158[];
extern char data_0206b164[];
extern char data_020875a8[];
extern char data_020876d4[];
// clang-format off
asm void func_0201f3f8(void) {
    stmdb sp!, {r3, lr}
    ldr r0, =data_020875a8
    ldr r1, =data_020876d4
    ldr r2, [r0, #0x1c]
    ldrb r1, [r1, r2]
    cmp r1, #0x0
    bne L_0201f49c
    ldr r1, [r0, #0x20]
    ldr r0, =data_0206b164
    ldr r0, [r0, r1, lsl #0x2]
    bl func_02045d74
    ldr r0, =data_020875a8
    ldr r1, =data_0206b164
    ldr r0, [r0, #0x1c]
    ldr r0, [r1, r0, lsl #0x2]
    bl func_0204398c
    ldr r0, =data_020875a8
    ldr r1, =data_0206b164
    ldr r0, [r0, #0x1c]
    ldr r0, [r1, r0, lsl #0x2]
    bl func_02043ab0
    ldr r0, =data_020875a8
    ldr r2, =data_0206b164
    ldr r0, [r0, #0x1c]
    mov r1, #0x1
    ldr r0, [r2, r0, lsl #0x2]
    bl func_020442a8
    ldr r0, =data_020875a8
    ldr r1, =data_020876d4
    ldr r3, [r0, #0x1c]
    mov r2, #0x1
    str r3, [r0, #0x20]
    add r1, r1, r3
    cmp r3, #0x1
    swpb r0, r2, [r1]
    bne L_0201f49c
    ldr r0, =data_0206b158
    ldr r0, [r0, #0x10]
    bl func_02043fd0
    ldr r1, =data_020875a8
    strh r0, [r1, #0xe]
L_0201f49c:
    ldr r0, =data_020875a8
    ldr r1, [r0, #0x1c]
    cmp r1, #0x1
    ldmneia sp!, {r3, pc}
    ldrh r1, [r0, #0xe]
    cmp r1, #0x0
    subne r1, r1, #0x1
    strneh r1, [r0, #0xe]
    ldmneia sp!, {r3, pc}
    ldr r1, =data_020876d4
    mov r2, #0x0
    add r1, r1, #0x0
    str r2, [r0, #0x1c]
    swpb r0, r2, [r1]
    ldmia sp!, {r3, pc}
}
// clang-format on
