#include "m2c.h"

M2C_UNK func_02002608();                            /* extern */
M2C_UNK func_02003f98();                            /* extern */
M2C_UNK func_02020044();                            /* extern */
M2C_UNK func_02020184();                            /* extern */
M2C_UNK func_02020328();                            /* extern */
M2C_UNK func_02035164();                            /* extern */
M2C_UNK func_0203ac7c();                            /* extern */
M2C_UNK func_0204d760();                            /* extern */
M2C_UNK func_02051868();                            /* extern */
extern s32 data_020692ec;

void func_0201f168(void) {
    func_02051868();
    func_0204d760();
    func_02002608();
    *(s32 *) 0x04000444 = 0;
    func_02035164();
    func_02003f98();
    func_0203ac7c();
    M2C_FIELD((void *) 0x04000448, s32 *, 0)    = 1;
    M2C_FIELD((void *) 0x04000448, s32 *, 0xF8) = 1;
    if (data_020692ec != 1) {
        func_02020328();
        return;
    }
    func_02020184();
    func_02020044();
}
