/* compiler: 2.0/sp1p5 -pragma "opt_propagation off" */
#include "m2c.h"

M2C_UNK func_0203cd48(M2C_UNK *);                   /* extern */
M2C_UNK func_0203cf6c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_0203cff0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
M2C_UNK func_0203d498(M2C_UNK *, M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK OS_Terminate();                            /* extern */
extern u32 data_020692ec;
extern M2C_UNK data_0206aae8;
extern M2C_UNK data_0206ab40;
extern M2C_UNK data_0206ab9c;
extern M2C_UNK data_0206ac40;
extern M2C_UNK data_0206e698;
extern M2C_UNK data_020b8be4;
extern M2C_UNK data_020b8c0c;
extern M2C_UNK data_020b8c5c;

void func_020116d8(void) {
    switch (data_020692ec) {
        case 1: {
            void *a = &data_0206aae8;
            func_0203d498(a, &data_0206e698, 0, 1, &data_020b8c5c);
        }
            M2C_FIELD((void *) 0x04001000, s32 *, 0) = (s32) ((M2C_FIELD((void *) 0x04001000, s32 *, 0) & ~0xE000) | 0x2000);
            M2C_FIELD((void *) 0x04001000, u16 *, 0x48) = (u16) ((M2C_FIELD((void *) 0x04001000, u16 *, 0x48) & ~0x3F) | 0x10);
            M2C_FIELD((void *) 0x04001000, u16 *, 0x4A) = (u16) ((M2C_FIELD((void *) 0x04001000, u16 *, 0x4A) & ~0x3F) | 0x11);
            return;
        case 3: {
            void *a = &data_0206ab40;
            func_0203d498(a, &data_0206e698, 0, 1, &data_020b8c5c);
        }
            return;
        case 4: {
            void *a = &data_0206ab9c;
            func_0203d498(a, &data_0206e698, 0, 1, &data_020b8c5c);
        }
            M2C_FIELD((void *) 0x04001000, s32 *, 0) = (s32) ((M2C_FIELD((void *) 0x04001000, s32 *, 0) & ~0xE000) | 0x6000);
            M2C_FIELD((void *) 0x04001000, u16 *, 0x48) = (u16) ((M2C_FIELD((void *) 0x04001000, u16 *, 0x48) & ~0x3F) | 0x10);
            M2C_FIELD((void *) 0x04001000, u16 *, 0x4A) = (u16) ((M2C_FIELD((void *) 0x04001000, u16 *, 0x4A) & ~0x3F) | 0x11);
            M2C_FIELD((void *) 0x04001000, u16 *, 0x48) =
                (u16) ((M2C_FIELD((void *) 0x04001000, u16 *, 0x48) & ~0x3F00) | 0x1000);
            return;
        case 2:
            func_0203cd48(&data_020b8be4);
            func_0203cd48(&data_020b8c0c);
            func_0203cf6c(4, 5, 0, 0, 0xC, 0, 0, 0);
            func_0203cff0(5, 4, 0, 1, 0xE, 2, 3);
            {
                void *a = &data_0206ac40;
                func_0203d498(a, &data_0206e698, 0, 1, &data_020b8c0c);
            }
            return;
        case 0:
            OS_Terminate();
            return;

        default:
            OS_Terminate();
            return;
    }
}
