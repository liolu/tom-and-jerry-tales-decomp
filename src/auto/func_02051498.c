
extern void func_020514ac();
extern void func_0205153c();
// clang-format on

/* func_0200e114 from projets/rayman-rr/src/auto/func_0200e114.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
// clang-format off
asm void func_02051498(void) {
    stmfd sp!, {r0, lr}
    bl func_020514ac
    bl func_0205153c
    ldmfd sp!, {r0, lr}
    bx lr
}
