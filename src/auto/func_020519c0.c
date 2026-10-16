/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
extern u32 func_020517f8(void);
extern u32 func_0205180c(u32 state);
extern u32 data_021b07c0;
extern u16 data_021b07c4[9];
u32 func_02051984(register u32 value);

/* func_02079f00 from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_vramexclusive.c (license: none),
 * reused by tools/donor_match.py */
void func_020519c0(u32 bank, u16 lockID) {
    u32 mask;
    u32 enabled = func_020517f8();

    mask = bank & data_021b07c0 & 0x1ff;

    while (1) {
        s32 i = 31 - func_02051984(mask);
        if (i < 0) {
            break;
        }
        mask &= ~(1 << i);
        if (data_021b07c4[i] == lockID) {
            data_021b07c4[i] = 0;
            data_021b07c0 &= ~(1 << i);
        }
    }
    func_0205180c(enabled);
}
