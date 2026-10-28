#include "m2c.h"
typedef struct {
    void (*func)(void *);
    s32 enable;
    void *arg;
} CbInfo;
extern CbInfo OSi_IrqCallbackInfo[];
extern void func_0204ef68(u32);
void OSi_EnterTimerCallback(s32 n, void (*func)(void *), void *arg) {
    OSi_IrqCallbackInfo[n + 4].func = func;
    OSi_IrqCallbackInfo[n + 4].arg  = arg;
    func_0204ef68(1 << (n + 3));
    OSi_IrqCallbackInfo[n + 4].enable = 1;
}
