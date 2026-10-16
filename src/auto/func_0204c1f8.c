/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_SetGraphicsMode from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/gx/gx.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
extern u16 data_0206de64;
extern u16 data_021b03a0;
extern u16 data_0206de64;
extern u16 data_021b03a0;
void func_0204c1f8(u32 dispMode, u32 bgMode, u32 bg0_2d3d) {
    u32 cnt = (*(u32 *) ((0x04000000) | 0x0));

    data_021b03a0 = dispMode;
    if (!data_0206de64) {
        dispMode = 0;
    }
    (*(u32 *) ((0x04000000) | 0x0)) = (cnt & ~0xf000f) | (dispMode << 16) | bgMode | (bg0_2d3d << 3);
    if (data_021b03a0 == 0) {
        data_0206de64 = 0;
    }
}
