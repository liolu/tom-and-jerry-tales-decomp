/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_SPrintf from https://github.com/RonyxDumb/mkds src/arm9/0200d118_Util_VSNPrintF.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef signed char s8;
typedef signed long s32;
extern s32 func_0204f490(s8 *buffer, const s8 *format, ...);
extern s32 func_0204f4b8(s8 *buffer, const s8 *format, void *args);
s32 func_0204f490(s8 *buffer, const s8 *format, ...) {
    void *args = (void *) ((u32 *) ((u32) &format & ~0x3) + 1);
    return func_0204f4b8(buffer, format, args);
}
s32 func_0204f4b8(s8 *buffer, const s8 *format, void *args);
