#include "m2c.h"

s32 OS_AllocFromHeap(M2C_UNK, M2C_UNK, s32);
M2C_UNK FS_Init(M2C_UNK);
s32 FS_TryLoadTable(s32, s32);
extern M2C_UNK data_02088720;

void func_02030ef8(void) {
    s32 temp_r0;

    FS_Init(-1);
    temp_r0 = FS_TryLoadTable(0, 0);
    FS_TryLoadTable(OS_AllocFromHeap(0, -1, temp_r0), temp_r0);
    M2C_FIELD(&data_02088720, s32 *, 4) = 1;
}
