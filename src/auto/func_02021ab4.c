#include "m2c.h"

M2C_UNK func_0204c1f8(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0204c260(M2C_UNK);
M2C_UNK GX_SetBankForBG(M2C_UNK);
M2C_UNK GX_SetBankForOBJ(M2C_UNK);
M2C_UNK GX_SetBankForBGExtPltt(M2C_UNK);
M2C_UNK GX_SetBankForOBJExtPltt(M2C_UNK);
M2C_UNK GX_SetBankForSubBG(M2C_UNK);
M2C_UNK GX_SetBankForSubOBJ(M2C_UNK);
M2C_UNK GX_SetBankForSubBGExtPltt(M2C_UNK);
M2C_UNK GX_SetBankForSubOBJExtPltt(M2C_UNK);

void func_02021ab4(void) {
    *(u16 *) 0x04000304 &= ~0x8000;
    func_0204c1f8(1, 0, 0);
    GX_SetBankForBG(3);
    GX_SetBankForOBJ(0x10);
    GX_SetBankForBGExtPltt(0);
    GX_SetBankForOBJExtPltt(0);
    func_0204c260(0);
    GX_SetBankForSubBG(4);
    GX_SetBankForSubOBJ(8);
    GX_SetBankForSubBGExtPltt(0);
    GX_SetBankForSubOBJExtPltt(0);
}
