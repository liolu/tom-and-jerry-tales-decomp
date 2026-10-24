/* compiler: 2.0/sp1p5  */
/* OSi_CountUpTick from projets/blue-dragon-awakened-shadow/src/auto/OSi_CountUpTick.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef struct {
    u16 useTick;
    u16 pad;
    s32 needResetTimer;
    u64 tickCounter;
} OSiTickState;
extern OSiTickState data_021b0798;
extern void func_0204eef4(u32 arg0, void (*arg1)(s32), s32 arg2);
void func_02051624(void) {
    data_021b0798.tickCounter++;
    if (data_021b0798.needResetTimer != 0) {
        *(s16 *) 0x04000102          = 0;
        *(s16 *) 0x04000100          = 0;
        *(s16 *) 0x04000102          = 0xC1;
        data_021b0798.needResetTimer = 0;
    }
    func_0204eef4(0, (void (*)(s32)) func_02051624, 0);
}
