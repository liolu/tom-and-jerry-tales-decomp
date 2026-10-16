/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_DispOn from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_0206de64;
extern u16 data_021b03a0;
extern u16 data_0206de64;
extern u16 data_021b03a0;
void func_0204c1b0(void) {
    data_0206de64 = 1;
    if (data_021b03a0 != 0) {
        (*(u32 *) ((0x04000000) | 0x0)) = ((*(u32 *) ((0x04000000) | 0x0)) & ~0x30000) | (data_021b03a0 << 16);
    } else {
        (*(u32 *) ((0x04000000) | 0x0)) |= 0x10000;
    }
}
