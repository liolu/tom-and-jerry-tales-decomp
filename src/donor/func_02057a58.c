/* compiler: 2.0/sp1p5  */
/* CARDi_RequestStreamCommand from projets/heroes-of-mana/src/auto/CARDi_RequestStreamCommand.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
typedef volatile u32 vu32;
typedef volatile s32 vs32;
typedef struct CardCommand {
    u32 state;
} CardCommand;
typedef struct CardCommon CardCommon;
typedef void (*CardTask)(CardCommon *common);
typedef void (*CardCallback)(void *arg);
typedef struct CardCommon {
    CardCommand *cmd;
    u32 unk_004;
    vs32 unk_008;
    vs32 unk_00c;
    void *unk_010[2];
    u32 unk_018;
    void *src;
    void *dst;
    u32 size;
    u32 unk_028;
    u32 command;
    u32 commandArg;
    u32 mode;
    CardCallback callback;
    void *callbackArg;
    CardTask task;
    u8 unk_044[0x104 - 0x44];
    void *thread;
    u32 unk_108;
    u32 unk_10c[2];
    vu32 flags;
} CardCommon;
typedef struct OSiThreadInfo {
    void *next;
    void *entryPoint;
} OSiThreadInfo;
extern CardCommon cardi_common;
extern OSiThreadInfo OSi_ThreadInfo;
extern M2C_UNK OSi_ReferSymbol(s32);
extern s32 OS_DisableInterrupts();
extern M2C_UNK OS_RestoreInterrupts(s32);
extern void OS_SleepThread(s32 arg0);
extern void CARDi_SetTask(CardTask task);
extern void func_02057880(CardCommon *common);
s32 func_02057a58(void *src, void *dst, u32 size, CardCallback callback, void *callbackArg, s32 isAsync, u32 command,
                  u32 commandArg, u32 mode) {
    void *common = &cardi_common;
    s32 irqFlags;

    OSi_ReferSymbol(0x2000B80);
    irqFlags = OS_DisableInterrupts();
    while (((CardCommon *) common)->flags & 4) {
        OS_SleepThread((s32) & ((CardCommon *) common)->unk_10c);
    }
    ((CardCommon *) common)->flags |= 4;
    ((CardCommon *) common)->callback    = callback;
    ((CardCommon *) common)->callbackArg = callbackArg;
    OS_RestoreInterrupts(irqFlags);
    ((CardCommon *) common)->src        = src;
    ((CardCommon *) common)->dst        = dst;
    ((CardCommon *) common)->size       = size;
    ((CardCommon *) common)->command    = command;
    ((CardCommon *) common)->commandArg = commandArg;
    ((CardCommon *) common)->mode       = mode;
    if (isAsync) {
        CARDi_SetTask(func_02057880);
        return 1;
    }
    cardi_common.thread = OSi_ThreadInfo.entryPoint;
    func_02057880(common);
    return ((CardCommon *) common)->cmd->state == 0;
}
