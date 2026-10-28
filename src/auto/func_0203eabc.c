#include "m2c.h"

s32 func_0204f32c(void);
void OS_Terminate(void);
s32 CARD_IsAvailable(void);
s32 CARD_GetResultCode(void);
void CARD_LockBackup(u16);
void CARD_UnlockBackup(u16);
void func_02057b54(s32);
void func_020582cc(void);
extern u8 data_0206d4e0[];

s32 func_0203eabc(void) {
    s32 temp_r0;
    if (CARD_IsAvailable() == 0) {
        *(s32 *) (data_0206d4e0 + 4) = 0;
        return 0U;
    }
    func_020582cc();
    if (CARD_GetResultCode() != 0) {
        *(s32 *) (data_0206d4e0 + 4) = 0;
        return 0U;
    }
    temp_r0 = func_0204f32c();
    if (temp_r0 == -3) {
        OS_Terminate();
    }
    CARD_LockBackup(temp_r0);
    func_02057b54(0x901);
    CARD_UnlockBackup(temp_r0);
    return temp_r0;
}
