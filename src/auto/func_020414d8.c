#include "m2c.h"
extern u8 data_021a72a4[];
extern u8 data_021a72b4[];
void strcpy(void *a, s32 b);
void OS_Terminate(void);
s32 func_020414d8(s32 a, s32 b) {
    s32 i;
    u8 *p = data_021a72a4;
    for (i = 0; i < 0x40; i++, p += 0x14) {
        if (*(s32 *) (p + 0x10) == 0) {
            *(s32 *) (data_021a72b4 + i * 0x14) = b;
            strcpy(data_021a72a4 + i * 0x14, a);
            return 1;
        }
    }
    OS_Terminate();
    return 0;
}
