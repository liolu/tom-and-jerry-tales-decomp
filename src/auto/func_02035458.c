#include "m2c.h"

void *func_01ff8000(void *, s32);                   /* extern */
M2C_UNK func_02051f30(s32, void *, s32);            /* extern */
extern void *data_027e0060;
extern void *data_027e0064;
extern s32 data_027e0068;
extern void *data_027e006c;
extern void *data_027e0070;
extern s32 data_027e007c;

void func_02035458(void *arg0) {
    void *temp_r0;
    void *temp_r0_2;

    if ((M2C_FIELD(arg0, s32 *, 4) & 0x1F) != 0x1C) {
        do {
            func_01ff8000(arg0, 1);
        } while ((M2C_FIELD(arg0, s32 *, 4) & 0x1F) != 0x1C);
    }
    temp_r0       = func_01ff8000(arg0, 0xE110);
    data_027e0070 = temp_r0;
    func_02051f30(0x232122, temp_r0, 0xE110);
    M2C_FIELD(data_027e0070, s32 *, 0) = 0x40;
    M2C_FIELD(data_027e0070, s32 *, 4) = 0;
    data_027e006c                      = data_027e0070 + 8;
    data_027e0068                      = 0;
    if ((M2C_FIELD(arg0, s32 *, 4) & 0x1F) != 0x1C) {
        do {
            func_01ff8000(arg0, 1);
        } while ((M2C_FIELD(arg0, s32 *, 4) & 0x1F) != 0x1C);
    }
    temp_r0_2     = func_01ff8000(arg0, 0xE110);
    data_027e0064 = temp_r0_2;
    func_02051f30(0x232022, temp_r0_2, 0xE110);
    M2C_FIELD(data_027e0064, s32 *, 0) = 0x40;
    M2C_FIELD(data_027e0064, s32 *, 4) = 0;
    data_027e0060                      = data_027e0064 + 8;
    data_027e007c                      = 0;
}
