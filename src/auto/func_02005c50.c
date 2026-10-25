#include "m2c.h"
typedef struct {
    s16 id;
    u16 f2;
    u8 pad[0x58 - 4];
    u32 f58;
} E;
u32 func_0203adac(void);
E *func_0203a95c(s16);
u8 *func_0203a58c(s16);
s32 func_020592b0(void *, void *);
void func_0203a388(u16);
void func_02005c50(void *name, s32 mode) {
    u16 i;
    u32 n;
    E *e;
    u8 *p;
    i = 0;
    n = func_0203adac();
    if (n == 0) {
        return;
    }
    do {
        e = func_0203a95c(i);
        if (e->id != -1) {
            p = func_0203a58c(e->id);
            if (name != 0 && func_020592b0(p + 0xC, name) == 0) {
                if (mode == 2) {
                    func_0203a388(e->f2);
                } else if (mode == 1) {
                    e->f58 &= ~0x40;
                } else if (mode == 0) {
                    e->f58 |= 0x40;
                }
                return;
            }
        }
        i++;
    } while (i < n);
}
