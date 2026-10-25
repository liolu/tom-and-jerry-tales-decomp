#include "m2c.h"

#pragma define_section INIT ".init" \
                            ".init"

extern void func_02063a1c(void *, void *, void *);
extern void func_02051fd0(void *, s32, s32);
extern void func_020466ec(void);
extern void func_02046708(void);
extern char data_0206dd54[];
extern char data_0206dd64[];
extern u32 data_021a90a4[];
extern char data_021a90b4[];
extern char data_021a90c0[];
extern char data_021a90cc[];
extern char data_021a910c[];
extern char data_021a9b18[];
extern s32 data_021ac0a4[];

__declspec(INIT) void __sinit_02063d2c(void) {
    data_021a90a4[0x68 / 4]  = (u32) data_0206dd64;
    data_021a90a4[0xa6c / 4] = 0;
    data_021a90a4[0xa70 / 4] = 0x20;
    func_02063a1c(data_021a910c, func_020466ec, data_021a90b4);
    data_021a90a4[0x28 / 4] = (u32) data_0206dd54;
    data_021a90a4[0x34 / 4] = 0;
    data_021a90a4[0x38 / 4] = 0;
    data_021a90a4[0x2c / 4] = 0;
    data_021a90a4[0x34 / 4] = 0;
    func_02063a1c(data_021a90cc, func_02046708, data_021a90c0);
    func_02051fd0(data_021a9b18, 0, 0x2600);
    data_021ac0a4[0x74 / 4] = 0;
}
