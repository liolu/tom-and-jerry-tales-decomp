#include "m2c.h"
typedef struct {
    u16 done;
    u16 unk;
    u16 *buffer;
} RegA;
typedef struct {
    u8 pad[0x1c];
    void *cb;
    void *arg;
} PmSt;
extern RegA data_021b24cc[5];
extern PmSt data_021b248c;
s32 func_0205600c(void);
void func_02056614(u32 d);
u32 func_02056330(u32 reg, u16 *buffer, void *callback, void *arg) {
    if (!func_0205600c()) {
        return 1;
    }
    data_021b248c.cb          = callback;
    data_021b248c.arg         = arg;
    data_021b24cc[reg].done   = 0;
    data_021b24cc[reg].buffer = buffer;
    func_02056614(0x03006500 | (reg & 0xff));
    return 0;
}
