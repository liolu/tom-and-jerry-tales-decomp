#include "m2c.h"

void func_02054c5c(void *);
s32 FS_OpenFile(void *, void *);
void func_02054f84(void *);
void func_020550c8(void *, void *, s32);
void FS_SeekFile(void *, s32, s32);
void sprintf(void *, void *, s32, s32);
void strcpy(void *, s32);
s32 strcmp(void *);
extern s32 data_0206db90;
extern u8 data_0206dba8[];
extern u8 data_0206dbb4[];
extern u8 data_021a7188[];
extern u8 data_021a718c[];
extern u8 data_021a7190[];
extern u8 data_021a7194[];
extern u8 data_021a71dc[];
extern s8 data_021a7224;

s32 func_0204031c(s32 unused, s32 arg1) {
    u8 sp40[0x40];
    u8 sp0[0x40];
    s32 var_r4;

    var_r4 = 0;
    if (strcmp(&data_021a7224) != 0) {
        var_r4 = 1;
    }
    if (var_r4 != 0) {
        if (data_021a7224 != 0) {
            func_02054f84(data_021a71dc);
        }
        sprintf(sp40, data_0206dba8, data_0206db90, arg1);
        func_02054c5c(data_021a71dc);
        if (FS_OpenFile(data_021a71dc, sp40) == 0) {
            return 1;
        }
        sprintf(sp0, data_0206dbb4, data_0206db90, arg1);
        func_02054c5c(data_021a7194);
        if (FS_OpenFile(data_021a7194, sp0) == 0) {
            func_02054f84(data_021a71dc);
            return 1;
        }
        FS_SeekFile(data_021a71dc, 0, 0);
        func_020550c8(data_021a71dc, data_021a718c, 4);
        func_020550c8(data_021a71dc, data_021a7190, 4);
        func_020550c8(data_021a71dc, data_021a7188, 4);
        strcpy(&data_021a7224, arg1);
    }
    return 0;
}
