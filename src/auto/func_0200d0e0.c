#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0203d498();
extern void sprintf();
extern char data_0206a59c[];
extern char data_0206a71c[];
extern char data_0206a748[];
extern char data_0206a778[];
extern char data_0206a7a4[];
extern char data_0206a7c8[];
extern char data_0206a7ec[];
extern char data_0206a810[];
extern char data_0206e698[];
extern char data_02086dac[];
extern char data_020b8b6c[];
extern char data_020b8b94[];
// clang-format off
asm void func_0200d0e0(void) {
    stmfd sp!, {lr}
    sub sp, sp, #0x34
    ldr ip, =data_0206a59c
    ldrb r1, [ip, #0x0]
    sub r0, r1, #0x1
    cmp r1, #0x0
    addne sp, sp, #0x34
    swpb r0, r0, [ip]
    ldmnefd sp!, {pc}
    ldr r3, =data_02086dac
    mov r2, #0xa
    ldrb r1, [r3, #0x4]
    swpb r0, r2, [ip]
    cmp r1, #0x0
    beq L_0200d6b4
    cmp r1, #0x1
    bne L_0200d208
    ldrb r2, [r3, #0x2]
    cmp r2, #0x8
    bls L_0200d150
    add r1, r3, #0x4
    mov r0, #0x2
    swpb r0, r0, [r1]
    add r2, r3, #0x2
    mov r3, #0x0
    swpb r0, r3, [r2]
    add sp, sp, #0x34
    ldmfd sp!, {pc}
L_0200d150:
    cmp r2, #0x4
    add r0, sp, #0x4
    bls L_0200d16c
    ldr r1, =data_0206a71c
    rsb r2, r2, #0x8
    bl sprintf
    b L_0200d174
L_0200d16c:
    ldr r1, =data_0206a71c
    bl sprintf
L_0200d174:
    ldr ip, =data_020b8b6c
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_02086dac
    ldrb r2, [r0, #0x2]
    add r0, sp, #0x4
    cmp r2, #0x4
    bls L_0200d1b4
    ldr r1, =data_0206a748
    rsb r2, r2, #0x8
    bl sprintf
    b L_0200d1bc
L_0200d1b4:
    ldr r1, =data_0206a748
    bl sprintf
L_0200d1bc:
    ldr ip, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_02086dac
    ldrb r1, [r0, #0x2]
    cmp r1, #0x4
    bne L_0200d698
    add ip, r1, #0x1
    add r1, r0, #0x2
    swpb r0, ip, [r1]
    ldr r2, =data_0206a59c
    mov r3, #0xb4
    add sp, sp, #0x34
    swpb r0, r3, [r2]
    ldmfd sp!, {pc}
L_0200d208:
    cmp r1, #0x2
    ldrb r2, [r3, #0x2]
    bne L_0200d2f4
    cmp r2, #0x8
    bls L_0200d23c
    add r1, r3, #0x4
    mov r0, #0x3
    swpb r0, r0, [r1]
    add r2, r3, #0x2
    mov r3, #0x1
    swpb r0, r3, [r2]
    add sp, sp, #0x34
    ldmfd sp!, {pc}
L_0200d23c:
    cmp r2, #0x4
    add r0, sp, #0x4
    bls L_0200d258
    ldr r1, =data_0206a71c
    rsb r2, r2, #0x8
    bl sprintf
    b L_0200d260
L_0200d258:
    ldr r1, =data_0206a71c
    bl sprintf
L_0200d260:
    ldr ip, =data_020b8b6c
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_02086dac
    ldrb r2, [r0, #0x2]
    add r0, sp, #0x4
    cmp r2, #0x4
    bls L_0200d2a0
    ldr r1, =data_0206a778
    rsb r2, r2, #0x8
    bl sprintf
    b L_0200d2a8
L_0200d2a0:
    ldr r1, =data_0206a778
    bl sprintf
L_0200d2a8:
    ldr ip, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_02086dac
    ldrb r1, [r0, #0x2]
    cmp r1, #0x4
    bne L_0200d698
    add ip, r1, #0x1
    add r1, r0, #0x2
    swpb r0, ip, [r1]
    ldr r2, =data_0206a59c
    mov r3, #0xb4
    add sp, sp, #0x34
    swpb r0, r3, [r2]
    ldmfd sp!, {pc}
L_0200d2f4:
    cmp r2, #0x26
    bls L_0200d320
    add r1, r3, #0x2
    mov r2, #0x0
    swpb r0, r2, [r1]
    add r1, r3, #0x4
    mov r0, #0x5
    str r0, [ip, #0x4]
    add sp, sp, #0x34
    swpb r0, r2, [r1]
    ldmfd sp!, {pc}
L_0200d320:
    cmp r2, #0xe
    bhs L_0200d380
    ldr r1, =data_0206a7a4
    add r0, sp, #0x4
    bl sprintf
    ldr ip, =data_020b8b6c
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
    ldr r1, =data_02086dac
    add r0, sp, #0x4
    ldrb r2, [r1, #0x2]
    ldr r1, =data_0206a7c8
    bl sprintf
    ldr r1, =data_020b8b94
    add r0, sp, #0x4
    str r1, [sp, #0x0]
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    bl func_0203d498
L_0200d380:
    ldr r0, =data_02086dac
    ldrb r2, [r0, #0x2]
    cmp r2, #0xe
    bne L_0200d3b8
    ldr r1, =data_0206a7c8
    add r0, sp, #0x4
    bl sprintf
    ldr ip, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
L_0200d3b8:
    ldr r0, =data_02086dac
    ldrb r2, [r0, #0x2]
    cmp r2, #0xf
    bne L_0200d3f4
    ldr r1, =data_0206a7c8
    add r0, sp, #0x4
    sub r2, r2, #0x2
    bl sprintf
    ldr ip, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
L_0200d3f4:
    ldr r0, =data_02086dac
    ldrb r3, [r0, #0x2]
    cmp r3, #0xf
    bls L_0200d48c
    cmp r3, #0x17
    bhs L_0200d48c
    ldr r1, =data_0206a59c
    add r0, sp, #0x4
    ldr r2, [r1, #0x4]
    ldr r1, =data_0206a7a4
    sub r2, r3, r2
    bl sprintf
    ldr ip, =data_020b8b6c
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
    ldr r1, =data_02086dac
    ldr r0, =data_0206a59c
    ldrb r3, [r1, #0x2]
    ldr r2, [r0, #0x4]
    ldr r1, =data_0206a7c8
    add r0, sp, #0x4
    sub r2, r3, r2
    bl sprintf
    ldr r1, =data_020b8b94
    add r0, sp, #0x4
    str r1, [sp, #0x0]
    ldr r1, =data_0206e698
    mov r2, #0x0
    mov r3, #0x1
    bl func_0203d498
    ldr r0, =data_0206a59c
    ldr r1, [r0, #0x4]
    add r1, r1, #0x2
    str r1, [r0, #0x4]
L_0200d48c:
    ldr r0, =data_02086dac
    ldrb r3, [r0, #0x2]
    cmp r3, #0x17
    bne L_0200d4d0
    ldr r1, =data_0206a59c
    add r0, sp, #0x4
    ldr r2, [r1, #0x4]
    ldr r1, =data_0206a7c8
    sub r2, r3, r2
    bl sprintf
    ldr ip, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
L_0200d4d0:
    ldr r0, =data_02086dac
    ldrb r2, [r0, #0x2]
    cmp r2, #0x17
    bls L_0200d514
    cmp r2, #0x1d
    bhs L_0200d514
    ldr r1, =data_0206a7c8
    add r0, sp, #0x4
    sub r2, r2, #0x11
    bl sprintf
    ldr ip, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
L_0200d514:
    ldr r0, =data_02086dac
    ldrb r2, [r0, #0x2]
    cmp r2, #0x1c
    bls L_0200d558
    cmp r2, #0x20
    bhs L_0200d558
    ldr r1, =data_0206a7c8
    add r0, sp, #0x4
    sub r2, r2, #0xe
    bl sprintf
    ldr ip, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
L_0200d558:
    ldr r0, =data_02086dac
    ldrb r2, [r0, #0x2]
    cmp r2, #0x20
    bne L_0200d594
    ldr r1, =data_0206a7c8
    add r0, sp, #0x4
    sub r2, r2, #0x10
    bl sprintf
    ldr ip, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
L_0200d594:
    ldr r0, =data_02086dac
    ldrb r2, [r0, #0x2]
    cmp r2, #0x20
    bls L_0200d5d0
    ldr r1, =data_0206a7c8
    add r0, sp, #0x4
    sub r2, r2, #0xf
    bl sprintf
    ldr ip, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
L_0200d5d0:
    ldr r0, =data_02086dac
    ldrb r0, [r0, #0x2]
    cmp r0, #0x1f
    bgt L_0200d648
    bge L_0200d66c
    cmp r0, #0x16
    bgt L_0200d63c
    bge L_0200d66c
    cmp r0, #0xf
    addls pc, pc, r0, lsl #0x2
    b L_0200d698
L_0200d5fc:
    b L_0200d698
    b L_0200d698
    b L_0200d698
    b L_0200d698
    b L_0200d698
    b L_0200d66c
    b L_0200d698
    b L_0200d698
    b L_0200d698
    b L_0200d698
    b L_0200d698
    b L_0200d698
    b L_0200d67c
    b L_0200d68c
    b L_0200d66c
    b L_0200d68c
L_0200d63c:
    cmp r0, #0x1e
    beq L_0200d68c
    b L_0200d698
L_0200d648:
    cmp r0, #0x21
    bgt L_0200d660
    bge L_0200d66c
    cmp r0, #0x20
    beq L_0200d68c
    b L_0200d698
L_0200d660:
    cmp r0, #0x26
    beq L_0200d67c
    b L_0200d698
L_0200d66c:
    ldr r1, =data_0206a59c
    mov r0, #0xc
    swpb r0, r0, [r1]
    b L_0200d698
L_0200d67c:
    ldr r1, =data_0206a59c
    mov r0, #0x3c
    swpb r0, r0, [r1]
    b L_0200d698
L_0200d68c:
    ldr r1, =data_0206a59c
    mov r0, #0x1e
    swpb r0, r0, [r1]
L_0200d698:
    ldr r0, =data_02086dac
    add sp, sp, #0x34
    ldrb r2, [r0, #0x2]
    add r1, r0, #0x2
    add r0, r2, #0x1
    swpb r0, r0, [r1]
    ldmfd sp!, {pc}
L_0200d6b4:
    ldrb r1, [r3, #0x2]
    swpb r0, r2, [ip]
    cmp r1, #0x22
    bls L_0200d6e4
    add r1, r3, #0x2
    mov r0, #0x0
    swpb r0, r0, [r1]
    add r2, r3, #0x4
    mov r3, #0x1
    add sp, sp, #0x34
    swpb r0, r3, [r2]
    ldmfd sp!, {pc}
L_0200d6e4:
    cmp r1, #0x8
    cmpne r1, #0x12
    cmpne r1, #0x1b
    bne L_0200d71c
    ldr r0, =data_02086dac
    ldr r2, =data_0206a59c
    ldrb ip, [r0, #0x2]
    add r1, r0, #0x2
    mov r3, #0x3c
    add r0, ip, #0x1
    swpb r0, r0, [r1]
    add sp, sp, #0x34
    swpb r0, r3, [r2]
    ldmfd sp!, {pc}
L_0200d71c:
    add r0, r1, #0x1
    add r1, r3, #0x2
    swpb r0, r0, [r1]
    ldrb r2, [r3, #0x2]
    add r0, sp, #0x4
    cmp r2, #0x1f
    bls L_0200d748
    ldr r1, =data_0206a7ec
    rsb r2, r2, #0x23
    bl sprintf
    b L_0200d750
L_0200d748:
    ldr r1, =data_0206a7ec
    bl sprintf
L_0200d750:
    ldr ip, =data_020b8b94
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
    ldr r0, =data_02086dac
    ldrb r2, [r0, #0x2]
    cmp r2, #0x5
    bhs L_0200d7a4
    ldr r1, =data_0206a810
    add r0, sp, #0x4
    bl sprintf
    ldr ip, =data_020b8b6c
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
L_0200d7a4:
    ldr r0, =data_02086dac
    ldrb r2, [r0, #0x2]
    cmp r2, #0x1f
    addls sp, sp, #0x34
    ldmlsfd sp!, {pc}
    ldr r1, =data_0206a810
    add r0, sp, #0x4
    rsb r2, r2, #0x23
    bl sprintf
    ldr ip, =data_020b8b6c
    ldr r1, =data_0206e698
    add r0, sp, #0x4
    mov r2, #0x0
    mov r3, #0x1
    str ip, [sp, #0x0]
    bl func_0203d498
    add sp, sp, #0x34
    ldmfd sp!, {pc}
}
// clang-format on
