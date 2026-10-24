/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02006600 from projets/luminous-arc-2/src/donor/func_02006600.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned long u32;
typedef unsigned long long u64;
typedef struct OsAlarmState {
    u8 pad_00[4];
    u32 bNeedResetTimer;
    u32 nTickCounterLo;
    u32 nTickCounterHi;
} OsAlarmState;
extern OsAlarmState data_021b0798;
extern int func_020517f8(void);
extern void func_0205180c(int state);
void func_0205172c(u64 nTick) {
    int state = func_020517f8();

    (*(volatile u32 *) 0x04000214) = 8;
    data_021b0798.bNeedResetTimer  = 1;
    data_021b0798.nTickCounterLo   = (u32) (nTick >> 16);
    data_021b0798.nTickCounterHi   = (u32) (nTick >> 48);
    (*(volatile u16 *) 0x04000102) = 0;
    (*(volatile u16 *) 0x04000100) = (u16) (nTick & 0xffff);
    (*(volatile u16 *) 0x04000102) = 0xc1;
    func_0205180c(state);
}
