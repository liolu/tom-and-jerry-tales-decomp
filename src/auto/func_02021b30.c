#include "m2c.h"

M2C_UNK func_0204c1f8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_0204c260(M2C_UNK);                     /* extern */
M2C_UNK func_0204c3bc(M2C_UNK);                     /* extern */
M2C_UNK func_0204c64c(M2C_UNK);                     /* extern */
M2C_UNK func_0204c79c(M2C_UNK);                     /* extern */
M2C_UNK func_0204c89c(M2C_UNK);                     /* extern */
M2C_UNK func_0204c948(M2C_UNK);                     /* extern */
M2C_UNK func_0204cb20(M2C_UNK);                     /* extern */
M2C_UNK func_0204cc28(M2C_UNK);                     /* extern */
M2C_UNK func_0204ccd0(M2C_UNK);                     /* extern */
M2C_UNK func_0204cd40(M2C_UNK);                     /* extern */
M2C_UNK func_0204cdc0(M2C_UNK);                     /* extern */
extern s32 data_020692ec;

void func_02021b30(void) {
    *(u16 *) 0x04000304 &= ~0x8000;
    func_0204c1f8(1, 0, 1);
    func_0204c3bc(0x10);
    func_0204c64c(2);
    func_0204c79c(0);
    func_0204c89c(0);
    func_0204c948(0xD);
    func_0204cb20(0x20);
    func_0204c260(0);
    if (data_020692ec == 2) {
        func_0204cc28(0x180);
        func_0204ccd0(0);
    } else {
        func_0204cc28(0x80);
        func_0204ccd0(0x100);
    }
    func_0204cd40(0);
    func_0204cdc0(0);
}
