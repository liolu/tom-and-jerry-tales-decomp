#include "m2c.h"

M2C_UNK PXI_Init();
M2C_UNK func_02053604(M2C_UNK, M2C_UNK *);
s32 func_02053650(M2C_UNK, M2C_UNK);
extern M2C_UNK RTCi_Bss;
extern M2C_UNK RtcCommonCallback;

void RTC_Init(void) {
    if (M2C_FIELD(&RTCi_Bss, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&RTCi_Bss, u16 *, 0)    = 1U;
    M2C_FIELD(&RTCi_Bss, s32 *, 4)    = 0;
    M2C_FIELD(&RTCi_Bss, s32 *, 8)    = 0;
    M2C_FIELD(&RTCi_Bss, s32 *, 0x20) = 0;
    M2C_FIELD(&RTCi_Bss, s32 *, 0xC)  = 0;
    M2C_FIELD(&RTCi_Bss, s32 *, 0x10) = 0;
    PXI_Init();
    do {

    } while (func_02053650(5, 1) == 0);
    func_02053604(5, &RtcCommonCallback);
}
