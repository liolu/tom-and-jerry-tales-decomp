#include "m2c.h"

M2C_UNK STD_CopyString(s32, M2C_UNK);
s32 STD_GetStringLength();

s32 STD_ConcatenateString(s32 arg0, M2C_UNK arg1) {
    STD_CopyString(arg0 + STD_GetStringLength(), arg1);
    return arg0;
}
