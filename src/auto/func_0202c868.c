#include "m2c.h"

extern char data_020692ec[];
extern char data_0206e6d4[];
extern char data_0206e6f4[];
extern char data_020880ec[];
void func_0201cf84(void);
void func_0201d038(void);
void func_0202bd5c(void);
void func_0202bf18(void);
void func_0202c1e4(void);
void func_0202c2ac(void);
/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0202c868(void) {
    stmdb sp!, {r4, r5, r6, lr}
    mov r4, r0
    mov r5, r1
    bl func_0202c1e4
    ldr r0, =data_0206e6d4
    ldr r1, =data_0206e6f4
    ldrb r0, [r0, #0x18]
    cmp r5, #0x1
    add r0, r1, r0, lsl #0x3
    bne L_0202c8b8
    ldrh r1, [r0, #0x6]
    ldr r2, =data_020880ec
    mov r3, #0x0
    cmp r4, r1
    swpb r1, r3, [r2]
    bls L_0202c968
    mov r1, #0x1
    strh r4, [r0, #0x6]
    swpb r0, r1, [r2]
    b L_0202c968
L_0202c8b8:
    cmp r5, #0x2
    bne L_0202c908
    ldr r1, =0xea60
    ldr r2, =data_020880ec
    mov r3, #0x0
    cmp r4, r1
    swpb r1, r3, [r2]
    bhi L_0202c968
    ldrh r1, [r0, #0x0]
    cmp r4, r1
    blo L_0202c8f4
    cmp r4, #0x0
    beq L_0202c968
    cmp r1, #0x0
    bne L_0202c968
L_0202c8f4:
    ldr r1, =data_020880ec
    mov r2, #0x1
    strh r4, [r0, #0x0]
    swpb r0, r2, [r1]
    b L_0202c968
L_0202c908:
    ldr r1, =data_020692ec
    ldr r1, [r1, #0x0]
    cmp r1, #0x4
    bne L_0202c940
    ldrh r1, [r0, #0x4]
    ldr r2, =data_020880ec
    mov r3, #0x0
    cmp r4, r1
    swpb r1, r3, [r2]
    bls L_0202c968
    mov r1, #0x1
    strh r4, [r0, #0x4]
    swpb r0, r1, [r2]
    b L_0202c968
L_0202c940:
    cmp r1, #0x3
    bne L_0202c968
    ldrh r1, [r0, #0x2]
    ldr r2, =data_020880ec
    mov r3, #0x0
    cmp r4, r1
    swpb r1, r3, [r2]
    strhih r4, [r0, #0x2]
    movhi r1, #0x1
    swphib r1, r1, [r2]
L_0202c968:
    ldr r0, =data_0206e6d4
    mov r1, #0x2
    ldrb r0, [r0, #0x18]
    bl func_0202bd5c
    mov r0, #0x2
    bl func_0202bf18
    mov r0, #0x2
    bl func_0202c2ac
    ldr r1, =data_0206e6d4
    mov r6, r0
    ldrb r0, [r1, #0x18]
    mov r1, #0x3
    bl func_0202bd5c
    mov r0, #0x3
    bl func_0202bf18
    mov r0, #0x3
    bl func_0202c2ac
    ldr r1, =data_0206e6d4
    mov r5, r0
    ldrb r0, [r1, #0x18]
    mov r1, #0x4
    bl func_0202bd5c
    mov r0, #0x4
    bl func_0202bf18
    mov r0, #0x4
    bl func_0202c2ac
    mov r4, r0
    ldr r0, =data_0206e6d4
    ldr r1, =data_020692ec
    ldrb r0, [r0, #0x18]
    ldr r1, [r1, #0x0]
    and r1, r1, #0xff
    bl func_0202bd5c
    ldr r0, =data_020692ec
    ldr r0, [r0, #0x0]
    bl func_0202bf18
    add r0, r6, r5
    add r0, r4, r0
    and r0, r0, #0xff
    cmp r0, #0x3
    ldmloia sp!, {r4, r5, r6, pc}
    ldr r0, =data_0206e6d4
    ldrb r4, [r0, #0x18]
    cmp r4, #0x0
    cmpne r4, #0x6
    ldmeqia sp!, {r4, r5, r6, pc}
    ldr r2, =0x92492493
    mov r0, r4, lsr #0x1f
    smull r1, r3, r2, r4
    add r3, r4, r3
    add r3, r0, r3, asr #0x2
    mov r2, #0x7
    smull r0, r1, r2, r3
    sub r3, r4, r0
    and r0, r3, #0xff
    bl func_0201cf84
    cmp r0, #0x0
    bne L_0202ca60
    ldr r0, =data_020880ec
    mov r2, #0x1
    add r1, r0, #0x5
    swpb r0, r2, [r1]
L_0202ca60:
    ldr r0, =data_0206e6d4
    ldr r1, =0x92492493
    ldrb r3, [r0, #0x18]
    mov r2, #0x7
    smull r0, r4, r1, r3
    add r4, r3, r4
    mov r0, r3, lsr #0x1f
    add r4, r0, r4, asr #0x2
    smull r0, r1, r2, r4
    sub r4, r3, r0
    and r0, r4, #0xff
    bl func_0201d038
    ldmia sp!, {r4, r5, r6, pc}
}
// clang-format on
