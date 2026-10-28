#include "m2c.h"

void NNS_SndInit(void);
void func_0204703c(void *);
void func_020470cc(void *, s32);
void func_02048058(void *, void *, s32, s32);
s32 NNS_SndHeapCreate(void *, s32);
s32 NNS_SndHeapSaveState(s32);
s32 NNS_SndArcPlayerSetup(s32);
void func_02049744(s32, s32);
void func_020499f4(void *);
void OS_Terminate(void);
extern s32 data_0206db50;
extern u8 data_0206db7c[];
extern u8 data_020ba3e0[];
extern u32 data_020ba280[];
extern u8 data_020ba3e8[];
extern u8 data_020ba3ec[];
extern u8 data_020ba3f0[];
extern u8 data_020ba3f4[];
extern u8 data_020ba3fc[];
extern u8 data_020ba430[];
extern u8 data_020ba4c0[];
extern u8 data_020ba580[];

void func_0203f4a4(void) {
    s32 temp_r0;
    u16 i;

    if (*(s32 *) (data_020ba3e0 + 4) == 1) {
        OS_Terminate();
    }
    NNS_SndInit();
    temp_r0                         = NNS_SndHeapCreate(data_020ba580, 0xEC800);
    *(s32 *) (data_020ba3e0 + 0x20) = temp_r0;
    if (temp_r0 == 0) {
        OS_Terminate();
    }
    func_02048058(data_020ba430, data_0206db7c, *(s32 *) (data_020ba3e0 + 0x20), 0);
    if (NNS_SndArcPlayerSetup(*(s32 *) (data_020ba3e0 + 0x20)) == 0) {
        OS_Terminate();
    }
    func_02049744(0xA, *(s32 *) (data_020ba3e0 + 0x20));
    func_0204703c((void *) &data_020ba280[88]);
    func_0204703c(data_020ba3f4);
    func_020499f4(data_020ba3fc);
    func_020499f4(data_020ba3ec);
    func_020499f4(data_020ba3e8);
    func_020499f4(data_020ba3f0);
    i = 0;
    do {
        func_0204703c(data_020ba4c0 + (i * 0x10));
        i += 1;
    } while (i < 0xC);
    *(s32 *) (data_020ba3e0 + 4) = 1;
    func_020470cc((void *) &data_020ba280[88], data_0206db50);
    *(s32 *) (data_020ba3e0 + 0x34) = 0;
    *(s32 *) (data_020ba3e0 + 0x18) = NNS_SndHeapSaveState(*(s32 *) (data_020ba3e0 + 0x20));
}
