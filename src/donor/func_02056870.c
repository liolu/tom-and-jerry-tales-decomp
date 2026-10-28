/* compiler: 2.0/sp1p5  */
/* PMi_SetLCDPower from projets/heroes-of-mana/src/auto/PMi_SetLCDPower.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
extern u8 data_021b248c;
extern s32 PMi_SetLED(s32 a);
extern s32 PMi_SetLEDAsync(s32 a, s32 b, s32 c);
s32 func_02056870(s32 mode, s32 led, s32 force, s32 sync) {
    switch (mode) {
        case 1:
            if (force == 0) {
                if ((u32) (*(u32 *) 0x027FFC3C - *(u32 *) (&data_021b248c + 0x10)) <= 7) {
                    return 0;
                }
            }
            if (led != 0) {
                if (sync != 0) {
                    PMi_SetLED(led);
                } else {
                    PMi_SetLEDAsync(led, 0, 0);
                }
            }
            *(volatile u16 *) 0x04000304 |= 1;
            break;
        case 0:
            *(volatile u16 *) 0x04000304 &= ~1;
            *(u32 *) (&data_021b248c + 0x10) = *(u32 *) 0x027FFC3C;
            if (led != 0) {
                if (sync != 0) {
                    PMi_SetLED(led);
                } else {
                    PMi_SetLEDAsync(led, 0, 0);
                }
            }
            break;
    }
    return 1;
}
