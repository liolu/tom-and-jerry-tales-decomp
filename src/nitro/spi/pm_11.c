#include "m2c.h"

M2C_UNK func_02056980(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_021b2498;
M2C_UNK PMi_AppendList(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_021b24a0;
M2C_UNK PMi_DeleteList(M2C_UNK *, M2C_UNK);

void PM_PrependPreSleepCallback(M2C_UNK arg0) {
    func_02056980(&data_021b2498, arg0);
}

void PM_AppendPostSleepCallback(M2C_UNK arg0) {
    PMi_AppendList(&data_021b24a0, arg0);
}

void PM_DeletePreSleepCallback(M2C_UNK arg0) {
    PMi_DeleteList(&data_021b2498, arg0);
}

void PM_DeletePostSleepCallback(M2C_UNK arg0) {
    PMi_DeleteList(&data_021b24a0, arg0);
}
