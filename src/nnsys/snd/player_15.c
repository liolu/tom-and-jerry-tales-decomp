#include "m2c.h"

M2C_UNK NNS_FndRemoveListObject(M2C_UNK *, void *);
M2C_UNK InsertPlayerList(M2C_UNK *, void *);
M2C_UNK InsertPrioList(void *);
extern M2C_UNK sPrioList;

void SetPlayerPriority(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        NNS_FndRemoveListObject(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    NNS_FndRemoveListObject(&sPrioList, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        InsertPlayerList(temp_r4, arg0);
    }
    InsertPrioList(arg0);
}
