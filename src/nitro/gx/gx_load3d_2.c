#include "engine.h"
#include "m2c.h"

void func_0204c948(M2C_UNK);
void func_02051d2c(M2C_UNK);
extern s32 GXi_DmaId;
extern M2C_UNK sClrImg;

void GX_EndLoadTex(void) {
    if (GXi_DmaId != -1) {
        func_02051d2c(GXi_DmaId);
    }
    func_0204c948(M2C_FIELD(&sClrImg, s32 *, 0x14));
    M2C_FIELD(&sClrImg, s32 *, 0x1C) = 0;
    M2C_FIELD(&sClrImg, s32 *, 0x18) = 0;
    M2C_FIELD(&sClrImg, s32 *, 4)    = 0;
    M2C_FIELD(&sClrImg, s32 *, 0x14) = 0;
}
