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
extern OSThreadState OSi_SystemCallbackInSwitchThread;
extern u8 SDK_AUTOLOAD_DTCM_START[];
extern char SDK_IRQ_STACKSIZE[];
extern char SDK_SYS_STACKSIZE[];
void OS_SetSwitchThreadCallback(void *);
void OS_CreateThread(OSThread *, void (*)(void *), void *, void *, u32, u32);
void OSi_IdleThreadProc(void *);
void OS_InitThread(void) {
    void *stackLo;
    if (OSi_SystemCallbackInSwitchThread.isInit) {
        return;
    }
    OSi_SystemCallbackInSwitchThread.isInit               = 1;
    OSi_SystemCallbackInSwitchThread.currentPtr           = &OSi_SystemCallbackInSwitchThread.info.current;
    OSi_SystemCallbackInSwitchThread.launcher.priority    = 0x10;
    OSi_SystemCallbackInSwitchThread.launcher.id          = 0;
    OSi_SystemCallbackInSwitchThread.launcher.state       = 1;
    OSi_SystemCallbackInSwitchThread.launcher.next        = 0;
    OSi_SystemCallbackInSwitchThread.launcher.profiler    = 0;
    OSi_SystemCallbackInSwitchThread.info.list            = &OSi_SystemCallbackInSwitchThread.launcher;
    OSi_SystemCallbackInSwitchThread.info.current         = &OSi_SystemCallbackInSwitchThread.launcher;
    stackLo                                               = (s32) SDK_SYS_STACKSIZE <= 0
                                                                ? (void *) (0x027E00A0 - (s32) SDK_SYS_STACKSIZE)
                                                                : (void *) ((u32) SDK_AUTOLOAD_DTCM_START + 0x3F80 - (s32) SDK_IRQ_STACKSIZE - (s32) SDK_SYS_STACKSIZE);
    OSi_SystemCallbackInSwitchThread.launcher.stackBottom = (u32) SDK_AUTOLOAD_DTCM_START + 0x3F80 - (s32) SDK_IRQ_STACKSIZE;
    OSi_SystemCallbackInSwitchThread.launcher.stackTop    = (u32) stackLo;
    OSi_SystemCallbackInSwitchThread.launcher.stackWarningOffset                   = 0;
    *(u32 *) (OSi_SystemCallbackInSwitchThread.launcher.stackBottom - sizeof(u32)) = 0xFDDB597D;
    *(u32 *) OSi_SystemCallbackInSwitchThread.launcher.stackTop                    = 0x7BF9DD5B;
    OSi_SystemCallbackInSwitchThread.launcher.joinQueue.head = OSi_SystemCallbackInSwitchThread.launcher.joinQueue.tail = 0;
    OSi_SystemCallbackInSwitchThread.info.isNeedRescheduling                                                            = 0;
    OSi_SystemCallbackInSwitchThread.info.irqDepth                                                                      = 0;
    *(OSThreadInfo **) 0x027FFFA0 = &OSi_SystemCallbackInSwitchThread.info;
    OS_SetSwitchThreadCallback(0);
    OS_CreateThread(&OSi_SystemCallbackInSwitchThread.idle, OSi_IdleThreadProc, 0,
                    OSi_SystemCallbackInSwitchThread.idleStack + 200 / 4, 200, 31);
    OSi_SystemCallbackInSwitchThread.idle.priority = 32;
    OSi_SystemCallbackInSwitchThread.idle.state    = 1;
}
