#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern char data_021b0714[];

// clang-format on
/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02051360();

extern void func_02051370();

extern void r2();

extern char data_021b0708[];

// clang-format off
asm void func_0205153c(void) {
    stmfd sp!, {r3, lr}
    ldr r0, =data_021b0708
    ldr r0, [r0, #0x0]
    cmp r0, #0x0
    ldmeqfd sp!, {r3, pc}
    mov r0, sp
    ldr r1, =0x9f
    msr cpsr_fsxc, r1
    mov sp, r0
    bl func_02051360
    ldr r1, =data_021b0708
    ldr r0, =data_021b0708
    ldr r1, [r1, #0x4]
    ldr r2, [r0, #0x0]
    ldr r0, =data_021b0714
    blx r2
    bl func_02051370
    ldmfd sp!, {r3, pc}
}
