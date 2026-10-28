/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */

typedef unsigned int u32;
typedef struct {
    u32 unk_00;
    u32 allocatedBits;
    u32 lockedChannels;
} UnkSndResourceState;
extern UnkSndResourceState sCaptureLock;

/* func_020732ec from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_resource.c (license: none),
 * reused by tools/donor_match.py */
int NNS_SndAllocAlarm(void) {
    int i;
    u32 bit = 1;

    for (i = 0; i < 8; i++) {
        if ((sCaptureLock.allocatedBits & bit) == 0) {
            sCaptureLock.allocatedBits |= bit;
            return i;
        }
        bit <<= 1;
    }
    return -1;
}
