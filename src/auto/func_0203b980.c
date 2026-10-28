#include "m2c.h"

M2C_UNK func_0203bb80();
u32 GX_GetSizeOfOBJ();
u32 GX_GetSizeOfSubOBJ();
M2C_UNK GX_LoadOBJPltt(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK GXS_LoadOBJPltt(M2C_UNK *, M2C_UNK, M2C_UNK);
M2C_UNK OS_Terminate();
extern M2C_UNK data_0206411c;
extern s32 data_020b84dc;
extern M2C_UNK data_020b8806;
extern M2C_UNK data_020b8808;

void func_0203b980(s32 arg0) {
    s32 var_r4;
    u32 temp_r0;
    u32 temp_r0_2;

    var_r4 = 0x10;
    if (data_020b84dc == 0) {
        temp_r0 = GX_GetSizeOfOBJ();
        if (temp_r0 <= 0x8000U) {
            *((s16 *) ((s8 *) &data_020b8806 + (data_020b84dc * 0x32C))) = 0x20;
        } else if (temp_r0 <= 0x10000U) {
            *((s16 *) ((s8 *) &data_020b8806 + (data_020b84dc * 0x32C))) = 0x40;
            var_r4                                                       = 0x100010;
        } else if (temp_r0 <= 0x20000U) {
            *((s16 *) ((s8 *) &data_020b8806 + (data_020b84dc * 0x32C))) = 0x80;
            var_r4                                                       = 0x200010;
        } else if (temp_r0 <= 0x40000U) {
            *((s16 *) ((s8 *) &data_020b8806 + (data_020b84dc * 0x32C))) = 0x100;
            var_r4                                                       = 0x300010;
        } else {
            OS_Terminate();
        }
        *(s32 *) 0x04000000 = (*(s32 *) 0x04000000 & 0xFFCFFFEF) | var_r4;
        if (arg0 != 0) {
            GX_LoadOBJPltt(&data_0206411c, 0x1E0, 0x20);
        }
    } else {
        temp_r0_2 = GX_GetSizeOfSubOBJ();
        if (temp_r0_2 <= 0x8000U) {
            *((s16 *) ((s8 *) &data_020b8806 + (data_020b84dc * 0x32C))) = 0x20;
        } else if (temp_r0_2 <= 0x10000U) {
            *((s16 *) ((s8 *) &data_020b8806 + (data_020b84dc * 0x32C))) = 0x40;
            var_r4                                                       = 0x100010;
        } else if (temp_r0_2 <= 0x20000U) {
            *((s16 *) ((s8 *) &data_020b8806 + (data_020b84dc * 0x32C))) = 0x80;
            var_r4                                                       = 0x200010;
        } else {
            OS_Terminate();
        }
        *(s32 *) 0x04001000 = (*(s32 *) 0x04001000 & 0xFFCFFFEF) | var_r4;
        if (arg0 != 0) {
            GXS_LoadOBJPltt(&data_0206411c, 0x1E0, 0x20);
        }
    }
    *((M2C_UNK *) ((s8 *) &data_020b8808 + (data_020b84dc * 0x32C))) = arg0;
    func_0203bb80();
}
