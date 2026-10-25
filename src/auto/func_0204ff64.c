#include "m2c.h"
typedef struct OSThread OSThread;
typedef struct {
    OSThread *head, *tail;
} OSThreadQueue;
struct OSThread {
    u8 ctx[0x64];
    s32 state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    u8 pad78[0x90 - 0x78];
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    OSThreadQueue joinQueue;
    u8 padA4[0xC0 - 0xA4];
};
typedef struct {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void *switchCallback;
} OSThreadInfo;
typedef struct {
    u8 pad0[8];
    OSThread **currentPtr;
    s32 isInit;
    u8 pad10[0x24 - 0x10];
    OSThreadInfo info;
    OSThread idle;
    OSThread launcher;
    u32 idleStack[200 / 4];
} OSThreadState;
extern OSThreadState data_021b0460;
extern u8 data_027e0000[];
extern char SDK_IRQ_STACKSIZE[];
extern char SDK_SYS_STACKSIZE[];
void func_02050530(void *);
void func_020500ac(OSThread *, void (*)(void *), void *, void *, u32, u32);
void func_02050558(void *);
void func_0204ff64(void) {
    void *stackLo;
    if (data_021b0460.isInit) {
        return;
    }
    data_021b0460.isInit                                        = 1;
    data_021b0460.currentPtr                                    = &data_021b0460.info.current;
    data_021b0460.launcher.priority                             = 0x10;
    data_021b0460.launcher.id                                   = 0;
    data_021b0460.launcher.state                                = 1;
    data_021b0460.launcher.next                                 = 0;
    data_021b0460.launcher.profiler                             = 0;
    data_021b0460.info.list                                     = &data_021b0460.launcher;
    data_021b0460.info.current                                  = &data_021b0460.launcher;
    stackLo                                                     = (s32) SDK_SYS_STACKSIZE <= 0
                                                                      ? (void *) (0x027E00A0 - (s32) SDK_SYS_STACKSIZE)
                                                                      : (void *) ((u32) data_027e0000 + 0x3F80 - (s32) SDK_IRQ_STACKSIZE - (s32) SDK_SYS_STACKSIZE);
    data_021b0460.launcher.stackBottom                          = (u32) data_027e0000 + 0x3F80 - (s32) SDK_IRQ_STACKSIZE;
    data_021b0460.launcher.stackTop                             = (u32) stackLo;
    data_021b0460.launcher.stackWarningOffset                   = 0;
    *(u32 *) (data_021b0460.launcher.stackBottom - sizeof(u32)) = 0xFDDB597D;
    *(u32 *) data_021b0460.launcher.stackTop                    = 0x7BF9DD5B;
    data_021b0460.launcher.joinQueue.head = data_021b0460.launcher.joinQueue.tail = 0;
    data_021b0460.info.isNeedRescheduling                                         = 0;
    data_021b0460.info.irqDepth                                                   = 0;
    *(OSThreadInfo **) 0x027FFFA0                                                 = &data_021b0460.info;
    func_02050530(0);
    func_020500ac(&data_021b0460.idle, func_02050558, 0, data_021b0460.idleStack + 200 / 4, 200, 31);
    data_021b0460.idle.priority = 32;
    data_021b0460.idle.state    = 1;
}
