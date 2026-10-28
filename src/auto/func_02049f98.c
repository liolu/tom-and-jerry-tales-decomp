#include "m2c.h"

M2C_UNK FreePlayer(void *);
M2C_UNK FreeChannel();
M2C_UNK RemoveCommandByPlayer(M2C_UNK *, void *);
extern M2C_UNK data_021af530;
extern M2C_UNK data_021afbc0;

void func_02049f98(void *arg0) {
    if (((s32) (M2C_FIELD(arg0, s32 *, 0x110) << 0x1F) >> 0x1F) == 0) {
        return;
    }
    FreeChannel(arg0);
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x164)(arg0);
    RemoveCommandByPlayer(&data_021afbc0, arg0);
    if (M2C_FIELD(&data_021af530, s32 *, 4) != 0) {
        RemoveCommandByPlayer(M2C_FIELD(&data_021af530, s32 *, 4) + 0x4E0, arg0);
    }
    FreePlayer(arg0);
}
