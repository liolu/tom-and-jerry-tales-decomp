#include "m2c.h"

void func_0202203c(void);
void func_020222b8(void);
void func_02022354(void);
void func_020306fc(void);
void func_02030878(void);
void func_0203d098(void);
void func_0203d498(void);
void func_0203dea8(void);
void func_0203deb8(void);
void func_0203dec8(void);
void func_0203ded8(void);
void func_0203e898(void);
void func_0204221c(void);
extern char data_0206b7c0[];
extern char data_0206b7ec[];
extern char data_0206e690[];
extern char data_0206e698[];
extern char data_0208776c[];
extern char data_020b8b44[];
extern char data_020b8b6c[];
// clang-format off
asm void func_02021680(void) {
    stmdb sp!, {r3, r4, r5, r6, r7, r8, lr}
    sub sp, sp, #0x1c
    ldr r0, =data_0208776c
    ldrb r0, [r0, #0x2]
    cmp r0, #0x0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    cmp r0, #0x1
    beq @1
    cmp r0, #0x2
    beq @11
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@1
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, #0xc
    bl func_020306fc
    cmp r0, #0x0
    beq @2
    ldr r2, =data_0208776c
    ldrb r0, [r2, #0x0]
    cmp r0, #0xb4
    bhs @2
    ldr r0, =data_020b8b44
    mov r1, #0xb4
    swpb r1, r1, [r2]
    bl func_0203d098
    mvn r0, #0xf
    mov r1, #0x8
    mov r2, #0x2
    bl func_020222b8
@2
    ldr r0, =data_0208776c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x3c
    bne @3
    ldr r0, =data_020b8b44
    bl func_0203d098
    mvn r0, #0xf
    mov r1, #0x8
    mov r2, #0x2
    bl func_020222b8
@3
    ldr r0, =data_0208776c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x41
    bne @4
    ldr r4, =data_020b8b6c
    ldr r0, =data_0206b7c0
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    ldr r1, =data_0206e690
    mov r0, #0xe
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x14]
    ldrb r1, [r2, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r8, r1, lsr #0x10
    bl func_0204221c
    mov r7, r0
    bl func_0203dea8
    mov r6, r0
    bl func_0203ded8
    mov r5, r0
    bl func_0203deb8
    mov r4, r0
    bl func_0203dec8
    sub r2, r8, #0x1
    mov r1, r7
    mov r3, #0xf5
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    str r5, [sp, #0xc]
    str r4, [sp, #0x10]
    sub r2, r2, #0x1
    str r0, [sp, #0x14]
    str r2, [sp, #0x18]
    mov r0, r6
    mov r2, #0xa
    mov r3, #0x14
    bl func_0203e898
    mov r0, #0x0
    mov r1, #0x8
    mov r2, #0x2
    bl func_020222b8
@4
    ldr r0, =data_0208776c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x78
    bne @5
    ldr r0, =data_020b8b44
    bl func_0203d098
    mvn r0, #0xf
    mov r1, #0x8
    mov r2, #0x2
    bl func_020222b8
@5
    ldr r0, =data_0208776c
    ldrb r0, [r0, #0x0]
    cmp r0, #0x7d
    bne @6
    ldr r4, =data_020b8b6c
    ldr r0, =data_0206b7ec
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    str r4, [sp, #0x0]
    bl func_0203d498
    ldr r1, =data_0206e690
    mov r0, #0xf
    ldr r2, [r1, #0x0]
    ldr r1, [r2, #0x14]
    ldrb r1, [r2, r1]
    add r1, r1, #0x6
    mov r1, r1, lsl #0x10
    mov r8, r1, lsr #0x10
    bl func_0204221c
    mov r7, r0
    bl func_0203dea8
    mov r6, r0
    bl func_0203ded8
    mov r5, r0
    bl func_0203deb8
    mov r4, r0
    bl func_0203dec8
    sub r2, r8, #0x1
    mov r1, r7
    mov r3, #0xf5
    str r3, [sp, #0x0]
    str r2, [sp, #0x4]
    mov r2, #0x0
    str r2, [sp, #0x8]
    str r5, [sp, #0xc]
    str r4, [sp, #0x10]
    sub r2, r2, #0x1
    str r0, [sp, #0x14]
    str r2, [sp, #0x18]
    mov r0, r6
    mov r2, #0xa
    mov r3, #0x28
    bl func_0203e898
    mov r0, #0x0
    mov r1, #0x8
    mov r2, #0x2
    bl func_020222b8
@6
    ldr r0, =data_0208776c
    ldrb r0, [r0, #0x0]
    cmp r0, #0xb4
    bne @7
    ldr r0, =data_020b8b44
    bl func_0203d098
    mvn r0, #0xf
    mov r1, #0x8
    mov r2, #0x2
    bl func_020222b8
@7
    ldr r0, =data_0208776c
    ldrb r1, [r0, #0x0]
    cmp r1, #0xb9
    bne @8
    mov r3, #0x2
    add ip, r0, #0x2
    sub r0, r3, #0x12
    mov r1, #0x8
    mov r2, #0x3
    swpb r3, r3, [ip]
    bl func_020222b8
@8
    ldr r0, =data_0208776c
    ldrb r0, [r0, #0x0]
    cmp r0, #0xba
    bne @10
    bl func_02030878
    cmp r0, #0x0
    bne @9
    mov r0, #0x0
    bl func_020306fc
    cmp r0, #0x0
    beq @10
@9
    ldr r0, =data_0208776c
    mov r3, #0x2
    add ip, r0, #0x2
    sub r0, r3, #0x12
    mov r1, #0x8
    mov r2, #0x3
    swpb r3, r3, [ip]
    bl func_020222b8
@10
    ldr r1, =data_0208776c
    add sp, sp, #0x1c
    ldrb r0, [r1, #0x0]
    cmp r0, #0xb9
    addls r0, r0, #0x1
    swplsb r0, r0, [r1]
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
@11
    mov r0, #0x3
    bl func_02022354
    cmp r0, #0x0
    addeq sp, sp, #0x1c
    ldmeqia sp!, {r3, r4, r5, r6, r7, r8, pc}
    mov r0, #0x2
    bl func_0202203c
    add sp, sp, #0x1c
    ldmia sp!, {r3, r4, r5, r6, r7, r8, pc}
}
// clang-format on
