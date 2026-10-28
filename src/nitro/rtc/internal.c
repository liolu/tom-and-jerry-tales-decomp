#include "m2c.h"

M2C_UNK RtcSendPxiCommand(M2C_UNK);
s32 func_02053674(M2C_UNK, s32, M2C_UNK);

void RTCi_ReadRawDateTimeAsync(void) {
    RtcSendPxiCommand(0x10);
}

void RTCi_WriteRawStatus2Async(void) {
    RtcSendPxiCommand(0x27);
}

s32 RtcSendPxiCommand(s32 arg0) {
    if (func_02053674(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        return 1;
    }
    return 0;
}
