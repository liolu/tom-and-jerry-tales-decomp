/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
// clang-format on
typedef unsigned char u8;

/* MI_CpuCopyU32 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/cpumem.c (license: none), reused by
 * tools/donor_match.py */
// clang-format off
asm void MIi_CpuCopy32(register const u32* src, register u32* dest, register u32 count) {
    add     ip, r1, r2
@1:
    cmp     r1, ip
    ldmltia     r0!, {r2}
    stmltia     r1!, {r2}
    blt       @1
    bx      lr
}

/* MI_CpuFill from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/cpumem.c (license: none), reused by
 * tools/donor_match.py */
// clang-format off
asm void MIi_CpuClearFast(register u32 value, register void* dest, register u32 count) {
    stmdb   sp!, {r4, r5, r6, r7, r8, r9}
    add     r9, r1, r2
    mov     ip, r2, lsr #0x5
    add     ip, r1, ip, lsl #0x5
    mov     r2, r0
    mov     r3, r2
    mov     r4, r2
    mov     r5, r2
    mov     r6, r2
    mov     r7, r2
    mov     r8, r2
@1:
    cmp     r1, ip
    stmltia     r1!, {r0, r2, r3, r4, r5, r6, r7, r8}
    blt       @1
@2:
    cmp     r1, r9
    stmltia     r1!, {r0}
    blt       @2
    ldmia   sp!, {r4, r5, r6, r7, r8, r9}
    bx      lr
}

/* MI_CpuCopy from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/mi/cpumem.c (license: none), reused by
 * tools/donor_match.py */
// clang-format off
asm void MIi_CpuCopyFast(register const u32* src, register u32* dest, register u32 count) {
    stmdb   sp!, {r4, r5, r6, r7, r8, r9, r10}
    add     r10, r1, r2
    mov     ip, r2, lsr #0x5
    add     ip, r1, ip, lsl #0x5
@1:
    cmp     r1, ip
    ldmltia     r0!, {r2, r3, r4, r5, r6, r7, r8, r9}
    stmltia     r1!, {r2, r3, r4, r5, r6, r7, r8, r9}
    blt       @1
@2:
    cmp     r1, r10
    ldmltia     r0!, {r2}
    stmltia     r1!, {r2}
    blt       @2
    ldmia   sp!, {r4, r5, r6, r7, r8, r9, r10}
    bx      lr
}
