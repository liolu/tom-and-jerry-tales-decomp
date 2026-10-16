#include "engine.h"
#include "m2c.h"

void func_02046898(M2C_UNK, M2C_UNK);
M2C_UNK func_02046910(M2C_UNK, M2C_UNK);
M2C_UNK func_02046c60(M2C_UNK, M2C_UNK);
void func_02046cb0(M2C_UNK, M2C_UNK);
void func_02048768(M2C_UNK);
M2C_UNK func_02048a14(M2C_UNK);
void func_02048a50(void);

void func_020488d8(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_ip)(s32, s32, s32, s32);
    s32 temp_r0;
    s32 var_r7;
    s32 var_r8;

    var_r8 = 0;
    var_r7 = 0;
    if (arg1 == 0) {
        func_02048768(arg0);
        return;
    }
    if (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0xC)) {
        do {
            temp_r0 = func_02046910(arg0 + 4, 0);
            var_r8  = func_02046910(temp_r0, var_r8);
            if (var_r8 != 0) {
                do {
                    temp_ip = M2C_FIELD(var_r8, M2C_UNK(**)(s32, s32, s32, s32), 0xC);
                    if (temp_ip != NULL) {
                        temp_ip(var_r8 + 0x20, M2C_FIELD(var_r8, s32 *, 8), M2C_FIELD(var_r8, s32 *, 0x10),
                                M2C_FIELD(var_r8, s32 *, 0x14));
                        var_r7 = 1;
                    }
                    var_r8 = func_02046910(temp_r0, var_r8);
                } while (var_r8 != 0);
            }
            func_02046898(arg0 + 4, temp_r0);
        } while (arg1 < (s32) M2C_FIELD(arg0, u16 *, 0xC));
    }
    func_02046cb0(M2C_FIELD(arg0, s32 *, 0), arg1);
    if (var_r7 != 0) {
        func_02048a50();
    }
    func_02046c60(M2C_FIELD(arg0, s32 *, 0), (s32) M2C_FIELD(arg0, u16 *, 0xC));
    func_02048a14(arg0);
}
