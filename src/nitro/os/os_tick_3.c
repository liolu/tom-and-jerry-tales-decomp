/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

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
extern OsAlarmState OSi_UseTick;
extern int OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(int state);

/* func_02006600 from projets/luminous-arc-2/src/donor/func_02006600.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
void OS_SetTick(u64 nTick) {
    int state = OS_DisableInterrupts();

    (*(volatile u32 *) 0x04000214) = 8;
    OSi_UseTick.bNeedResetTimer    = 1;
    OSi_UseTick.nTickCounterLo     = (u32) (nTick >> 16);
    OSi_UseTick.nTickCounterHi     = (u32) (nTick >> 48);
    (*(volatile u16 *) 0x04000102) = 0;
    (*(volatile u16 *) 0x04000100) = (u16) (nTick & 0xffff);
    (*(volatile u16 *) 0x04000102) = 0xc1;
    OS_RestoreInterrupts(state);
}
