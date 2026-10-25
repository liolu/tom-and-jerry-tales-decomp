#include "m2c.h"
void func_0204398c(void);
void func_02043fd0(void);
extern char data_0206e694[];
extern char data_0206e684[];
// clang-format off
asm void func_0201609c(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, lr}
    movs r10, r0
    mov r9, r1
    mov r8, r2
    mov r7, r3
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r5, #0x0
    cmp r9, #0x0
    ldmlsia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
    mov r4, #0x1
    mov r11, r5
L_020160c8:
    mov r0, #0x64
    mul r1, r5, r0
    ldr r0, [r10, r1]
    add r6, r10, r1
    cmp r0, #0x2
    bne L_02016160
    ldr r1, =data_0206e694
    add r0, r6, #0x40
    str r4, [r1, #0x0]
    bl func_0204398c
    add r2, r6, #0x62
    swpb r1, r11, [r2]
    add r0, r6, #0x40
    bl func_02043fd0
    mov r0, r0, lsl #0x10
    cmp r8, #0x0
    mov r0, r0, lsr #0x10
    beq L_02016138
    ldrb r1, [r7, #0x59]
    cmp r1, #0x0
    beq L_0201612c
    ldr r1, =data_0206e684
    ldr r1, [r1, #0x0]
    cmp r1, #0x0
    beq L_02016138
L_0201612c:
    ldrh r1, [r7, #0x3c]
    cmp r0, r1
    strhih r0, [r7, #0x3c]
L_02016138:
    ldr r1, [r6, #0x4]
    cmp r1, #0x0
    beq L_02016160
    cmp r1, #0x1
    bne L_02016160
    ldrh r2, [r6, #0x28]
    ldrh r1, [r6, #0x30]
    sub r1, r2, r1
    cmp r1, r0
    strlth r0, [r6, #0x28]
L_02016160:
    add r0, r5, #0x1
    and r5, r0, #0xff
    cmp r5, r9
    blo L_020160c8
    ldmia sp!, {r3, r4, r5, r6, r7, r8, r9, r10, r11, pc}
}
// clang-format on
