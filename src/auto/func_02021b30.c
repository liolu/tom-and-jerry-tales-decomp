#include "m2c.h"

M2C_UNK func_0204c1f8(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0204c260(M2C_UNK);
M2C_UNK GX_SetBankForBG(M2C_UNK);
M2C_UNK GX_SetBankForOBJ(M2C_UNK);
M2C_UNK GX_SetBankForBGExtPltt(M2C_UNK);
M2C_UNK GX_SetBankForOBJExtPltt(M2C_UNK);
M2C_UNK func_0204c948(M2C_UNK);
M2C_UNK func_0204cb20(M2C_UNK);
M2C_UNK GX_SetBankForSubBG(M2C_UNK);
M2C_UNK GX_SetBankForSubOBJ(M2C_UNK);
M2C_UNK GX_SetBankForSubBGExtPltt(M2C_UNK);
M2C_UNK GX_SetBankForSubOBJExtPltt(M2C_UNK);
extern s32 data_020692ec;

void func_02021b30(void) {
    *(u16 *) 0x04000304 &= ~0x8000;
    func_0204c1f8(1, 0, 1);
    GX_SetBankForBG(0x10);
    GX_SetBankForOBJ(2);
    GX_SetBankForBGExtPltt(0);
    GX_SetBankForOBJExtPltt(0);
    func_0204c948(0xD);
    func_0204cb20(0x20);
    func_0204c260(0);
    if (data_020692ec == 2) {
        GX_SetBankForSubBG(0x180);
        GX_SetBankForSubOBJ(0);
    } else {
        GX_SetBankForSubBG(0x80);
        GX_SetBankForSubOBJ(0x100);
    }
    GX_SetBankForSubBGExtPltt(0);
    GX_SetBankForSubOBJExtPltt(0);
}
