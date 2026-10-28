/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

// clang-format on

/* OS_EnableProtectionUnit from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_protection.c (license:
 * none), reused by tools/donor_match.py */
// clang-format off
asm void OS_EnableProtectionUnit(void) {
    mrc     p15, 0, r0, c1, c0, 0
    orr     r0, r0, #1
    mcr     p15, 0, r0, c1, c0, 0
    bx      lr
}

/* OS_DisableProtectionUnit from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_protection.c (license:
 * none), reused by tools/donor_match.py */
// clang-format off
asm void OS_DisableProtectionUnit(void) {
    mrc     p15, 0, r0, c1, c0, 0
    bic     r0, r0, #1
    mcr     p15, 0, r0, c1, c0, 0
    bx      lr
}
