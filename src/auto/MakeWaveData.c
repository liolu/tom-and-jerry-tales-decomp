/* compiler: 2.0/sp1p5 */
/* MakeWaveData from https://github.com/RushRE/SonicRushAdventure-Decomp lib/NitroSystem/src/snd/sndarc_stream.c, preprocessed
 * with its headers */
typedef unsigned char u8;
typedef unsigned short int u16;
typedef unsigned long u32;
typedef signed char s8;
typedef signed short int s16;
typedef signed long s32;
typedef unsigned long long int u64;
typedef signed long long int s64;
typedef volatile u8 vu8;
typedef volatile u16 vu16;
typedef volatile u32 vu32;
typedef volatile u64 vu64;
typedef volatile s8 vs8;
typedef volatile s16 vs16;
typedef volatile s32 vs32;
typedef volatile s64 vs64;
typedef float f32;
typedef volatile f32 vf32;
typedef u8 REGType8;
typedef u16 REGType16;
typedef u32 REGType32;
typedef u64 REGType64;
typedef vu8 REGType8v;
typedef vu16 REGType16v;
typedef vu32 REGType32v;
typedef vu64 REGType64v;
typedef int BOOL;
typedef enum {
    OS_PROCMODE_USER  = 16,
    OS_PROCMODE_FIQ   = 17,
    OS_PROCMODE_IRQ   = 18,
    OS_PROCMODE_SVC   = 19,
    OS_PROCMODE_ABORT = 23,
    OS_PROCMODE_UNDEF = 27,
    OS_PROCMODE_SYS   = 31
} OSProcMode;
typedef enum {
    OS_INTRMODE_DISABLE_IRQ = 0x80,
    OS_INTRMODE_DISABLE_FIQ = 0x40,
    OS_INTRMODE_ENABLE      = 0
} OSIntrMode;
typedef enum {
    OS_INTRMODE_IRQ_DISABLE = 0x80,
    OS_INTRMODE_IRQ_ENABLE  = 0
} OSIntrMode_Irq;
extern u32 SDK_AUTOLOAD_DTCM_START[];
extern void SDK_SECTION_ARENA_EX_START(void);
void OS_EnableITCM(void);
void OS_DisableITCM(void);
void OS_SetITCMParam(u32 param);
u32 OS_GetITCMParam(void);
void OS_EnableDTCM(void);
void OS_DisableDTCM(void);
void OS_SetDTCMParam(u32 param);
u32 OS_GetDTCMParam(void);
void OS_SetDTCMAddress(u32 address);
u32 OS_GetDTCMAddress(void);
static inline u32 OS_GetITCMAddress(void) {
    return (u32) 0x01FF8000;
}
extern void OS_Halt(void);
OSIntrMode OS_EnableInterrupts(void);
OSIntrMode OS_DisableInterrupts(void);
OSIntrMode OS_RestoreInterrupts(OSIntrMode state);
OSIntrMode OS_DisableInterrupts_IrqAndFiq(void);
OSIntrMode OS_RestoreInterrupts_IrqAndFiq(OSIntrMode state);
OSIntrMode_Irq OS_GetCpsrIrq(void);
OSProcMode OS_GetProcMode(void);
void OS_SpinWait(u32 cycles);
void OS_WaitVBlankIntr(void);
typedef struct CPContext {
    u64 div_numer;
    u64 div_denom;
    u64 sqrt;
    u16 div_mode;
    u16 sqrt_mode;
} CPContext;
void CP_SaveContext(CPContext *context);
void CPi_RestoreContext(const CPContext *context);
typedef struct OSContext {
    u32 cpsr;
    u32 r[13];
    u32 sp;
    u32 lr;
    u32 pc_plus4;
    u32 sp_svc;
    CPContext cp_context;
} OSContext;
void OS_InitContext(OSContext *context, u32 newpc, u32 newsp);
BOOL OS_SaveContext(OSContext *context);
void OS_LoadContext(OSContext *context);
typedef struct OSiAlarm OSAlarm;
typedef struct _OSThread OSThread;
typedef struct _OSThreadQueue OSThreadQueue;
typedef struct _OSThreadLink OSThreadLink;
typedef struct _OSMutexQueue OSMutexQueue;
typedef struct _OSMutexLink OSMutexLink;
typedef struct OSMutex OSMutex;
struct _OSThreadQueue {
    OSThread *head;
    OSThread *tail;
};
struct _OSThreadLink {
    OSThread *prev;
    OSThread *next;
};
struct _OSMutexQueue {
    OSMutex *head;
    OSMutex *tail;
};
struct _OSMutexLink {
    OSMutex *next;
    OSMutex *prev;
};
typedef struct OSThreadInfo {
    u16 isNeedRescheduling;
    u16 irqDepth;
    OSThread *current;
    OSThread *list;
    void *switchCallback;
} OSThreadInfo;
typedef enum {
    OS_THREAD_STATE_WAITING    = 0,
    OS_THREAD_STATE_READY      = 1,
    OS_THREAD_STATE_TERMINATED = 2
} OSThreadState;
typedef void (*OSSwitchThreadCallback)(OSThread *from, OSThread *to);
typedef void (*OSThreadDestructor)(void *);
struct _OSThread {
    OSContext context;
    OSThreadState state;
    OSThread *next;
    u32 id;
    u32 priority;
    void *profiler;
    OSThreadQueue *queue;
    OSThreadLink link;
    OSMutex *mutex;
    OSMutexQueue mutexQueue;
    u32 stackTop;
    u32 stackBottom;
    u32 stackWarningOffset;
    OSThreadQueue joinQueue;
    void *specific[3];
    OSAlarm *alarmForSleep;
    OSThreadDestructor destructor;
    void *userParameter;
    u32 systemErrno;
};
extern OSThreadInfo OSi_ThreadInfo;
static inline OSThreadInfo *OS_GetThreadInfo(void) {
    return &OSi_ThreadInfo;
}
static inline BOOL OS_IsThreadRunnable(const OSThread *thread) {
    return thread->state == OS_THREAD_STATE_READY;
}
static inline void OS_InitThreadQueue(OSThreadQueue *queue) {
    queue->head = queue->tail = ((void *) 0);
}
static inline OSThread *OS_GetCurrentThread(void) {
    return OS_GetThreadInfo()->current;
}
static inline void OS_SetCurrentThread(OSThread *thread) {
    OS_GetThreadInfo()->current = thread;
}
typedef volatile struct OSLockWord {
    u32 lockFlag;
    u16 ownerID;
    u16 extension;
} OSLockWord;
typedef struct {
    u8 bootCheckInfo[0x20];
    u32 resetParameter;
    u8 padding5[0x8];
    u32 romBaseOffset;
    u8 cartridgeModuleInfo[12];
    u32 vblankCount;
    u8 wmBootBuf[0x40];
    u8 nvramUserInfo[0x100];
    u8 isd_reserved1[0x20];
    u8 arenaInfo[0x48];
    u8 real_time_clock[8];
    u32 dmaClearBuf[4];
    u8 rom_header[0x160];
    u8 isd_reserved2[32];
    u32 pxiSignalParam[2];
    u32 pxiHandleChecker[2];
    u32 mic_last_address;
    u16 mic_sampling_data;
    u16 wm_callback_control;
    u16 wm_rssi_pool;
    u8 padding3[2];
    u32 component_param;
    OSThreadInfo *threadinfo_mainp;
    OSThreadInfo *threadinfo_subp;
    u16 button_XY;
    u8 touch_panel[4];
    u16 autoloadSync;
    u32 lockIDFlag_mainp[2];
    u32 lockIDFlag_subp[2];
    struct OSLockWord lock_VRAM_C;
    struct OSLockWord lock_VRAM_D;
    struct OSLockWord lock_WRAM_BLOCK0;
    struct OSLockWord lock_WRAM_BLOCK1;
    struct OSLockWord lock_CARD;
    struct OSLockWord lock_CARTRIDGE;
    struct OSLockWord lock_INIT;
    u16 mmem_checker_mainp;
    u16 mmem_checker_subp;
    u8 padding4[2];
    u16 command_area;
} OSSystemWork;
OSMutex *OSi_RemoveMutexLinkFromQueue(OSMutexQueue *queue);
void OS_InitThread(void);
BOOL OS_IsThreadAvailable(void);
void OS_CreateThread(OSThread *thread, void (*func)(void *), void *arg, void *stack, u32 stackSize, u32 prio);
void OS_ExitThread(void);
void OS_DestroyThread(OSThread *thread);
void OS_JoinThread(OSThread *thread);
BOOL OS_IsThreadTerminated(const OSThread *thread);
void OS_SleepThread(OSThreadQueue *queue);
void OS_WakeupThread(OSThreadQueue *queue);
void OS_WakeupThreadDirect(OSThread *thread);
OSThread *OS_SelectThread(void);
void OS_RescheduleThread(void);
void OS_YieldThread(void);
BOOL OS_SetThreadPriority(OSThread *thread, u32 prio);
u32 OS_GetThreadPriority(const OSThread *thread);
void OS_Sleep(u32 msec);
OSSwitchThreadCallback OS_SetSwitchThreadCallback(OSSwitchThreadCallback callback);
u32 OS_DisableScheduler(void);
u32 OS_EnableScheduler(void);
void OS_SetThreadDestructor(OSThread *thread, OSThreadDestructor dtor);
struct OSMutex {
    OSThreadQueue queue;
    OSThread *thread;
    s32 count;
    OSMutexLink link;
};
void OS_InitMutex(OSMutex *mutex);
BOOL OS_TryLockMutex(OSMutex *mutex);
void func_02050964(OSMutex *mutex);
void OSi_UnlockAllMutex(OSThread *thread);
void OS_LockMutex(OSMutex *mtx);
typedef u32 OSIrqMask;
typedef void (*OSIrqFunction)(void);
typedef struct {
    void (*func)(void *);
    u32 enable;
    void *arg;
} OSIrqCallbackInfo;
extern OSIrqFunction OS_IRQTable[];
extern OSIrqCallbackInfo OSi_IrqCallbackInfo[(7 + 1)];
static inline vu32 OS_GetVBlankCount(void) {
    return *(vu32 *) (0x02000000 + 0x007ffc3c);
}
static inline void OSi_SetVBlankCount(u32 count) {
    *(u32 *) (0x02000000 + 0x007ffc3c) = count;
}
static inline void OS_ClearIrqCheckFlag(OSIrqMask intr) {
    *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38) &= (u32) ~intr;
}
static inline u32 OS_GetIrqCheckFlag(void) {
    return *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38);
}
static inline void OS_SetIrqCheckFlag(OSIrqMask intr) {
    *(vu32 *) ((((u32) SDK_AUTOLOAD_DTCM_START) + 0x00003fc0) + 0x38) |= (u32) intr;
}
static inline BOOL OS_EnableIrq(void) {
    u16 prep                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = (1UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_DisableIrq(void) {
    u16 prep                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = (0UL << 0);
    return (BOOL) prep;
}
static inline BOOL OS_RestoreIrq(BOOL enable) {
    BOOL ime                               = (*(REGType16v *) (0x04000000 + 0x208));
    (*(REGType16v *) (0x04000000 + 0x208)) = enable;
    return ime;
}
static inline OSIrqMask OS_GetIrqMask(void) {
    return (*(REGType32v *) (0x04000000 + 0x210));
}
static inline OSIrqMask OS_GetRequestIrqMask(void) {
    return (*(REGType32v *) (0x04000000 + 0x214));
}
void OS_InitIrqTable(void);
void OS_SetIrqFunction(OSIrqMask intrBit, OSIrqFunction function);
OSIrqFunction OS_GetIrqFunction(OSIrqMask intrBit);
void OSi_EnterDmaCallback(u32 dmaNo, void (*callback)(void *arg), void *arg);
void OSi_EnterTimerCallback(u32 timerNo, void (*callback)(void *), void *arg);
OSIrqMask OS_SetIrqMask(OSIrqMask mask);
OSIrqMask OS_EnableIrqMask(OSIrqMask mask);
OSIrqMask OS_DisableIrqMask(OSIrqMask mask);
OSIrqMask OS_ResetRequestIrqMask(OSIrqMask mask);
void OS_SetIrqStackChecker(void);
typedef s32 (*MIi_InitReadStreamCallback)(const u8 *devicep, void *ramp, const void *paramp);
typedef s32 (*MIi_TerminateReadStreamCallback)(const u8 *devicep);
typedef u8 (*MIi_ReadByteStreamCallback)(const u8 *devicep);
typedef u16 (*MIi_ReadShortStreamCallback)(const u8 *devicep);
typedef u32 (*MIi_ReadWordStreamCallback)(const u8 *devicep);
typedef struct {
    MIi_InitReadStreamCallback initStream;
    MIi_TerminateReadStreamCallback terminateStream;
    MIi_ReadByteStreamCallback readByteStream;
    MIi_ReadShortStreamCallback readShortStream;
    MIi_ReadWordStreamCallback readWordStream;
} MIReadStreamCallbacks;
MIReadStreamCallbacks *MI_GetReadStreamFromMemoryCallbacks(void);
typedef enum {
    MI_COMPRESSION_LZ           = 0x10,
    MI_COMPRESSION_HUFFMAN      = 0x20,
    MI_COMPRESSION_RL           = 0x30,
    MI_COMPRESSION_DIFF         = 0x80,
    MI_COMPRESSION_TYPE_MASK    = 0xF0,
    MI_COMPRESSION_TYPE_EX_MASK = 0xFF
} MICompressionType;
typedef struct {
    u32 compParam : 4;
    u32 compType : 4;
    u32 destSize : 24;
} MICompressionHeader;
typedef struct {
    u16 srcNum;
    u16 srcBitNum : 8;
    u16 destBitNum : 8;
    u32 destOffset : 31;
    u32 destOffset0_on : 1;
} MIUnpackBitsParam;
void MI_UncompressLZ8(const void *srcp, void *destp);
void MI_UncompressLZ16(const void *srcp, void *destp);
void MI_UncompressHuffman(const void *srcp, void *destp);
void MI_UncompressRL8(const void *srcp, void *destp);
void MI_UncompressRL16(const void *srcp, void *destp);
void MI_UnfilterDiff8(const void *srcp, void *destp);
void MI_UnfilterDiff16(const void *srcp, void *destp);
void MIi_UncompressBackward(void *bottom);
static inline u32 MI_GetUncompressedSize(const void *srcp) {
    return (*(u32 *) srcp >> 8);
}
static inline MICompressionType MI_GetCompressionType(const void *srcp) {
    return (MICompressionType) (*(u32 *) srcp & MI_COMPRESSION_TYPE_MASK);
}
void SVC_WaitByLoop(s32 count);
void SVC_CpuSet(const void *srcp, void *destp, u32 dmaCntData);
void SVC_CpuSetFast(const void *srcp, void *destp, u32 dmaCntData);
void SVC_UnpackBits(const void *srcp, void *destp, const MIUnpackBitsParam *paramp);
void SVC_UncompressLZ8(const void *srcp, void *destp);
void SVC_UncompressRL8(const void *srcp, void *destp);
void OS_InitLock(void);
s32 OS_LockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void));
s32 OS_UnlockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void));
s32 OS_UnlockCartridge(u16 lockID);
s32 OS_TryLockByWord(u16 lockID, OSLockWord *lockp, void (*ctrlFuncp)(void));
s32 OS_LockCartridge(u16 lockID);
s32 OS_TryLockCartridge(u16 lockID);
s32 OS_LockCard(u16 lockID);
s32 OS_UnlockCard(u16 lockID);
s32 OS_TryLockCard(u16 lockID);
u16 OS_ReadOwnerOfLockWord(OSLockWord *lockp);
s32 OS_GetLockID(void);
void OS_ReleaseLockID(register u16 lockID);
s32 OS_UnLockCartridge(u16 lockID);
typedef char *va_list;
typedef unsigned long size_t;
typedef int ptrdiff_t;
typedef unsigned short wchar_t;
char *STD_CopyString(char *destp, const char *srcp);
int STD_CopyLStringZeroFill(char *destp, const char *srcp, int n);
int STD_CopyLString(char *destp, const char *srcp, int siz);
char *STD_SearchString(const char *srcp, const char *str);
int STD_GetStringLength(const char *str);
char *STD_ConcatenateString(char *str1, const char *str2);
int STD_CompareString(const char *str1, const char *str2);
int STD_CompareNString(const char *str1, const char *str2, int len);
int STD_CompareLString(const char *str1, const char *str2);
int STD_TSScanf(const char *src, const char *fmt, ...);
int STD_TVSScanf(const char *src, const char *fmt, va_list vlist);
int STD_TSPrintf(char *dst, const char *fmt, ...);
int STD_TVSPrintf(char *dst, const char *fmt, va_list vlist);
int STD_TSNPrintf(char *dst, size_t len, const char *fmt, ...);
int STD_TVSNPrintf(char *dst, size_t len, const char *fmt, va_list vlist);
int OS_SPrintf(char *dst, const char *fmt, ...);
int OS_VSPrintf(char *dst, const char *fmt, va_list vlist);
int OS_SNPrintf(char *dst, size_t len, const char *fmt, ...);
int OS_VSNPrintf(char *dst, size_t len, const char *fmt, va_list vlist);
typedef enum {
    OS_ARENA_MAIN         = 0,
    OS_ARENA_MAIN_SUBPRIV = 1,
    OS_ARENA_MAINEX       = 2,
    OS_ARENA_ITCM         = 3,
    OS_ARENA_DTCM         = 4,
    OS_ARENA_SHARED       = 5,
    OS_ARENA_WRAM_MAIN    = 6,
    OS_ARENA_WRAM_SUB     = 7,
    OS_ARENA_WRAM_SUBPRIV = 8,
    OS_ARENA_MAX          = 9
} OSArenaId;
typedef struct {
    void *lo[OS_ARENA_MAX];
    void *hi[OS_ARENA_MAX];
    u16 initialized;
    u8 padding[2];
} OSArenaInfo;
void OS_InitArena(void);
void OS_InitArenaEx(void);
void *OS_GetArenaHi(OSArenaId id);
void *OS_GetArenaLo(OSArenaId id);
void *OS_GetInitArenaHi(OSArenaId id);
void *OS_GetInitArenaLo(OSArenaId id);
void OS_SetArenaHi(OSArenaId id, void *newHi);
void OS_SetArenaLo(OSArenaId id, void *newLo);
void *OS_AllocFromArenaLo(OSArenaId id, u32 size, u32 align);
void *OS_AllocFromArenaHi(OSArenaId id, u32 size, u32 align);
static inline void OS_InitArenaHi(OSArenaId id) {
    OS_SetArenaHi(id, OS_GetInitArenaHi(id));
}
static inline void OS_InitArenaLo(OSArenaId id) {
    OS_SetArenaLo(id, OS_GetInitArenaLo(id));
}
static inline void OS_InitArenaHiAndLo(OSArenaId id) {
    (void) OS_InitArenaHi(id);
    (void) OS_InitArenaLo(id);
}
void OSi_ReferSymbol(void *symbol);
typedef int OSHeapHandle;
typedef void (*OSAllocVisitor)(void *obj, u32 size);
extern void *OS_InitAlloc(OSArenaId id, void *arenaStart, void *arenaEnd, int maxHeaps);
extern void OS_ClearAlloc(OSArenaId id);
extern OSHeapHandle OS_CreateHeap(OSArenaId id, void *start, void *end);
extern void OS_DestroyHeap(OSArenaId id, OSHeapHandle heap);
extern void OS_AddToHeap(OSArenaId id, OSHeapHandle heap, void *start, void *end);
extern OSHeapHandle OS_SetCurrentHeap(OSArenaId id, OSHeapHandle heap);
extern void *OS_AllocFromHeap(OSArenaId id, OSHeapHandle heap, u32 size);
extern void *OS_AllocFixed(OSArenaId id, void **rstart, void **rend);
extern void OS_FreeToHeap(OSArenaId id, OSHeapHandle heap, void *ptr);
extern void OS_FreeAllToHeap(OSArenaId id, OSHeapHandle heap);
extern s32 OS_CheckHeap(OSArenaId id, OSHeapHandle heap);
extern void OS_DumpHeap(OSArenaId id, OSHeapHandle heap);
extern u32 OS_ReferentSize(OSArenaId id, void *ptr);
extern void OS_VisitAllocated(OSArenaId id, OSAllocVisitor visitor);
extern u32 OSi_GetTotalAllocSize(OSArenaId id, OSHeapHandle heap, BOOL isHeadInclude);
extern u32 OS_GetTotalFreeSize(OSArenaId id, OSHeapHandle heap);
extern u32 OS_GetMaxFreeSize(OSArenaId id, OSHeapHandle heap);
extern void OS_ClearHeap(OSArenaId id, OSHeapHandle heap, void *start, void *end);
static inline u32 OS_GetTotalAllocSize(OSArenaId id, OSHeapHandle heap) {
    return OSi_GetTotalAllocSize(id, heap, 0);
}
static inline u32 OS_GetTotalOccupiedSize(OSArenaId id, OSHeapHandle heap) {
    return OSi_GetTotalAllocSize(id, heap, 1);
}
static inline void *OS_AllocFromMain(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_MAIN, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToMain(void *ptr) {
    OS_FreeToHeap(OS_ARENA_MAIN, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToMain(void) {
    OS_FreeAllToHeap(OS_ARENA_MAIN, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromSubPriv(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_MAIN_SUBPRIV, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToSubPriv(void *ptr) {
    OS_FreeToHeap(OS_ARENA_MAIN_SUBPRIV, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToSubPriv(void) {
    OS_FreeAllToHeap(OS_ARENA_MAIN_SUBPRIV, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromMainEx(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_MAINEX, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToMainEx(void *ptr) {
    OS_FreeToHeap(OS_ARENA_MAINEX, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToMainEx(void) {
    OS_FreeAllToHeap(OS_ARENA_MAINEX, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromITCM(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_ITCM, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToITCM(void *ptr) {
    OS_FreeToHeap(OS_ARENA_ITCM, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToITCM(void) {
    OS_FreeAllToHeap(OS_ARENA_ITCM, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromDTCM(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_DTCM, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToDTCM(void *ptr) {
    OS_FreeToHeap(OS_ARENA_DTCM, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToDTCM(void) {
    OS_FreeAllToHeap(OS_ARENA_DTCM, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromShared(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_SHARED, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToShared(void *ptr) {
    OS_FreeToHeap(OS_ARENA_SHARED, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToShared(void) {
    OS_FreeAllToHeap(OS_ARENA_SHARED, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromWramMain(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_WRAM_MAIN, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToWramMain(void *ptr) {
    OS_FreeToHeap(OS_ARENA_WRAM_MAIN, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToWramMain(void) {
    OS_FreeAllToHeap(OS_ARENA_WRAM_MAIN, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromWramSub(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_WRAM_SUB, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToWramSub(void *ptr) {
    OS_FreeToHeap(OS_ARENA_WRAM_SUB, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToWramSub(void) {
    OS_FreeAllToHeap(OS_ARENA_WRAM_SUB, ((OSHeapHandle) -1));
}
static inline void *OS_AllocFromSubPrivWram(u32 size) {
    return OS_AllocFromHeap(OS_ARENA_WRAM_SUBPRIV, ((OSHeapHandle) -1), size);
}
static inline void OS_FreeToSubPrivWram(void *ptr) {
    OS_FreeToHeap(OS_ARENA_WRAM_SUBPRIV, ((OSHeapHandle) -1), ptr);
}
static inline void OS_FreeAllToSubPrivWram(void) {
    OS_FreeAllToHeap(OS_ARENA_WRAM_SUBPRIV, ((OSHeapHandle) -1));
}
typedef enum {
    PXI_PROC_ARM9 = 0,
    PXI_PROC_ARM7 = 1
} PXIProc;
typedef enum {
    PXI_FIFO_TAG_EX = 0,
    PXI_FIFO_TAG_USER_0,
    PXI_FIFO_TAG_USER_1,
    PXI_FIFO_TAG_SYSTEM,
    PXI_FIFO_TAG_NVRAM,
    PXI_FIFO_TAG_RTC,
    PXI_FIFO_TAG_TOUCHPANEL,
    PXI_FIFO_TAG_SOUND,
    PXI_FIFO_TAG_PM,
    PXI_FIFO_TAG_MIC,
    PXI_FIFO_TAG_WM,
    PXI_FIFO_TAG_FS,
    PXI_FIFO_TAG_OS,
    PXI_FIFO_TAG_CTRDG,
    PXI_FIFO_TAG_CARD,
    PXI_FIFO_TAG_WVR,
    PXI_FIFO_TAG_CTRDG_Ex,
    PXI_FIFO_TAG_CTRDG_PHI,
    PXI_MAX_FIFO_TAG = 32
} PXIFifoTag;
typedef enum {
    PXI_FIFO_SUCCESS           = 0,
    PXI_FIFO_FAIL_SEND_ERR     = -1,
    PXI_FIFO_FAIL_SEND_FULL    = -2,
    PXI_FIFO_FAIL_RECV_ERR     = -3,
    PXI_FIFO_FAIL_RECV_EMPTY   = -4,
    PXI_FIFO_NO_CALLBACK_ENTRY = -5
} PXIFifoStatus;
typedef void (*PXIFifoCallback)(PXIFifoTag tag, u32 data, BOOL err);
typedef union {
    struct {
        u32 tag : 5;
        u32 err : 1;
        u32 data : 26;
    } e;
    u32 raw;
} PXIFifoMessage;
void PXI_InitFifo(void);
void PXI_SetFifoRecvCallback(int fifotag, PXIFifoCallback callback);
BOOL PXI_IsCallbackReady(int fifotag, PXIProc proc);
int PXI_SendWordByFifo(int fifotag, u32 data, BOOL err);
void PXIi_HandlerRecvFifoNotEmpty(void);
void OS_InitReset(void);
BOOL OS_IsResetOccurred(void);
void MicCommonCallback(PXIFifoTag tag, u32 data, BOOL err);
void OSi_SendToPxi(u16 data);
void OS_ResetSystem(u32 parameter);
static inline u32 OS_GetResetParameter(void) {
    return *(u32 *) (0x02000000 + 0x007ffc20);
}
void OS_Terminate(void);
void OS_IrqDummy(void);
void OS_IrqHandler(void);
void OS_IrqHandler_ThreadSwitch(void);
typedef enum {
    OS_TIMER_PRESCALER_1    = (0UL << 0),
    OS_TIMER_PRESCALER_64   = (1UL << 0),
    OS_TIMER_PRESCALER_256  = (2UL << 0),
    OS_TIMER_PRESCALER_1024 = (3UL << 0)
} OSTimerPrescaler;
typedef enum {
    OS_TIMER_0 = 0,
    OS_TIMER_1 = 1,
    OS_TIMER_2 = 2,
    OS_TIMER_3 = 3
} OSTimer;
static inline void OS_SetTimerCount(OSTimer id, u16 count) {
    *((REGType16 *) ((u32) & (*(REGType16v *) (0x04000000 + 0x100)) + id * 4)) = count;
}
static inline void OS_SetTimerControl(OSTimer id, u16 control) {
    *((REGType16 *) ((u32) & (*(REGType16v *) (0x04000000 + 0x102)) + id * 4)) = control;
}
void OSi_SetTimerReserved(s32 timerNum);
typedef u64 OSTick;
extern vu64 OSi_TickCounter;
void OS_InitTick(void);
BOOL OS_IsTickAvailable(void);
OSTick OS_GetTick(void);
u16 OS_GetTickLo(void);
typedef void *OSMessage;
typedef struct OSMessageQueue {
    OSThreadQueue queueSend;
    OSThreadQueue queueReceive;
    OSMessage *msgArray;
    s32 msgCount;
    s32 firstIndex;
    s32 usedCount;
} OSMessageQueue;
void OS_InitMessageQueue(OSMessageQueue *mq, OSMessage *msgArray, s32 msgCount);
BOOL OS_SendMessage(OSMessageQueue *mq, OSMessage msg, s32 flags);
BOOL OS_ReceiveMessage(OSMessageQueue *mq, OSMessage *msg, s32 flags);
BOOL OS_JamMessage(OSMessageQueue *mq, OSMessage msg, s32 flags);
BOOL OS_ReadMessage(OSMessageQueue *mq, OSMessage *msg, s32 flags);
void OS_Init(void);
typedef void (*OSExceptionHandler)(u32, void *);
void OS_InitException(void);
typedef void (*OSVAlarmHandler)(void *);
typedef struct OSiVAlarm OSVAlarm;
struct OSiVAlarm {
    OSVAlarmHandler handler;
    void *arg;
    u32 tag;
    u32 frame;
    s16 fire;
    s16 delay;
    OSVAlarm *prev;
    OSVAlarm *next;
    BOOL period;
    BOOL finish;
    BOOL canceled;
};
void OS_InitVAlarm(void);
BOOL OS_IsVAlarmAvailable(void);
void OS_CreateVAlarm(OSVAlarm *alarm);
void OS_SetVAlarm(OSVAlarm *alarm, s16 count, s16 delay, OSVAlarmHandler handler, void *arg);
void OS_SetPeriodicVAlarm(OSVAlarm *alarm, s16 count, s16 delay, OSVAlarmHandler handler, void *arg);
void OS_SetVAlarmTag(OSVAlarm *alarm, u32 tag);
void OS_CancelVAlarm(OSVAlarm *alarm);
void OS_CancelVAlarms(u32 tag);
BOOL OS_IsRunOnEmulator(void);
u32 OS_GetConsoleType(void);
typedef void (*OSAlarmHandler)(void *);
struct OSiAlarm {
    OSAlarmHandler handler;
    void *arg;
    u32 tag;
    OSTick fire;
    OSAlarm *prev;
    OSAlarm *next;
    OSTick period;
    OSTick start;
};
void OS_InitAlarm(void);
BOOL OS_IsAlarmAvailable(void);
void OS_CreateAlarm(OSAlarm *alarm);
void OS_SetAlarm(OSAlarm *alarm, OSTick tick, OSAlarmHandler handler, void *arg);
void OS_SetPeriodicAlarm(OSAlarm *alarm, OSTick start, OSTick period, OSAlarmHandler handler, void *arg);
void OS_CancelAlarm(OSAlarm *alarm);
struct OSiAlarmQueue {
    OSAlarm *head;
    OSAlarm *tail;
};
struct OSiAlarmQueue *OSi_GetAlarmQueue(void);
void OSi_SetTimer(OSAlarm *alarm);
void OS_InitAlarm(void);
void OSi_InsertAlarm(OSAlarm *alarm, OSTick fire);
typedef struct NVRAMConfigDate {
    u8 month;
    u8 day;
} NVRAMConfigDate;
typedef struct NVRAMConfigNickname {
    u16 str[10];
    u8 length;
    u8 rsv;
} NVRAMConfigNickname;
typedef struct NVRAMConfigComment {
    u16 str[26];
    u8 length;
    u8 rsv;
} NVRAMConfigComment;
typedef struct NVRAMConfigOwnerInfo {
    u8 favoriteColor : 4;
    u8 rsv : 4;
    NVRAMConfigDate birthday;
    u8 pad;
    NVRAMConfigNickname nickname;
    NVRAMConfigComment comment;
} NVRAMConfigOwnerInfo;
typedef struct NVRAMConfigAlarm {
    u8 hour;
    u8 minute;
    u8 second;
    u8 pad;
    u16 enableWeek : 7;
    u16 alarmOn : 1;
    u16 rsv : 8;
} NVRAMConfigAlarm;
typedef struct NVRAMConfigTpCalibData {
    u16 raw_x1;
    u16 raw_y1;
    u8 dx1;
    u8 dy1;
    u16 raw_x2;
    u16 raw_y2;
    u8 dx2;
    u8 dy2;
} NVRAMConfigTpCalibData;
typedef struct NVRAMConfigOption {
    u16 language : 3;
    u16 agbLcd : 1;
    u16 detectPullOutCardFlag : 1;
    u16 detectPullOutCtrdgFlag : 1;
    u16 autoBootFlag : 1;
    u16 rsv : 4;
    u16 input_favouriteColour : 1;
    u16 input_tp : 1;
    u16 input_language : 1;
    u16 input_rtc : 1;
    u16 input_nickname : 1;
    u8 timeZone;
    u8 rtcClockAdjust;
    s64 rtcOffset;
} NVRAMConfigOption;
typedef struct NVRAMConfigData {
    u8 version;
    u8 pad;
    NVRAMConfigOwnerInfo owner;
    NVRAMConfigAlarm alarm;
    NVRAMConfigTpCalibData tp;
    NVRAMConfigOption option;
} NVRAMConfigData;
typedef struct NVRAMConfig {
    NVRAMConfigData ncd;
    u16 saveCount;
    u16 crc16;
} NVRAMConfig;
typedef enum OSLanguage_ {
    OS_LANGUAGE_JAPANESE = 0,
    OS_LANGUAGE_ENGLISH  = 1,
    OS_LANGUAGE_FRENCH   = 2,
    OS_LANGUAGE_GERMAN   = 3,
    OS_LANGUAGE_ITALIAN  = 4,
    OS_LANGUAGE_SPANISH  = 5,
    OS_LANGUAGE_CODE_MAX = 6
} OSLanguage;
typedef struct OSBirthday {
    u8 month;
    u8 day;
} OSBirthday;
typedef struct OSOwnerInfo {
    u8 language;
    u8 favoriteColor;
    OSBirthday birthday;
    u16 nickName[10];
    u16 nickNameLength;
    u16 comment[26];
    u16 commentLength;
} OSOwnerInfo;
void OS_GetMacAddress(u8 *macAddr);
void OS_GetOwnerInfo(OSOwnerInfo *info);
void OS_GetLowEntropyData(u32 buffer[32 / sizeof(u32)]);
void OS_WaitIrq(BOOL clear, OSIrqMask irqFlags);
void DC_InvalidateAll(void);
void DC_StoreAll(void);
void DC_FlushAll(void);
void DC_InvalidateRange(void *startAddr, u32 nBytes);
void DC_StoreRange(const void *startAddr, u32 nBytes);
void DC_FlushRange(const void *startAddr, u32 nBytes);
void DC_WaitWriteBufferEmpty(void);
void IC_InvalidateAll(void);
void IC_InvalidateRange(void *startAddr, u32 nBytes);
typedef enum {
    OSi_PR_BASE_MASK_4KB   = 0xfffff000,
    OSi_PR_BASE_MASK_8KB   = 0xffffe000,
    OSi_PR_BASE_MASK_16KB  = 0xffffc000,
    OSi_PR_BASE_MASK_32KB  = 0xffff8000,
    OSi_PR_BASE_MASK_64KB  = 0xffff0000,
    OSi_PR_BASE_MASK_128KB = 0xfffe0000,
    OSi_PR_BASE_MASK_256KB = 0xfffc0000,
    OSi_PR_BASE_MASK_512KB = 0xfff80000,
    OSi_PR_BASE_MASK_1MB   = 0xfff00000,
    OSi_PR_BASE_MASK_2MB   = 0xffe00000,
    OSi_PR_BASE_MASK_4MB   = 0xffc00000,
    OSi_PR_BASE_MASK_8MB   = 0xff800000,
    OSi_PR_BASE_MASK_16MB  = 0xff000000,
    OSi_PR_BASE_MASK_32MB  = 0xfe000000,
    OSi_PR_BASE_MASK_64MB  = 0xfc000000,
    OSi_PR_BASE_MASK_128MB = 0xf8000000,
    OSi_PR_BASE_MASK_256MB = 0xf0000000,
    OSi_PR_BASE_MASK_512MB = 0xe0000000,
    OSi_PR_BASE_MASK_1GB   = 0xc0000000,
    OSi_PR_BASE_MASK_2GB   = 0x80000000,
    OSi_PR_BASE_MASK_4GB   = 0x00000000
} OSiProtectionRegionBaseMask;
void OS_EnableICacheForProtectionRegion(register u32 flags);
void OS_DisableICacheForProtectionRegion(register u32 flags);
u32 OS_GetICacheEnableFlagsForProtectionRegion(void);
void OS_SetIPermissionsForProtectionRegion(u32 setMask, u32 flags);
u32 OS_GetIPermissionsForProtectionRegion(void);
void OS_EnableDCacheForProtectionRegion(u32 flags);
void OS_DisableDCacheForProtectionRegion(u32 flags);
u32 OS_GetDCacheEnableFlagsForProtectionRegion(u32 flags);
void OS_SetDPermissionsForProtectionRegion(u32 setMask, u32 flags);
u32 OS_GetDPermissionsForProtectionRegion(void);
void OS_EnableWriteBufferForProtectionRegion(u32 flags);
void OS_DisableWriteBufferForProtectionRegion(u32 flags);
u32 OS_GetWriteBufferEnableFlagsForProtectionRegion(u32 flags);
void OS_SetProtectionRegion0(u32 param);
void OS_SetProtectionRegion1(u32 param);
void OS_SetProtectionRegion2(u32 param);
void OS_SetProtectionRegion3(u32 param);
void OS_SetProtectionRegion4(u32 param);
void OS_SetProtectionRegion5(u32 param);
void OS_SetProtectionRegion6(u32 param);
void OS_SetProtectionRegion7(u32 param);
u32 OS_GetProtectionRegion0(void);
u32 OS_GetProtectionRegion1(void);
u32 OS_GetProtectionRegion2(void);
u32 OS_GetProtectionRegion3(void);
u32 OS_GetProtectionRegion4(void);
u32 OS_GetProtectionRegion5(void);
u32 OS_GetProtectionRegion6(void);
u32 OS_GetProtectionRegion7(void);
static inline u32 OSi_CalcPRParam(u32 address, u32 size, OSiProtectionRegionBaseMask mask) {
    return ((address & mask) | size);
}
void OS_DisableProtectionUnit(void);
void OS_EnableProtectionUnit(void);
u32 OsCountZeroBits(u32 bitmap);
void OSi_UnlockVram(u16 bank, u16 lockId);
void OSi_InitVramExclusive(void);
typedef unsigned long size_t;
typedef int ptrdiff_t;
typedef unsigned short wchar_t;
typedef struct {
    void *prevObject;
    void *nextObject;
} NNSFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} NNSFndList;
void NNS_FndInitList(NNSFndList *list, u16 offset);
void NNS_FndAppendListObject(NNSFndList *list, void *object);
void NNS_FndPrependListObject(NNSFndList *list, void *object);
void NNS_FndInsertListObject(NNSFndList *list, void *target, void *object);
void NNS_FndRemoveListObject(NNSFndList *list, void *object);
void *NNS_FndGetNextListObject(NNSFndList *list, void *object);
void *NNS_FndGetPrevListObject(NNSFndList *list, void *object);
void *NNS_FndGetNthListObject(NNSFndList *list, u16 index);
enum {
    NNS_FND_HEAP_FILL_NOUSE,
    NNS_FND_HEAP_FILL_ALLOC,
    NNS_FND_HEAP_FILL_FREE,
    NNS_FND_HEAP_FILL_MAX
};
typedef struct NNSiFndHeapHead NNSiFndHeapHead;
struct NNSiFndHeapHead {
    u32 signature;
    NNSFndLink link;
    NNSFndList childList;
    void *heapStart;
    void *heapEnd;
    u32 attribute;
};
typedef NNSiFndHeapHead *NNSFndHeapHandle;
NNSFndHeapHandle NNS_FndFindContainHeap(const void *memBlock);
enum {
    NNS_FND_EXPHEAP_ALLOC_DIR_FRONT,
    NNS_FND_EXPHEAP_ALLOC_DIR_REAR
};
enum {
    NNS_FND_EXPHEAP_ALLOC_MODE_FIRST,
    NNS_FND_EXPHEAP_ALLOC_MODE_NEAR
};
typedef struct NNSiFndExpHeapMBlockHead NNSiFndExpHeapMBlockHead;
struct NNSiFndExpHeapMBlockHead {
    u16 signature;
    u16 attribute;
    u32 blockSize;
    NNSiFndExpHeapMBlockHead *pMBHeadPrev;
    NNSiFndExpHeapMBlockHead *pMBHeadNext;
};
typedef struct NNSiFndExpMBlockList NNSiFndExpMBlockList;
struct NNSiFndExpMBlockList {
    NNSiFndExpHeapMBlockHead *head;
    NNSiFndExpHeapMBlockHead *tail;
};
typedef struct NNSiFndExpHeapHead NNSiFndExpHeapHead;
struct NNSiFndExpHeapHead {
    NNSiFndExpMBlockList mbFreeList;
    NNSiFndExpMBlockList mbUsedList;
    u16 groupID;
    u16 feature;
};
typedef void (*NNSFndHeapVisitor)(void *memBlock, NNSFndHeapHandle heap, u32 userParam);
NNSFndHeapHandle NNS_FndCreateExpHeapEx(void *startAddress, u32 size, u16 optFlag);
void NNS_FndDestroyExpHeap(NNSFndHeapHandle heap);
void *NNS_FndAllocFromExpHeapEx(NNSFndHeapHandle heap, u32 size, int alignment);
u32 NNS_FndResizeForMBlockExpHeap(NNSFndHeapHandle heap, void *memBlock, u32 size);
void NNS_FndFreeToExpHeap(NNSFndHeapHandle heap, void *memBlock);
u32 NNS_FndGetTotalFreeSizeForExpHeap(NNSFndHeapHandle heap);
u32 NNS_FndGetAllocatableSizeForExpHeapEx(NNSFndHeapHandle heap, int alignment);
u16 NNS_FndSetAllocModeForExpHeap(NNSFndHeapHandle heap, u16 mode);
u16 NNS_FndGetAllocModeForExpHeap(NNSFndHeapHandle heap);
u16 NNS_FndSetGroupIDForExpHeap(NNSFndHeapHandle heap, u16 groupID);
u16 NNS_FndGetGroupIDForExpHeap(NNSFndHeapHandle heap);
void NNS_FndVisitAllocatedForExpHeap(NNSFndHeapHandle heap, NNSFndHeapVisitor visitor, u32 userParam);
u32 NNS_FndGetSizeForMBlockExpHeap(const void *memBlock);
u16 NNS_FndGetGroupIDForMBlockExpHeap(const void *memBlock);
u16 NNS_FndGetAllocDirForMBlockExpHeap(const void *memBlock);
typedef struct NNSiFndFrmHeapState NNSiFndFrmHeapState;
struct NNSiFndFrmHeapState {
    u32 tagName;
    void *headAllocator;
    void *tailAllocator;
    NNSiFndFrmHeapState *pPrevState;
};
typedef struct NNSiFndFrmHeapHead NNSiFndFrmHeapHead;
struct NNSiFndFrmHeapHead {
    void *headAllocator;
    void *tailAllocator;
    NNSiFndFrmHeapState *pState;
};
void *NNSi_FndGetFreeStartForFrmHeap(NNSFndHeapHandle heap);
void *NNSi_FndGetFreeEndForFrmHeap(NNSFndHeapHandle heap);
NNSFndHeapHandle NNS_FndCreateFrmHeapEx(void *startAddress, u32 size, u16 optFlag);
void NNS_FndDestroyFrmHeap(NNSFndHeapHandle heap);
void *NNS_FndAllocFromFrmHeapEx(NNSFndHeapHandle heap, u32 size, int alignment);
void NNS_FndFreeToFrmHeap(NNSFndHeapHandle heap, int mode);
u32 NNS_FndGetAllocatableSizeForFrmHeapEx(NNSFndHeapHandle heap, int alignment);
BOOL NNS_FndRecordStateForFrmHeap(NNSFndHeapHandle heap, u32 tagName);
BOOL NNS_FndFreeByStateToFrmHeap(NNSFndHeapHandle heap, u32 tagName);
u32 NNS_FndAdjustFrmHeap(NNSFndHeapHandle heap);
u32 NNS_FndResizeForMBlockFrmHeap(NNSFndHeapHandle heap, void *memBlock, u32 newSize);
typedef struct NNSiFndUntHeapMBlockHead NNSiFndUntHeapMBlockHead;
struct NNSiFndUntHeapMBlockHead {
    NNSiFndUntHeapMBlockHead *pMBlkHdNext;
};
typedef struct NNSiFndUntMBlockList NNSiFndUntMBlockList;
struct NNSiFndUntMBlockList {
    NNSiFndUntHeapMBlockHead *head;
};
typedef struct NNSiFndUntHeapHead NNSiFndUntHeapHead;
struct NNSiFndUntHeapHead {
    NNSiFndUntMBlockList mbFreeList;
    u32 mBlkSize;
};
NNSFndHeapHandle NNS_FndCreateUnitHeapEx(void *startAddress, u32 heapSize, u32 memBlockSize, int alignment, u16 optFlag);
void NNS_FndDestroyUnitHeap(NNSFndHeapHandle heap);
void *NNS_FndAllocFromUnitHeap(NNSFndHeapHandle heap);
void NNS_FndFreeToUnitHeap(NNSFndHeapHandle heap, void *memBlock);
u32 NNS_FndCountFreeBlockForUnitHeap(NNSFndHeapHandle heap);
u32 NNS_FndCalcHeapSizeForUnitHeap(u32 memBlockSize, u32 memBlockNum, int alignment);
struct FSFile;
struct FSArchive;
typedef enum {
    FS_COMMAND_ASYNC_BEGIN = 0,
    FS_COMMAND_READFILE    = FS_COMMAND_ASYNC_BEGIN,
    FS_COMMAND_WRITEFILE,
    FS_COMMAND_ASYNC_END,
    FS_COMMAND_SYNC_BEGIN = FS_COMMAND_ASYNC_END,
    FS_COMMAND_SEEKDIR    = FS_COMMAND_SYNC_BEGIN,
    FS_COMMAND_READDIR,
    FS_COMMAND_FINDPATH,
    FS_COMMAND_GETPATH,
    FS_COMMAND_OPENFILEFAST,
    FS_COMMAND_OPENFILEDIRECT,
    FS_COMMAND_CLOSEFILE,
    FS_COMMAND_SYNC_END,
    FS_COMMAND_STATUS_BEGIN = FS_COMMAND_SYNC_END,
    FS_COMMAND_ACTIVATE     = FS_COMMAND_STATUS_BEGIN,
    FS_COMMAND_IDLE,
    FS_COMMAND_SUSPEND,
    FS_COMMAND_RESUME,
    FS_COMMAND_STATUS_END,
    FS_COMMAND_INVALID
} FSCommandType;
typedef enum {
    FS_RESULT_SUCCESS = 0,
    FS_RESULT_FAILURE,
    FS_RESULT_BUSY,
    FS_RESULT_CANCELED,
    FS_RESULT_CANCELLED = FS_RESULT_CANCELED,
    FS_RESULT_UNSUPPORTED,
    FS_RESULT_ERROR,
    FS_RESULT_PROC_ASYNC,
    FS_RESULT_PROC_DEFAULT,
    FS_RESULT_PROC_UNKNOWN
} FSResult;
typedef FSResult (*FS_ARCHIVE_READ_FUNC)(struct FSArchive *p, void *dst, size_t pos, size_t size);
typedef FSResult (*FS_ARCHIVE_WRITE_FUNC)(struct FSArchive *p, const void *src, size_t pos, size_t size);
typedef FSResult (*FS_ARCHIVE_PROC_FUNC)(struct FSFile *, FSCommandType);
typedef struct {
    struct FSFile *prev;
    struct FSFile *next;
} FSFileLink;
typedef struct {
    u32 start;
    u16 index;
    u16 parent;
} FSArchiveFNT;
typedef struct {
    u32 top;
    u32 bottom;
} FSArchiveFAT;
typedef struct FSArchive {
    union {
        char ptr[4];
        u32 pack;
    } name;
    struct FSArchive *next;
    struct FSArchive *prev;
    OSThreadQueue sync_q;
    OSThreadQueue stat_q;
    u32 flag;
    FSFileLink list;
    u32 base;
    u32 fat;
    u32 fat_size;
    u32 fnt;
    u32 fnt_size;
    u32 fat_bak;
    u32 fnt_bak;
    void *load_mem;
    FS_ARCHIVE_READ_FUNC read_func;
    FS_ARCHIVE_WRITE_FUNC write_func;
    FS_ARCHIVE_READ_FUNC table_func;
    FS_ARCHIVE_PROC_FUNC proc;
    u32 proc_flag;
} FSArchive;
static inline BOOL FS_IsArchiveLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000002) ? 1 : 0;
}
static inline u32 FS_GetArchiveOffset(const FSArchive *p_arc, u32 pos) {
    return p_arc->base + pos;
}
static inline BOOL FSi_IsArchiveCanceling(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000020) != 0;
}
static inline BOOL FS_IsArchiveSuspended(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000008) ? 1 : 0;
}
static inline BOOL FSi_IsArchiveSuspending(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000040) != 0;
}
static inline BOOL FSi_IsArchiveRunning(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000010) != 0;
}
static inline BOOL FSi_IsArchiveUnloading(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000080) != 0;
}
static inline BOOL FSi_IsArchiveAsync(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000100) != 0;
}
static inline BOOL FSi_IsArchiveSync(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000200) != 0;
}
static inline BOOL FS_IsArchiveTableLoaded(volatile const FSArchive *p_arc) {
    return (p_arc->flag & 0x00000004) ? 1 : 0;
}
void FS_InitArchive(FSArchive *p_arc);
FSArchive *FS_FindArchive(const char *name, int name_len);
BOOL FS_RegisterArchiveName(FSArchive *p_arc, const char *name, u32 name_len);
void FS_ReleaseArchiveName(FSArchive *p_arc);
BOOL FS_LoadArchive(FSArchive *p_arc, u32 base, u32 fat, u32 fat_size, u32 fnt, u32 fnt_size, FS_ARCHIVE_READ_FUNC read_func,
                    FS_ARCHIVE_WRITE_FUNC write_func);
BOOL FS_UnloadArchive(FSArchive *p_arc);
u32 FS_LoadArchiveTables(FSArchive *p_arc, void *p_mem, u32 max_size);
void *FS_UnloadArchiveTables(FSArchive *p_arc);
BOOL FS_SuspendArchive(FSArchive *p_arc);
BOOL FS_ResumeArchive(FSArchive *p_arc);
void FS_SetArchiveProc(struct FSArchive *p_arc, FS_ARCHIVE_PROC_FUNC proc, u32 flags);
void FS_NotifyArchiveAsyncEnd(FSArchive *p_arc, FSResult ret);
void FSi_EndArchive(void);
typedef enum FSSeekFileMode {
    FS_SEEK_SET = 0,
    FS_SEEK_CUR,
    FS_SEEK_END
} FSSeekFileMode;
struct FSFile;
typedef struct {
    struct FSArchive *arc;
    u16 own_id;
    u16 index;
    u32 pos;
} FSDirPos;
typedef struct {
    struct FSArchive *arc;
    u32 file_id;
} FSFileID;
typedef struct {
    union {
        FSFileID file_id;
        FSDirPos dir_id;
    };
    u32 is_directory;
    u32 name_len;
    char name[127 + 1];
} FSDirEntry;
typedef struct {
    FSDirPos pos;
} FSSeekDirInfo;
typedef struct {
    FSDirEntry *p_entry;
    BOOL skip_string;
} FSReadDirInfo;
typedef struct {
    FSDirPos pos;
    const char *path;
    BOOL find_directory;
    union {
        FSFileID *file;
        FSDirPos *dir;
    } result;
} FSFindPathInfo;
typedef struct {
    u8 *buf;
    u32 buf_len;
    u16 total_len;
    u16 dir_id;
} FSGetPathInfo;
typedef struct {
    FSFileID id;
} FSOpenFileFastInfo;
typedef struct {
    u32 top;
    u32 bottom;
    u32 index;
} FSOpenFileDirectInfo;
typedef struct {
    u32 reserved;
} FSCloseFileInfo;
typedef struct {
    void *dst;
    u32 len_org;
    u32 len;
} FSReadFileInfo;
typedef struct {
    const void *src;
    u32 len_org;
    u32 len;
} FSWriteFileInfo;
typedef struct FSFile {
    FSFileLink link;
    struct FSArchive *arc;
    u32 stat;
    FSCommandType command;
    FSResult error;
    OSThreadQueue queue[1];
    union {
        struct {
            u32 own_id;
            u32 top;
            u32 bottom;
            u32 pos;
        } file;
        struct {
            FSDirPos pos;
            u32 parent;
        } dir;
    } prop;
    union {
        FSReadFileInfo readfile;
        FSWriteFileInfo writefile;
        FSSeekDirInfo seekdir;
        FSReadDirInfo readdir;
        FSFindPathInfo findpath;
        FSGetPathInfo getpath;
        FSOpenFileFastInfo openfilefast;
        FSOpenFileDirectInfo openfiledirect;
        FSCloseFileInfo closefile;
    } arg;
} FSFile;
void FS_Init(u32 default_dma_no);
BOOL FS_IsAvailable(void);
void FS_End(void);
u32 FS_GetDefaultDMA(void);
u32 FS_SetDefaultDMA(u32 dma_no);
u32 FS_TryLoadTable(void *p_mem, u32 size);
void FS_InitFile(FSFile *p_file);
BOOL FS_OpenFile(FSFile *p_file, const char *path);
BOOL FS_OpenFileFast(FSFile *p_file, FSFileID file_id);
BOOL FS_ConvertPathToFileID(FSFileID *p_file_id, const char *path);
BOOL FS_CloseFile(FSFile *p_file);
BOOL FS_GetPathName(FSFile *p_file, char *buf, u32 len);
s32 FS_GetPathLength(FSFile *p_file);
s32 FS_ReadFile(FSFile *p_file, void *dst, s32 len);
s32 FS_ReadFileAsync(FSFile *p_file, void *dst, s32 len);
s32 FS_WriteFile(FSFile *p_file, const void *src, s32 len);
s32 FS_WriteFileAsync(FSFile *p_file, const void *src, s32 len);
BOOL FS_WaitAsync(FSFile *p_file);
void FS_CancelFile(FSFile *p_file);
BOOL FS_SeekFile(FSFile *p_file, s32 offset, FSSeekFileMode origin);
BOOL FS_ChangeDir(const char *path);
BOOL FS_FindDir(FSFile *p_dir, const char *path);
BOOL FS_ReadDir(FSFile *p_dir, FSDirEntry *p_entry);
BOOL FS_TellDir(const FSFile *p_dir, FSDirPos *p_pos);
BOOL FS_SeekDir(FSFile *p_dir, const FSDirPos *p_pos);
BOOL FS_RewindDir(FSFile *p_dir);
BOOL FS_OpenFileDirect(FSFile *p_file, FSArchive *p_arc, u32 image_top, u32 image_bottom, u32 file_index);
BOOL FS_CreateFileFromRom(FSFile *p_file, u32 offset, u32 size);
BOOL FS_CreateFileFromMemory(FSFile *p_file, void *buf, u32 size);
static inline u32 FS_GetTableSize(void) {
    return FS_TryLoadTable(0, 0);
}
static inline BOOL FS_LoadTable(void *p_mem, u32 size) {
    return (FS_TryLoadTable(p_mem, size) <= size) ? 1 : 0;
}
static inline void *FS_UnloadTable(void) {
    FSArchive *const p_arc = FS_FindArchive("rom", 3);
    return FS_UnloadArchiveTables(p_arc);
}
static inline BOOL FS_IsBusy(volatile const FSFile *p_file) {
    return p_file->stat & 0x00000001 ? 1 : 0;
}
static inline BOOL FS_IsCanceling(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000002) ? 1 : 0;
}
static inline BOOL FS_IsSucceeded(volatile const FSFile *p_file) {
    return (p_file->error == FS_RESULT_SUCCESS) ? 1 : 0;
}
static inline BOOL FS_IsFile(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000010) ? 1 : 0;
}
static inline BOOL FS_IsDir(volatile const FSFile *p_file) {
    return (p_file->stat & 0x00000020) ? 1 : 0;
}
static inline BOOL FS_IsFileSyncMode(const volatile FSFile *p) {
    return (p->stat & 0x00000004) ? 1 : 0;
}
static inline FSResult FS_GetResultCode(volatile const FSFile *p_file) {
    return p_file->error;
}
static inline u32 FS_GetLength(const FSFile *p_file) {
    return p_file->prop.file.bottom - p_file->prop.file.top;
}
static inline u32 FS_GetPosition(const FSFile *p_file) {
    return p_file->prop.file.pos - p_file->prop.file.top;
}
static inline BOOL FS_SeekFileToBegin(FSFile *p_file) {
    return FS_SeekFile(p_file, 0, FS_SEEK_SET);
}
static inline BOOL FS_SeekFileToEnd(FSFile *p_file) {
    return FS_SeekFile(p_file, 0, FS_SEEK_END);
}
static inline FSArchive *FS_GetAttachedArchive(const FSFile *p_file) {
    return p_file->arc;
}
static inline u32 const FS_GetFileImageTop(const FSFile *p_file) {
    return p_file->prop.file.top;
}
static inline u32 FS_GetFileImageBottom(const FSFile *p_file) {
    return p_file->prop.file.bottom;
}
typedef enum {
    MI_PROCESSOR_ARM9 = 0,
    MI_PROCESSOR_ARM7 = 1
} MIProcessor;
typedef enum {
    MI_CTRDG_ROMCYCLE1_10 = 0,
    MI_CTRDG_ROMCYCLE1_8  = 1,
    MI_CTRDG_ROMCYCLE1_6  = 2,
    MI_CTRDG_ROMCYCLE1_18 = 3
} MICartridgeRomCycle1st;
typedef enum {
    MI_CTRDG_ROMCYCLE2_6 = 0,
    MI_CTRDG_ROMCYCLE2_4 = 1
} MICartridgeRomCycle2nd;
typedef enum {
    MI_CTRDG_RAMCYCLE_10 = 0,
    MI_CTRDG_RAMCYCLE_8  = 1,
    MI_CTRDG_RAMCYCLE_6  = 2,
    MI_CTRDG_RAMCYCLE_18 = 3
} MICartridgeRamCycle;
typedef enum {
    MIi_PHI_CLOCK_LOW   = 0,
    MIi_PHI_CLOCK_4MHZ  = 1,
    MIi_PHI_CLOCK_8MHZ  = 2,
    MIi_PHI_CLOCK_16MHZ = 3
} MIiPhiClock;
typedef enum {
    MI_WMWAIT0_1_9  = 0,
    MI_WMWAIT0_1_7  = 1,
    MI_WMWAIT0_1_5  = 2,
    MI_WMWAIT0_1_17 = 3
} MIWMWait0_1;
typedef enum {
    MI_WMWAIT0_2_5 = 0,
    MI_WMWAIT0_2_3 = 1
} MIWMWait0_2;
typedef enum {
    MI_WMWAIT1_1_9  = 0,
    MI_WMWAIT1_1_7  = 1,
    MI_WMWAIT1_1_5  = 2,
    MI_WMWAIT1_1_17 = 3
} MIWMWait1_1;
typedef enum {
    MI_WMWAIT1_2_9 = 0,
    MI_WMWAIT1_2_3 = 1
} MIWMWait1_2;
typedef enum {
    MI_PHI_CLOCK_CARTRIDGE = 0,
    MI_PHI_CLOCK_33MHZ     = 1
} MIPhiControl;
static inline MIProcessor MI_GetMainMemoryPriority(void) {
    return (MIProcessor) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x8000) >> 15);
}
static inline MICartridgeRomCycle1st MI_GetCartridgeRomCycle1st(void) {
    return (MICartridgeRomCycle1st) (((*(REGType16v *) (0x04000000 + 0x204)) & 0xc) >> 2);
}
static inline MICartridgeRomCycle2nd MI_GetCartridgeRomCycle2nd(void) {
    return (MICartridgeRomCycle2nd) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x10) >> 4);
}
static inline void MI_SetCartridgeRomCycle1st(MICartridgeRomCycle1st c1) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0xc) | (c1 << 2));
}
static inline void MI_SetCartridgeRomCycle2nd(MICartridgeRomCycle2nd c2) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x10) | (c2 << 4));
}
static inline void MI_SetCartridgeRamCycle(MICartridgeRamCycle c) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~3) | (c << 0));
}
static inline MICartridgeRamCycle MI_GetCartridgeRamCycle(void) {
    return (MICartridgeRamCycle) (((*(REGType16v *) (0x04000000 + 0x204)) & 3) >> 0);
}
static inline MIProcessor MI_GetCartridgeProcessor(void) {
    return (MIProcessor) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x0080) >> 7);
}
static inline void MIi_SetPhiClock(MIiPhiClock clock) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x0060) | (clock << 5));
}
static inline MIiPhiClock MIi_GetPhiClock(void) {
    return (MIiPhiClock) (((*(REGType16v *) (0x04000000 + 0x204)) & 0x0060) >> 5);
}
static inline void MI_SetMainMemoryPriority(MIProcessor proc) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x8000) | (proc << 15));
}
static inline void MIi_SetCardProcessor(MIProcessor proc) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x0800) | (proc << 11));
}
static inline void MIi_SetCartridgeProcessor(MIProcessor proc) {
    (*(REGType16v *) (0x04000000 + 0x204)) = (u16) (((*(REGType16v *) (0x04000000 + 0x204)) & ~0x0080) | (proc << 7));
}
typedef void (*MIDmaCallback)(void *);
void MI_HBlankDmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
void MI_HBlankDmaCopy16(u32 dmaNo, const void *src, void *dest, u32 size);
void MI_SendGXCommandAsyncFast(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
void MI_SendGXCommandAsync(u32 dmaNo, const void *src, u32 commandLength, MIDmaCallback callback, void *arg);
void MIi_CardDmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
typedef union {
    u32 b32;
    u16 b16;
} MIiDmaClearSrc;
void MI_DmaFill32(u32 dmaNo, void *dest, u32 data, u32 size);
void MI_DmaCopy32(u32 dmaNo, const void *src, void *dest, u32 size);
void MI_DmaCopy16(u32 dmaNo, const void *src, void *dest, u32 size);
void MI_DmaFill32Async(u32 dmaNo, void *dest, u32 data, u32 size, MIDmaCallback callback, void *arg);
void MI_DmaCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size, MIDmaCallback callback, void *arg);
void MI_WaitDma(u32 dmaNo);
void MI_StopDma(u32 dmaNo);
void MIi_CheckAnotherAutoDMA(u32 dmaNo, u32 dmaType);
void MIi_CheckDma0SourceAddress(u32 dmaNo, u32 src, u32 size, u32 dir);
void MIi_DmaSetParams(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
void MIi_DmaSetParams_wait(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
void MIi_DmaSetParams_noInt(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
void MIi_DmaSetParams_wait_noInt(u32 dmaNo, u32 src, u32 dest, u32 ctrl);
static inline void MIi_DmaSetParams_wait_src32(u32 dmaNo, u32 data, u32 dest, u32 ctrl) {
    OSIntrMode lastIntrMode = OS_DisableInterrupts();
    MIiDmaClearSrc *scrp    = (MIiDmaClearSrc *) ((u32) (0x04000000 + 0x0e0) + dmaNo * 4);
    scrp->b32               = data;
    MIi_DmaSetParams_wait_noInt(dmaNo, (u32) scrp, dest, ctrl);
    (void) OS_RestoreInterrupts(lastIntrMode);
}
static inline void MIi_DmaSetParams_src32(u32 dmaNo, u32 data, u32 dest, u32 ctrl) {
    OSIntrMode lastIntrMode = OS_DisableInterrupts();
    MIiDmaClearSrc *srcp    = (MIiDmaClearSrc *) ((u32) (0x04000000 + 0x0e0) + dmaNo * 4);
    srcp->b32               = data;
    MIi_DmaSetParams_noInt(dmaNo, (u32) srcp, dest, ctrl);
    (void) OS_RestoreInterrupts(lastIntrMode);
}
static inline void MIi_CallCallback(MIDmaCallback callback, void *arg) {
    if (callback) {
        callback(arg);
    }
}
typedef enum {
    CARD_RESULT_SUCCESS = 0,
    CARD_RESULT_FAILURE,
    CARD_RESULT_INVALID_PARAM,
    CARD_RESULT_UNSUPPORTED,
    CARD_RESULT_TIMEOUT,
    CARD_RESULT_ERROR,
    CARD_RESULT_NO_RESPONSE,
    CARD_RESULT_CANCELED
} CARDResult;
typedef enum {
    CARD_BACKUP_TYPE_EEPROM_4KBITS   = (((1) << 0) | ((9) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_64KBITS  = (((1) << 0) | ((13) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_EEPROM_512KBITS = (((1) << 0) | ((16) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_2MBITS    = (((2) << 0) | ((18) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_4MBITS    = (((2) << 0) | ((19) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FLASH_8MBITS    = (((2) << 0) | ((20) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_FRAM_256KBITS   = (((3) << 0) | ((15) << 8) | ((0) << 16)),
    CARD_BACKUP_TYPE_NOT_USE         = 0
} CARDBackupType;
typedef enum {
    CARD_REQ_INIT = 0,
    CARD_REQ_ACK,
    CARD_REQ_IDENTIFY,
    CARD_REQ_READ_ID,
    CARD_REQ_READ_ROM,
    CARD_REQ_WRITE_ROM,
    CARD_REQ_READ_BACKUP,
    CARD_REQ_WRITE_BACKUP,
    CARD_REQ_PROGRAM_BACKUP,
    CARD_REQ_VERIFY_BACKUP,
    CARD_REQ_ERASE_PAGE_BACKUP,
    CARD_REQ_ERASE_SECTOR_BACKUP,
    CARD_REQ_ERASE_CHIP_BACKUP,
    CARD_REQ_MAX
} CARDRequest;
typedef enum {
    CARD_REQUEST_MODE_RECV,
    CARD_REQUEST_MODE_SEND,
    CARD_REQUEST_MODE_SEND_VERIFY,
    CARD_REQUEST_MODE_SPECIAL
} CARDRequestMode;
void CARD_Init(void);
BOOL CARD_IsAvailable(void);
BOOL CARD_IsEnabled(void);
void CARD_CheckEnabled(void);
void CARD_Enable(BOOL enable);
u32 CARD_GetThreadPriority(void);
u32 CARD_SetThreadPriority(u32 prior);
CARDResult CARD_GetResultCode(void);
const u8 *CARD_GetRomHeader(void);
void CARD_GetCacheFlushThreshold(u32 *icache, u32 *dcache);
void CARD_SetCacheFlushThreshold(u32 icache, u32 dcache);
BOOL CARD_IdentifyBackup(CARDBackupType type);
u32 CARD_GetBackupTotalSize(void);
u32 CARD_GetBackupSectorSize(void);
u32 CARD_GetBackupPageSize(void);
CARDBackupType CARD_GetCurrentBackupType(void);
typedef struct {
    u32 offset;
    u32 length;
} CARDRomRegion;
typedef struct {
    char game_name[12];
    u32 game_code;
    u16 maker_code;
    u8 product_id;
    u8 device_type;
    u8 device_size;
    u8 reserved_A[9];
    u8 game_version;
    u8 property;
    void *main_rom_offset;
    void *main_entry_address;
    void *main_ram_address;
    u32 main_size;
    void *sub_rom_offset;
    void *sub_entry_address;
    void *sub_ram_address;
    u32 sub_size;
    CARDRomRegion fnt;
    CARDRomRegion fat;
    CARDRomRegion main_ovt;
    CARDRomRegion sub_ovt;
    u8 rom_param_A[8];
    u32 banner_offset;
    u16 secure_crc;
    u8 rom_param_B[2];
    void *main_autoload_done;
    void *sub_autoload_done;
    u8 rom_param_C[8];
    u32 rom_size;
    u32 header_size;
    u8 reserved_B[0x38];
    u8 logo_data[0x9C];
    u16 logo_crc;
    u16 header_crc;
} CARDRomHeader;
void CARD_LockRom(u16 lock_id);
void CARD_UnlockRom(u16 lock_id);
void CARDi_ReadRom(u32 dma, const void *src, void *dst, u32 len, MIDmaCallback callback, void *arg, BOOL is_async);
void CARD_WaitRomAsync(void);
BOOL CARD_TryWaitRomAsync(void);
u32 CARDi_ReadRomID(void);
static inline const CARDRomRegion *CARD_GetRomRegionFNT(void) {
    return (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x40);
}
static inline const CARDRomRegion *CARD_GetRomRegionFAT(void) {
    return (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x48);
}
static inline const CARDRomRegion *CARD_GetRomRegionOVT(MIProcessor target) {
    return (target == MI_PROCESSOR_ARM9) ? (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x50)
                                         : (const CARDRomRegion *) ((const u8 *) (0x02000000 + 0x007ffe00) + 0x58);
}
static inline void CARD_ReadRomAsync(u32 dma, const void *src, void *dst, u32 len, MIDmaCallback callback, void *arg) {
    CARDi_ReadRom(dma, src, dst, len, callback, arg, 1);
}
static inline void CARD_ReadRom(u32 dma, const void *src, void *dst, u32 len) {
    CARDi_ReadRom(dma, src, dst, len, 0, 0, 0);
}
typedef u32 FSOverlayID;
typedef void (*FSOverlayInitFunc)(void);
typedef struct FSOverlayInfoHeader {
    u32 id;
    u8 *ram_address;
    u32 ram_size;
    u32 bss_size;
    FSOverlayInitFunc *sinit_init;
    FSOverlayInitFunc *sinit_init_end;
    u32 file_id;
    u32 compressed : 24;
    u32 flag : 8;
} FSOverlayInfoHeader;
typedef struct FSOverlayInfo {
    FSOverlayInfoHeader header;
    MIProcessor target;
    CARDRomRegion file_pos;
} FSOverlayInfo;
static inline u8 *const FS_GetOverlayAddress(FSOverlayInfo *p_ovi) {
    return p_ovi->header.ram_address;
}
static inline u32 const FS_GetOverlayImageSize(FSOverlayInfo *p_ovi) {
    return p_ovi->header.ram_size;
}
static inline u32 const FS_GetOverlayTotalSize(FSOverlayInfo *p_ovi) {
    return p_ovi->header.ram_size + p_ovi->header.bss_size;
}
void FS_ClearOverlayImage(FSOverlayInfo *p_ovi);
FSFileID FS_GetOverlayFileID(const FSOverlayInfo *p_ovi);
BOOL FSi_LoadOverlayInfoCore(FSOverlayInfo *p_ovi, MIProcessor target, FSOverlayID id, FSArchive *arc, u32 offset_arm9,
                             u32 len_arm9, u32 offset_arm7, u32 len_arm7);
BOOL FS_LoadOverlayInfo(FSOverlayInfo *p_ovi, MIProcessor target, FSOverlayID id);
BOOL FS_LoadOverlayImageAsync(FSOverlayInfo *p_ovi, FSFile *p_file);
BOOL FS_LoadOverlayImage(FSOverlayInfo *p_ovi);
void FS_StartOverlay(FSOverlayInfo *p_ovi);
void FS_EndOverlay(FSOverlayInfo *p_ovi);
BOOL FS_UnloadOverlayImage(FSOverlayInfo *p_ovi);
BOOL FS_LoadOverlay(MIProcessor target, FSOverlayID id);
BOOL FS_UnloadOverlay(MIProcessor target, FSOverlayID id);
void FS_AttachOverlayTable(MIProcessor target, const void *ptr, u32 len);
typedef struct {
    u32 fileTop;
    u32 fileBottom;
} NNSiFndArchiveFatEntry;
typedef struct {
    u32 blockType;
    u32 blockSize;
    u16 numFiles;
    u16 reserved;
    NNSiFndArchiveFatEntry fatEntries[1];
} NNSiFndArchiveFatData;
typedef struct {
    u32 signature;
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} NNSiFndArchiveHeader;
typedef struct {
    FSArchive fsArchive;
    NNSiFndArchiveHeader *arcBinary;
    NNSiFndArchiveFatData *fatData;
    u32 fileImage;
} NNSFndArchive;
BOOL NNS_FndMountArchive(NNSFndArchive *archive, const char *arcName, void *arcBinary);
BOOL NNS_FndUnmountArchive(NNSFndArchive *archive);
void *NNS_FndGetArchiveFileByName(const char *path);
void *NNS_FndGetArchiveFileByIndex(NNSFndArchive *archive, u32 index);
BOOL NNS_FndOpenArchiveFileByIndex(FSFile *file, NNSFndArchive *archive, u32 index);
typedef struct NNSFndAllocator NNSFndAllocator;
typedef void *(*NNSFndFuncAllocatorAlloc)(NNSFndAllocator *pAllocator, u32 size);
typedef void (*NNSFndFuncAllocatorFree)(NNSFndAllocator *pAllocator, void *memBlock);
typedef struct NNSFndAllocatorFunc NNSFndAllocatorFunc;
struct NNSFndAllocatorFunc {
    NNSFndFuncAllocatorAlloc pfAlloc;
    NNSFndFuncAllocatorFree pfFree;
};
struct NNSFndAllocator {
    NNSFndAllocatorFunc const *pFunc;
    void *pHeap;
    u32 heapParam1;
    u32 heapParam2;
};
void *NNS_FndAllocFromAllocator(NNSFndAllocator *pAllocator, u32 size);
void NNS_FndFreeToAllocator(NNSFndAllocator *pAllocator, void *memBlock);
void NNS_FndInitAllocatorForExpHeap(NNSFndAllocator *pAllocator, NNSFndHeapHandle heap, int alignment);
void NNS_FndInitAllocatorForFrmHeap(NNSFndAllocator *pAllocator, NNSFndHeapHandle heap, int alignment);
void NNS_FndInitAllocatorForUnitHeap(NNSFndAllocator *pAllocator, NNSFndHeapHandle heap);
void NNS_FndInitAllocatorForSDKHeap(NNSFndAllocator *pAllocator, OSArenaId id, OSHeapHandle heap);
void SND_Init(void);
void SNDi_LockMutex(void);
void SNDi_UnlockMutex(void);
typedef void (*SNDAlarmHandler)(void *);
typedef struct SNDAlarm {
    u8 enable;
    u8 id;
    u16 padding;
    struct {
        OSTick tick;
        OSTick period;
    } setting;
    OSAlarm alarm;
} SNDAlarm;
void SND_AlarmInit(void);
void SNDi_IncAlarmId(int alarmNo);
u8 SNDi_SetAlarmHandler(int alarmNo, SNDAlarmHandler handler, void *arg);
void SNDi_CallAlarmHandler(int alarmNo);
typedef enum SNDCommandID {
    SND_COMMAND_START_SEQ,
    SND_COMMAND_STOP_SEQ,
    SND_COMMAND_PREPARE_SEQ,
    SND_COMMAND_START_PREPARED_SEQ,
    SND_COMMAND_PAUSE_SEQ,
    SND_COMMAND_SKIP_SEQ,
    SND_COMMAND_PLAYER_PARAM,
    SND_COMMAND_TRACK_PARAM,
    SND_COMMAND_MUTE_TRACK,
    SND_COMMAND_ALLOCATABLE_CHANNEL,
    SND_COMMAND_PLAYER_LOCAL_VAR,
    SND_COMMAND_PLAYER_GLOBAL_VAR,
    SND_COMMAND_START_TIMER,
    SND_COMMAND_STOP_TIMER,
    SND_COMMAND_SETUP_CHANNEL_PCM,
    SND_COMMAND_SETUP_CHANNEL_PSG,
    SND_COMMAND_SETUP_CHANNEL_NOISE,
    SND_COMMAND_SETUP_CAPTURE,
    SND_COMMAND_SETUP_ALARM,
    SND_COMMAND_CHANNEL_TIMER,
    SND_COMMAND_CHANNEL_VOLUME,
    SND_COMMAND_CHANNEL_PAN,
    SND_COMMAND_SURROUND_DECAY,
    SND_COMMAND_MASTER_VOLUME,
    SND_COMMAND_MASTER_PAN,
    SND_COMMAND_OUTPUT_SELECTOR,
    SND_COMMAND_LOCK_CHANNEL,
    SND_COMMAND_UNLOCK_CHANNEL,
    SND_COMMAND_STOP_UNLOCKED_CHANNEL,
    SND_COMMAND_SHARED_WORK,
    SND_COMMAND_INVALIDATE_SEQ,
    SND_COMMAND_INVALIDATE_BANK,
    SND_COMMAND_INVALIDATE_WAVE,
    SND_COMMAND_READ_DRIVER_INFO
} SNDCommandID;
typedef struct SNDCommand {
    struct SNDCommand *next;
    SNDCommandID id;
    u32 arg[4];
} SNDCommand;
void SND_CommandInit(void);
struct SNDCommand *SND_AllocCommand(u32 flags);
void SND_PushCommand(struct SNDCommand *command);
const SNDCommand *SND_RecvCommandReply(u32 flags);
BOOL SND_FlushCommand(u32 flags);
void SND_WaitForCommandProc(u32 tag);
void SND_WaitForFreeCommand(int count);
u32 SND_GetCurrentCommandTag(void);
BOOL SND_IsFinishedCommandTag(u32 tag);
int SND_CountFreeCommand(void);
int SND_CountReservedCommand(void);
int SND_CountWaitingCommand(void);
typedef enum SNDChannelOut {
    SND_CHANNEL_OUT_MIXER,
    SND_CHANNEL_OUT_BYPASS
} SNDChannelOut;
typedef enum SNDOutput {
    SND_OUTPUT_MIXER,
    SND_OUTPUT_CHANNEL1,
    SND_OUTPUT_CHANNEL3,
    SND_OUTPUT_CHANNEL1_3
} SNDOutput;
typedef enum {
    SND_CAPTURE_0,
    SND_CAPTURE_1
} SNDCapture;
typedef enum {
    SND_CAPTURE_FORMAT_PCM16,
    SND_CAPTURE_FORMAT_PCM8
} SNDCaptureFormat;
typedef enum {
    SND_CAPTURE_REPEAT_YES,
    SND_CAPTURE_REPEAT_NO
} SNDCaptureRepeat;
typedef enum {
    SND_CAPTURE_IN_MIXER,
    SND_CAPTURE_IN_CHANNEL,
    SND_CAPTURE_IN_MIXER_L  = SND_CAPTURE_IN_MIXER,
    SND_CAPTURE_IN_MIXER_R  = SND_CAPTURE_IN_MIXER,
    SND_CAPTURE_IN_CHANNEL0 = SND_CAPTURE_IN_CHANNEL,
    SND_CAPTURE_IN_CHANNEL2 = SND_CAPTURE_IN_CHANNEL
} SNDCaptureIn;
typedef enum {
    SND_CAPTURE_OUT_NORMAL,
    SND_CAPTURE_OUT_CHANNEL_MIX,
    SND_CAPTURE_OUT_CHANNEL0_MIX = SND_CAPTURE_OUT_CHANNEL_MIX,
    SND_CAPTURE_OUT_CHANNEL2_MIX = SND_CAPTURE_OUT_CHANNEL_MIX
} SNDCaptureOut;
typedef enum {
    SND_CHANNEL_0,
    SND_CHANNEL_1,
    SND_CHANNEL_2,
    SND_CHANNEL_3,
    SND_CHANNEL_4,
    SND_CHANNEL_5,
    SND_CHANNEL_6,
    SND_CHANNEL_7,
    SND_CHANNEL_8,
    SND_CHANNEL_9,
    SND_CHANNEL_10,
    SND_CHANNEL_11,
    SND_CHANNEL_12,
    SND_CHANNEL_13,
    SND_CHANNEL_14,
    SND_CHANNEL_15
} SNDChannelId;
typedef enum {
    SND_WAVE_FORMAT_PCM8,
    SND_WAVE_FORMAT_PCM16,
    SND_WAVE_FORMAT_ADPCM,
    SND_WAVE_FORMAT_PSG,
    SND_WAVE_FORMAT_NOISE = SND_WAVE_FORMAT_PSG
} SNDWaveFormat;
typedef enum {
    SND_CHANNEL_LOOP_MANUAL,
    SND_CHANNEL_LOOP_REPEAT,
    SND_CHANNEL_LOOP_1SHOT
} SNDChannelLoop;
typedef enum {
    SND_DUTY_1_8,
    SND_DUTY_2_8,
    SND_DUTY_3_8,
    SND_DUTY_4_8,
    SND_DUTY_5_8,
    SND_DUTY_6_8,
    SND_DUTY_7_8
} SNDDuty;
typedef enum {
    SND_CHANNEL_DATASHIFT_NONE,
    SND_CHANNEL_DATASHIFT_1BIT,
    SND_CHANNEL_DATASHIFT_2BIT,
    SND_CHANNEL_DATASHIFT_4BIT
} SNDChannelDataShift;
void SND_StartChannel(int chNo);
struct SNDExChannel;
typedef enum SNDExChannelType {
    SND_EX_CHANNEL_PCM,
    SND_EX_CHANNEL_PSG,
    SND_EX_CHANNEL_NOISE
} SNDExChannelType;
typedef enum SNDExChannelCallbackStatus {
    SND_EX_CHANNEL_CALLBACK_DROP,
    SND_EX_CHANNEL_CALLBACK_FINISH
} SNDExChannelCallbackStatus;
typedef enum SNDEnvStatus {
    SND_ENV_ATTACK,
    SND_ENV_DECAY,
    SND_ENV_SUSTAIN,
    SND_ENV_RELEASE
} SNDEnvStatus;
typedef enum SNDLfoTarget {
    SND_LFO_PITCH,
    SND_LFO_VOLUME,
    SND_LFO_PAN
} SNDLfoTarget;
typedef void (*SNDExChannelCallback)(struct SNDExChannel *ch_p, SNDExChannelCallbackStatus status, void *userData);
typedef struct SNDWaveParam {
    u8 format;
    u8 loopflag;
    u16 rate;
    u16 timer;
    u16 loopstart;
    u32 looplen;
} SNDWaveParam;
typedef struct SNDLfoParam {
    u8 target;
    u8 speed;
    u8 depth;
    u8 range;
    u16 delay;
} SNDLfoParam;
typedef struct SNDLfo {
    struct SNDLfoParam param;
    u16 delay_counter;
    u16 counter;
} SNDLfo;
typedef struct SNDExChannel {
    u8 myNo;
    u8 type;
    u8 env_status;
    u8 active_flag : 1;
    u8 start_flag : 1;
    u8 auto_sweep : 1;
    u8 sync_flag : 5;
    u8 pan_range;
    u8 original_key;
    s16 user_decay2;
    u8 key;
    u8 velocity;
    s8 init_pan;
    s8 user_pan;
    s16 user_decay;
    s16 user_pitch;
    s32 env_decay;
    s32 sweep_counter;
    s32 sweep_length;
    u8 attack;
    u8 sustain;
    u16 decay;
    u16 release;
    u8 prio;
    u8 pan;
    u16 volume;
    u16 timer;
    struct SNDLfo lfo;
    s16 sweep_pitch;
    s32 length;
    struct SNDWaveParam wave;
    union {
        const void *data;
        SNDDuty duty;
    };
    SNDExChannelCallback callback;
    void *callback_data;
    struct SNDExChannel *nextLink;
} SNDExChannel;
typedef enum {
    SND_SEQ_MUTE_OFF,
    SND_SEQ_MUTE_NO_STOP,
    SND_SEQ_MUTE_RELEASE,
    SND_SEQ_MUTE_STOP
} SNDSeqMute;
struct SNDBankData;
typedef struct SNDPlayer {
    u8 active_flag : 1;
    u8 prepared_flag : 1;
    u8 pause_flag : 1;
    u8 pad_ : 5;
    u8 myNo;
    u8 pad2_;
    u8 pad3_;
    u8 prio;
    u8 volume;
    s16 extFader;
    u8 tracks[16];
    u16 tempo;
    u16 tempo_ratio;
    u16 tempo_counter;
    u16 pad__;
    struct SNDBankData *bank;
} SNDPlayer;
typedef struct SNDTrack {
    u8 active_flag : 1;
    u8 note_wait : 1;
    u8 mute_flag : 1;
    u8 tie_flag : 1;
    u8 note_finish_wait : 1;
    u8 porta_flag : 1;
    u8 cmp_flag : 1;
    u8 channel_mask_flag : 1;
    u8 pan_range;
    u16 prgNo;
    u8 volume;
    u8 volume2;
    s8 pitch_bend;
    u8 bend_range;
    s8 pan;
    s8 ext_pan;
    s16 extFader;
    s16 ext_pitch;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
    u8 prio;
    s8 transpose;
    u8 porta_key;
    u8 porta_time;
    s16 sweep_pitch;
    struct SNDLfoParam mod;
    u16 channel_mask;
    s32 wait;
    const u8 *base;
    const u8 *cur;
    const u8 *call_stack[3];
    u8 loop_count[3];
    u8 call_stack_depth;
    struct SNDExChannel *channel_list;
} SNDTrack;
struct SNDBankData;
struct SNDSharedWork;
struct SNDSpCallback;
struct SNDDriverInfo;
void SND_StartSeq(int playerNo, const void *base, u32 offset, const struct SNDBankData *bank);
void SND_PrepareSeq(int playerNo, const void *base, u32 offset, const struct SNDBankData *bank);
void SND_StartPreparedSeq(int playerNo);
void SND_StopSeq(int playerNo);
void SND_StopSeq(int playerNo);
void SND_PauseSeq(int playerNo, BOOL flag);
void SND_SetPlayerTempoRatio(int playerNo, int ratio);
void SND_SetPlayerVolume(int playerNo, int volume);
void SND_SetPlayerChannelPriority(int playerNo, int prio);
void SND_SetPlayerLocalVariable(int playerNo, int varNo, s16 var);
void SND_SetPlayerGlobalVariable(int varNo, s16 var);
void SND_SetTrackMute(int playerNo, u32 trackBitMask, BOOL flag);
void SND_SetTrackMuteEx(int playerNo, u32 trackBitMask, SNDSeqMute mute);
void SND_SetTrackVolume(int playerNo, u32 trackBitMask, int volume);
void SND_SetTrackPitch(int playerNo, u32 trackBitMask, int pitch);
void SND_SetTrackPan(int playerNo, u32 trackBitMask, int pan);
void SND_SetTrackPanRange(int playerNo, u32 trackBitMask, int panRange);
void SND_SetTrackModDepth(int playerNo, u32 trackBitMask, int depth);
void SND_SetTrackModSpeed(int playerNo, u32 trackBitMask, int speed);
void SND_SetTrackAllocatableChannel(int playerNo, u32 trackBitMask, u32 chBitMask);
void SND_StartTimer(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
void SND_StopTimer(u32 chBitMask, u32 capBitMask, u32 alarmBitMask, u32 flags);
void SND_LockChannel(u32 chBitMask, u32 flags);
void SND_UnlockChannel(u32 chBitMask, u32 flags);
void SND_StopUnlockedChannel(u32 chBitMask, u32 flags);
void SND_SetupChannelPcm(int chNo, SNDWaveFormat format, const void *dataAddr, SNDChannelLoop loop, int loopStart, int dataLen,
                         int volume, SNDChannelDataShift shift, int timer, int pan);
void SND_SetupChannelPsg(int chNo, SNDDuty duty, int volume, SNDChannelDataShift shift, int timer, int pan);
void SND_SetupChannelNoise(int chNo, int volume, SNDChannelDataShift shift, int timer, int pan);
void SND_SetChannelVolume(u32 chBitMask, int volume, SNDChannelDataShift shift);
void SND_SetChannelTimer(u32 chBitMask, int timer);
void SND_SetChannelPan(u32 chBitMask, int pan);
void SND_SetupCapture(SNDCapture capture, SNDCaptureFormat format, void *buffer_p, u32 length, BOOL loopFlag, SNDCaptureIn in,
                      SNDCaptureOut out);
void SND_SetupAlarm(int alarmNo, u32 tick, u32 period, SNDAlarmHandler handler, void *arg);
void SND_SetMasterVolume(int volume);
void SND_SetOutputSelector(SNDOutput left, SNDOutput right, SNDChannelOut channel1, SNDChannelOut channel3);
void SND_SetMasterPan(int pan);
void SND_ResetMasterPan(void);
void SND_InvalidateSeqData(const void *start, const void *end);
void SND_InvalidateBankData(const void *start, const void *end);
void SND_InvalidateWaveData(const void *start, const void *end);
void SND_ReadDriverInfo(struct SNDDriverInfo *info);
void SNDi_SetPlayerParam(int playerNo, u32 offset, u32 data, int size);
void SNDi_SetTrackParam(int playerNo, u32 trackBitMask, u32 offset, u32 data, int size);
void SNDi_SkipSeq(int playerNo, u32 tick);
void SNDi_SetSurroundDecay(int decay);
typedef struct SNDWork {
    SNDExChannel channel[16];
    SNDPlayer player[16];
    SNDTrack track[32];
    SNDAlarm alarm[8];
} SNDWork;
typedef struct SNDSharedWork {
    vu32 finishCommandTag;
    vu32 playerStatus;
    vu16 channelStatus;
    vu16 captureStatus;
    vu32 padding[5];
    struct {
        vs16 variable[16];
        vu32 tickCounter;
    } player[16];
    vs16 globalVariable[16];
} SNDSharedWork;
typedef struct SNDSpReg {
    u32 chCtrl[16];
} SNDSpReg;
typedef struct SNDDriverInfo {
    SNDWork work;
    u32 chCtrl[16];
    SNDWork *workAddress;
    u32 lockedChannels;
    u32 padding[6];
} SNDDriverInfo;
typedef struct SNDChannelInfo {
    BOOL activeFlag : 1;
    BOOL lockFlag : 1;
    u16 volume;
    u8 pan;
    u8 pad_;
    SNDEnvStatus envStatus;
} SNDChannelInfo;
typedef struct SNDPlayerInfo {
    BOOL activeFlag : 1;
    BOOL pauseFlag : 1;
    u16 trackBitMask;
    u16 tempo;
    u8 volume;
    u8 pad_;
    u16 pad2_;
} SNDPlayerInfo;
typedef struct SNDTrackInfo {
    u16 prgNo;
    u8 volume;
    u8 volume2;
    s8 pitchBend;
    u8 bendRange;
    u8 pan;
    s8 transpose;
    u8 pad_;
    u8 chCount;
    u8 channel[16];
} SNDTrackInfo;
extern SNDSharedWork *SNDi_SharedWork;
s16 SND_GetPlayerLocalVariable(int playerNo, int varNo);
s16 SND_GetPlayerGlobalVariable(int varNo);
u32 SND_GetPlayerTickCounter(int playerNo);
u32 SND_GetPlayerStatus(void);
u32 SND_GetChannelStatus(void);
u32 SND_GetCaptureStatus(void);
BOOL SND_ReadChannelInfo(const SNDDriverInfo *driverInfo, int chNo, SNDChannelInfo *chInfo);
BOOL SND_ReadPlayerInfo(const SNDDriverInfo *driverInfo, int playerNo, SNDPlayerInfo *playerInfo);
BOOL SND_ReadTrackInfo(const SNDDriverInfo *driverInfo, int playerNo, int trackNo, SNDTrackInfo *trackInfo);
u32 SNDi_GetFinishedCommandTag(void);
void SNDi_InitSharedWork(SNDSharedWork *work);
typedef struct SNDBinaryFileHeader {
    char signature[4];
    u16 byteOrder;
    u16 version;
    u32 fileSize;
    u16 headerSize;
    u16 dataBlocks;
} SNDBinaryFileHeader;
typedef struct SNDBinaryBlockHeader {
    u32 kind;
    u32 size;
} SNDBinaryBlockHeader;
struct SNDWaveArc;
struct SNDExChannel;
typedef enum SNDInstType {
    SND_INST_INVALID = 0,
    SND_INST_PCM     = 0x01,
    SND_INST_PSG,
    SND_INST_NOISE,
    SND_INST_DIRECTPCM,
    SND_INST_NULL,
    SND_INST_DRUM_SET = 0x10,
    SND_INST_KEY_SPLIT
} SNDInstType;
typedef struct SNDWaveArcLink {
    struct SNDWaveArc *waveArc;
    struct SNDWaveArcLink *next;
} SNDWaveArcLink;
typedef struct SNDWaveArc {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    struct SNDWaveArcLink *topLink;
    u32 reserved[7];
    u32 waveCount;
    u32 waveOffset[0];
} SNDWaveArc;
typedef struct SNDWaveData {
    struct SNDWaveParam param;
    u8 samples[0];
} SNDWaveData;
typedef struct SNDBankData {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    struct SNDWaveArcLink waveArcLink[4];
    u32 instCount;
    u32 instOffset[0];
} SNDBankData;
typedef struct SNDInstParam {
    u16 wave[2];
    u8 original_key;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
    u8 pan;
} SNDInstParam;
typedef struct SNDInstData {
    u8 type;
    u8 padding_;
    struct SNDInstParam param;
} SNDInstData;
typedef struct SNDKeySplit {
    u8 key[8];
    struct SNDInstData instOffset[0];
} SNDKeySplit;
typedef struct SNDDrumSet {
    u8 min;
    u8 max;
    struct SNDInstData instOffset[0];
} SNDDrumSet;
typedef struct SNDInstPos {
    u32 prgNo;
    u32 index;
} SNDInstPos;
void SND_AssignWaveArc(struct SNDBankData *bank, int index, struct SNDWaveArc *waveArc);
void SND_DestroyBank(struct SNDBankData *bank);
void SND_DestroyWaveArc(struct SNDWaveArc *waveArc);
BOOL SND_ReadInstData(const struct SNDBankData *bank, int prgNo, int key, struct SNDInstData *inst);
BOOL SND_WriteInstData(struct SNDBankData *bank, int prgNo, int key, const struct SNDInstData *inst);
struct SNDInstPos SND_GetFirstInstDataPos(const struct SNDBankData *bank);
BOOL SND_GetNextInstData(const struct SNDBankData *bank, struct SNDInstData *inst, struct SNDInstPos *pos);
u32 SND_GetWaveDataCount(const struct SNDWaveArc *waveArc);
void SND_SetWaveDataAddress(struct SNDWaveArc *waveArc, int index, const SNDWaveData *address);
const SNDWaveData *SND_GetWaveDataAddress(const struct SNDWaveArc *waveArc, int index);
struct SNDBankData;
typedef struct SNDMidiChannel {
    struct SNDExChannel *chp;
    u8 key;
    u8 pad1;
    u16 pad2;
} SNDMidiChannel;
typedef struct SNDMidiTrack {
    struct SNDMidiChannel channels[16];
    SNDLfoParam mod;
    s16 sweep_pitch;
    u16 prgNo;
    s8 pitchbend;
    u8 porta_time;
    u8 volume;
    s8 pan;
    u8 expression;
    s8 transpose;
    u8 prio;
    u8 bendrange;
    u8 porta_flag;
    u8 porta_key;
    u8 attack;
    u8 decay;
    u8 sustain;
    u8 release;
} SNDMidiTrack;
typedef struct SNDMidiPlayer {
    const struct SNDBankData *bank;
    SNDMidiTrack track[16];
    u8 main_volume;
    u8 prio;
    u16 pad;
} SNDMidiPlayer;
extern const s16 SNDi_DecibelTable[128];
extern const s16 SNDi_DecibelSquareTable[128];
static inline s16 SND_CalcDecibel(int scale) {
    return SNDi_DecibelTable[scale];
}
static inline s16 SND_CalcDecibelSquare(int scale) {
    return SNDi_DecibelSquareTable[scale];
}
u16 SND_CalcTimer(int orgTimer, int pitch);
u16 SND_CalcChannelVolume(int dB);
struct NNSSndHeap;
typedef void (*NNSSndHeapDisposeCallback)(void *mem, u32 size, u32 data1, u32 data2);
typedef struct NNSSndHeap *NNSSndHeapHandle;
NNSSndHeapHandle NNS_SndHeapCreate(void *startAddress, u32 size);
void NNS_SndHeapDestroy(NNSSndHeapHandle heap);
void *NNS_SndHeapAlloc(NNSSndHeapHandle heap, u32 size, NNSSndHeapDisposeCallback callback, u32 data1, u32 data2);
void NNS_SndHeapClear(NNSSndHeapHandle heap);
int NNS_SndHeapSaveState(NNSSndHeapHandle heap);
void NNS_SndHeapLoadState(NNSSndHeapHandle heap, int level);
int NNS_SndHeapGetCurrentLevel(NNSSndHeapHandle heap);
u32 NNS_SndHeapGetSize(NNSSndHeapHandle heap);
u32 NNS_SndHeapGetFreeSize(NNSSndHeapHandle heap);
typedef enum SPIDeviceType {
    SPI_DEVICE_TYPE_TP = 0,
    SPI_DEVICE_TYPE_NVRAM,
    SPI_DEVICE_TYPE_MIC,
    SPI_DEVICE_TYPE_PM,
    SPI_DEVICE_TYPE_ARM7,
    SPI_DEVICE_TYPE_MAX
} SPIDeviceType;
typedef enum SPITpTouch {
    SPI_TP_TOUCH_OFF = 0,
    SPI_TP_TOUCH_ON
} SPITpTouch;
typedef enum SPITpValidity {
    SPI_TP_VALIDITY_VALID = 0,
    SPI_TP_VALIDITY_INVALID_X,
    SPI_TP_VALIDITY_INVALID_Y,
    SPI_TP_VALIDITY_INVALID_XY
} SPITpValidity;
typedef union SPITpData {
    struct {
        u32 x : 12;
        u32 y : 12;
        u32 touch : 1;
        u32 validity : 2;
        u32 dummy : 5;
    } e;
    u32 raw;
    u8 bytes[4];
    u16 halfs[2];
} SPITpData;
typedef u32 PMWakeUpTrigger;
typedef u32 PMLogic;
enum {
    PM_UTIL_DUMMY = 0,
    PM_UTIL_LED_ON,
    PM_UTIL_LED_BLINK_HIGH_SPEED,
    PM_UTIL_LED_BLINK_LOW_SPEED,
    PM_UTIL_LCD1_BACKLIGHT_ON,
    PM_UTIL_LCD1_BACKLIGHT_OFF,
    PM_UTIL_LCD2_BACKLIGHT_ON,
    PM_UTIL_LCD2_BACKLIGHT_OFF,
    PM_UTIL_LCD12_BACKLIGHT_ON,
    PM_UTIL_LCD12_BACKLIGHT_OFF,
    PM_UTIL_SOUND_POWER_ON,
    PM_UTIL_SOUND_POWER_OFF,
    PM_UTIL_SOUND_VOL_CTRL_ON,
    PM_UTIL_SOUND_VOL_CTRL_OFF,
    PM_UTIL_FORCE_POWER_OFF,
    PM_UTIL_FORCE_POWER_ON
};
typedef enum {
    PM_LED_PATTERN_NONE       = 0,
    PM_LED_PATTERN_ON         = 1,
    PM_LED_PATTERN_BLINK_LOW  = 2,
    PM_LED_PATTERN_BLINK_HIGH = 3,
    PM_LED_PATTERN_BLINK1     = 4,
    PM_LED_PATTERN_BLINK2     = 5,
    PM_LED_PATTERN_BLINK3     = 6,
    PM_LED_PATTERN_BLINK4     = 7,
    PM_LED_PATTERN_BLINK5     = 8,
    PM_LED_PATTERN_BLINK6     = 9,
    PM_LED_PATTERN_BLINK8     = 10,
    PM_LED_PATTERN_BLINK10    = 11,
    PM_LED_PATTERN_PATTERN1   = 12,
    PM_LED_PATTERN_PATTERN2   = 13,
    PM_LED_PATTERN_PATTERN3   = 14,
    PM_LED_PATTERN_WIRELESS   = 15
} PMLEDPattern;
typedef enum {
    PM_LED_NONE       = 0,
    PM_LED_ON         = 1,
    PM_LED_BLINK_LOW  = 2,
    PM_LED_BLINK_HIGH = 3
} PMLEDStatus;
typedef enum MICResult {
    MIC_RESULT_SUCCESS = 0,
    MIC_RESULT_BUSY,
    MIC_RESULT_ILLEGAL_PARAMETER,
    MIC_RESULT_SEND_ERROR,
    MIC_RESULT_INVALID_COMMAND,
    MIC_RESULT_ILLEGAL_STATUS,
    MIC_RESULT_FATAL_ERROR,
    MIC_RESULT_MAX
} MICResult;
typedef enum MICSamplingType {
    MIC_SAMPLING_TYPE_8BIT = 0,
    MIC_SAMPLING_TYPE_12BIT,
    MIC_SAMPLING_TYPE_SIGNED_8BIT,
    MIC_SAMPLING_TYPE_SIGNED_12BIT,
    MIC_SAMPLING_TYPE_12BIT_FILTER_OFF,
    MIC_SAMPLING_TYPE_SIGNED_12BIT_FILTER_OFF,
    MIC_SAMPLING_TYPE_MAX
} MICSamplingType;
typedef enum MICSamplingRate {
    MIC_SAMPLING_RATE_8K    = (33513982 / 8000),
    MIC_SAMPLING_RATE_11K   = (33513982 / 11025),
    MIC_SAMPLING_RATE_16K   = (33513982 / 16000),
    MIC_SAMPLING_RATE_22K   = (33513982 / 22050),
    MIC_SAMPLING_RATE_32K   = (33513982 / 32000),
    MIC_SAMPLING_RATE_LIMIT = 1024
} MICSamplingRate;
typedef void (*MICCallback)(MICResult result, void *arg);
typedef struct MICAutoParam {
    MICSamplingType type;
    void *buffer;
    u32 size;
    u32 rate;
    BOOL loop_enable;
    MICCallback full_callback;
    void *full_arg;
} MICAutoParam;
void MIC_Init(void);
void *MIC_GetLastSamplingAddress(void);
typedef void (*PMCallback)(u32 result, void *arg);
typedef void (*PMSleepCallback)(void *);
typedef enum {
    PM_LCD_TOP    = 0,
    PM_LCD_BOTTOM = 1,
    PM_LCD_ALL    = 2
} PMLCDTarget;
typedef enum {
    PM_BACKLIGHT_OFF = 0,
    PM_BACKLIGHT_ON  = 1
} PMBackLightSwitch;
typedef enum {
    PM_BATTERY_HIGH = 0,
    PM_BATTERY_LOW  = 1
} PMBattery;
typedef enum {
    PM_AMP_OFF = 0,
    PM_AMP_ON  = 1
} PMAmpSwitch;
typedef enum {
    PM_AMPGAIN_20      = 0,
    PM_AMPGAIN_40      = 1,
    PM_AMPGAIN_80      = 2,
    PM_AMPGAIN_160     = 3,
    PM_AMPGAIN_DEFAULT = PM_AMPGAIN_40
} PMAmpGain;
typedef enum {
    PM_LCD_POWER_OFF = 0,
    PM_LCD_POWER_ON  = 1
} PMLCDPower;
typedef enum {
    PM_SOUND_POWER_OFF = 0,
    PM_SOUND_POWER_ON  = 1
} PMSoundPowerSwitch;
typedef enum {
    PM_SOUND_VOLUME_OFF = 0,
    PM_SOUND_VOLUME_ON  = 1
} PMSoundVolumeSwitch;
typedef struct {
    u16 flag;
    u16 padding;
    u16 *buffer;
} PMData16;
typedef struct PMiSleepCallbackInfo PMSleepCallbackInfo;
struct PMiSleepCallbackInfo {
    PMSleepCallback callback;
    void *arg;
    PMSleepCallbackInfo *next;
};
void PM_Init(void);
u32 PM_SendUtilityCommandAsync(u32 number, PMCallback callback, void *arg);
u32 PM_SendUtilityCommand(u32 number);
u32 PM_SetBackLightAsync(PMLCDTarget target, PMBackLightSwitch sw, PMCallback callback, void *arg);
u32 PM_SetBackLight(PMLCDTarget target, PMBackLightSwitch status);
u32 PM_ForceToPowerOffAsync(PMCallback callback, void *arg);
u32 PM_ForceToPowerOff(void);
u32 PM_SetAmpAsync(PMAmpSwitch sw, PMCallback callback, void *arg);
u32 PM_SetAmp(PMAmpSwitch sw);
u32 PM_SetAmpGainAsync(PMAmpGain gain, PMCallback callback, void *arg);
u32 PM_SetAmpGain(PMAmpGain gain);
u32 PM_GetBattery(PMBattery *batteryBuf);
u32 PM_GetBackLight(PMBackLightSwitch *top, PMBackLightSwitch *bottom);
u32 PM_GetAmp(PMAmpSwitch *swBuf);
u32 PM_GetAmpGain(PMAmpGain *gainBuf);
void PM_GoSleepMode(PMWakeUpTrigger trigger, PMLogic logic, u16 keyPattern);
void PM_AppendPreSleepCallback(PMSleepCallbackInfo *info);
void PM_PrependPreSleepCallback(PMSleepCallbackInfo *info);
void PM_AppendPostSleepCallback(PMSleepCallbackInfo *info);
void PM_PrependPostSleepCallback(PMSleepCallbackInfo *info);
void PM_DeletePreSleepCallback(PMSleepCallbackInfo *info);
void PM_DeletePostSleepCallback(PMSleepCallbackInfo *info);
BOOL PM_SetLCDPower(PMLCDPower sw);
PMLCDPower PM_GetLCDPower(void);
u32 PMi_SendLEDPatternCommandAsync(PMLEDPattern pattern, PMCallback callback, void *arg);
u32 PMi_SendLEDPatternCommand(PMLEDPattern pattern);
u32 PM_GetLEDPatternAsync(PMLEDPattern *patternBuf, PMCallback callback, void *arg);
u32 PM_GetLEDPattern(PMLEDPattern *patternBuf);
BOOL PMi_SetLCDPower(PMLCDPower sw, PMLEDStatus led, BOOL skip, BOOL isSync);
u32 PMi_SetSoundPowerAsync(PMSoundPowerSwitch sw, PMCallback callback, void *arg);
u32 PMi_SetSoundPower(PMSoundPowerSwitch sw);
u32 PMi_SetSoundVolumeAsync(PMSoundVolumeSwitch sw, PMCallback callback, void *arg);
u32 PMi_SetSoundVolume(PMSoundVolumeSwitch sw);
u32 PMi_GetSoundPower(PMSoundPowerSwitch *swBuf);
u32 PMi_GetSoundVolume(PMSoundVolumeSwitch *swBuf);
void PMi_SendPxiData(u32 data);
void PMi_CommonCallback(PXIFifoTag tag, u32 data, BOOL err);
u32 PMi_SendSleepStart(u16 trigger, u16 keyIntrData);
u32 PMi_DisposeSleepEnd(void);
u32 PMi_ReadRegisterAsync(u16 registerAddr, u16 *buffer, PMCallback callback, void *arg);
u32 PMi_ReadRegister(u16 registerAddr, u16 *buffer);
u32 PMi_WriteRegisterAsync(u16 registerAddr, u16 data, PMCallback callback, void *arg);
u32 PMi_WriteRegister(u16 registerAddr, u16 data);
u32 PMi_SetLEDAsync(PMLEDStatus status, PMCallback callback, void *arg);
u32 PMi_SetLED(PMLEDStatus status);
u32 PMi_GetLCDOffCount(void);
static inline void PM_SetSleepCallbackInfo(PMSleepCallbackInfo *info, PMSleepCallback callback, void *arg) {
    info->callback = callback;
    info->arg      = arg;
}
static inline u32 PM_SetLEDPatternAsync(PMLEDPattern pattern, PMCallback callback, void *arg) {
    return PMi_SendLEDPatternCommandAsync(pattern, callback, arg);
}
static inline u32 PM_SetLEDPattern(PMLEDPattern pattern) {
    return PMi_SendLEDPatternCommand(pattern);
}
typedef enum {
    TP_REQUEST_COMMAND_SAMPLING      = 0x0,
    TP_REQUEST_COMMAND_AUTO_ON       = 0x1,
    TP_REQUEST_COMMAND_AUTO_OFF      = 0x2,
    TP_REQUEST_COMMAND_SET_STABILITY = 0x3,
    TP_REQUEST_COMMAND_AUTO_SAMPLING = 0x10
} TPRequestCommand;
typedef enum {
    TP_REQUEST_COMMAND_FLAG_SAMPLING      = 1 << TP_REQUEST_COMMAND_SAMPLING,
    TP_REQUEST_COMMAND_FLAG_AUTO_ON       = 1 << TP_REQUEST_COMMAND_AUTO_ON,
    TP_REQUEST_COMMAND_FLAG_AUTO_OFF      = 1 << TP_REQUEST_COMMAND_AUTO_OFF,
    TP_REQUEST_COMMAND_FLAG_SET_STABILITY = 1 << TP_REQUEST_COMMAND_SET_STABILITY
} TPRequestCommandFlag;
typedef enum {
    TP_RESULT_SUCCESS = 0,
    TP_RESULT_INVALID_PARAMETER,
    TP_RESULT_ILLEGAL_STATUS,
    TP_RESULT_EXCLUSIVE,
    TP_RESULT_PXI_BUSY
} TPRequestResult;
typedef enum {
    TP_STATE_READY = 0,
    TP_STATE_SAMPLING,
    TP_STATE_AUTO_SAMPLING,
    TP_STATE_AUTO_WAIT_END
} TPState;
typedef struct {
    u16 x;
    u16 y;
    u16 touch;
    u16 validity;
} TPData;
typedef struct NvTpData {
    s16 x0;
    s16 y0;
    s16 xDotSize;
    s16 yDotSize;
} TPCalibrateParam;
typedef void (*TPRecvCallback)(TPRequestCommand command, TPRequestResult result, u16 index);
void TP_Init(void);
BOOL TP_GetUserInfo(TPCalibrateParam *calibrate);
void TP_SetCalibrateParam(const TPCalibrateParam *param);
void TP_SetCallback(TPRecvCallback callback);
void TP_RequestSamplingAsync(void);
u32 TP_WaitRawResult(TPData *result);
u32 TP_GetCalibratedResult(TPData *result);
u32 TP_WaitCalibratedResult(TPData *result);
void TP_RequestAutoSamplingStartAsync(u16 vcount, u16 frequence, TPData samplingBufs[], u16 bufSize);
void TP_RequestAutoSamplingStopAsync(void);
void TP_RequestSetStabilityAsync(u8 retry, u16 range);
void TP_GetLatestRawPointInAuto(TPData *result);
void TP_GetLatestCalibratedPointInAuto(TPData *result);
u16 TP_GetLatestIndexInAuto(void);
u32 TP_CalcCalibrateParam(TPCalibrateParam *calibrate, u16 raw_x1, u16 raw_y1, u16 dx1, u16 dy1, u16 raw_x2, u16 raw_y2,
                          u16 dx2, u16 dy2);
void TP_GetCalibratedPoint(TPData *disp, const TPData *raw);
void TP_GetUnCalibratedPoint(u16 *raw_x, u16 *raw_y, u16 dx, u16 dy);
void TP_WaitBusy(TPRequestCommandFlag command_flgs);
void TP_WaitAllBusy(void);
u32 TP_CheckBusy(TPRequestCommandFlag command_flgs);
u32 TP_CheckError(TPRequestCommandFlag command_flgs);
static inline u32 TP_RequestSetStability(u8 retry, u16 range) {
    TP_RequestSetStabilityAsync(retry, range);
    TP_WaitBusy(TP_REQUEST_COMMAND_FLAG_SET_STABILITY);
    return TP_CheckError(TP_REQUEST_COMMAND_FLAG_SET_STABILITY);
}
static inline u32 TP_RequestAutoSamplingStart(u16 vcount, u16 frequence, TPData samplingBufs[], u16 bufSize) {
    TP_RequestAutoSamplingStartAsync(vcount, frequence, samplingBufs, bufSize);
    TP_WaitBusy(TP_REQUEST_COMMAND_FLAG_AUTO_ON);
    return TP_CheckError(TP_REQUEST_COMMAND_FLAG_AUTO_ON);
}
static inline u32 TP_RequestAutoSamplingStop(void) {
    TP_RequestAutoSamplingStopAsync();
    TP_WaitBusy(TP_REQUEST_COMMAND_FLAG_AUTO_OFF);
    return TP_CheckError(TP_REQUEST_COMMAND_FLAG_AUTO_OFF);
}
static inline u32 TP_RequestRawSampling(TPData *result) {
    TP_RequestSamplingAsync();
    return TP_WaitRawResult(result);
}
static inline u32 TP_RequestCalibratedSampling(TPData *result) {
    TP_RequestSamplingAsync();
    return TP_WaitCalibratedResult(result);
}
typedef enum NNSSndStrmFormat {
    NNS_SND_STRM_FORMAT_PCM8,
    NNS_SND_STRM_FORMAT_PCM16
} NNSSndStrmFormat;
typedef enum NNSSndStrmCallbackStatus {
    NNS_SND_STRM_CALLBACK_SETUP,
    NNS_SND_STRM_CALLBACK_INTERVAL
} NNSSndStrmCallbackStatus;
typedef void (*NNSSndStrmCallback)(NNSSndStrmCallbackStatus status, int numChannles, void *buffer[], u32 len,
                                   NNSSndStrmFormat format, void *arg);
typedef struct NNSSndStrm {
    NNSFndLink link;
    PMSleepCallbackInfo preSleepInfo;
    PMSleepCallbackInfo postSleepInfo;
    NNSSndStrmFormat format;
    BOOL activeFlag : 1;
    BOOL startFlag : 1;
    u32 chBufLen;
    int interval;
    NNSSndStrmCallback callback;
    void *callbackArg;
    int curBuffer;
    int volume;
    int alarmNo;
    u32 chBitMask;
    int numChannels;
    u8 channelNo[16];
} NNSSndStrm;
void NNS_SndStrmInit(NNSSndStrm *stream);
BOOL NNS_SndStrmAllocChannel(NNSSndStrm *stream, int numChannels, const u8 chNoList[]);
void NNS_SndStrmFreeChannel(NNSSndStrm *stream);
BOOL NNS_SndStrmSetup(NNSSndStrm *stream, NNSSndStrmFormat format, void *buffer, u32 bufSize, int timer, int interval,
                      NNSSndStrmCallback callback, void *arg);
void NNS_SndStrmStart(NNSSndStrm *stream);
void NNS_SndStrmStop(NNSSndStrm *stream);
void NNS_SndStrmSetVolume(NNSSndStrm *stream, int volume);
void NNS_SndStrmSetChannelVolume(NNSSndStrm *stream, int chNo, int volume);
void NNS_SndStrmSetChannelPan(NNSSndStrm *stream, int chNo, int pan);
inline void NNS_SndStrmBeginSleep(NNSSndStrm *stream) {}
inline void NNS_SndStrmEndSleep(NNSSndStrm *stream) {}
struct NNSSndStrmPlayer;
typedef enum NNSSndArcStrmCallbackStatus {
    NNS_SND_ARC_STRM_CALLBACK_DATA_END
} NNSSndArcStrmCallbackStatus;
typedef struct NNSSndArcStrmCallbackInfo {
    int playerNo;
    int strmNo;
} NNSSndArcStrmCallbackInfo;
typedef struct NNSSndArcStrmCallbackParam {
    int strmNo;
    u32 offset;
} NNSSndArcStrmCallbackParam;
typedef BOOL (*NNSSndArcStrmCallback)(NNSSndArcStrmCallbackStatus status, const NNSSndArcStrmCallbackInfo *info,
                                      NNSSndArcStrmCallbackParam *param, void *arg);
typedef struct NNSSndStrmHandle {
    struct NNSSndStrmPlayer *player;
} NNSSndStrmHandle;
typedef struct NNSSndStrmThread {
    OSThread thread;
    u64 stack[1024 / sizeof(u64)];
    OSThreadQueue threadQ;
    OSMutex mutex;
    NNSFndList commandList;
} NNSSndStrmThread;
inline BOOL NNS_SndStrmHandleIsValid(const NNSSndStrmHandle *handle) {
    return handle->player != 0;
}
void NNS_SndArcStrmInit(u32 threadPrio, NNSSndHeapHandle heap);
BOOL NNS_SndArcStrmSetupPlayer(NNSSndHeapHandle heap);
void NNS_SndArcStrmCreatePrepareThread(NNSSndStrmThread *thread, u32 threadPrio);
BOOL NNS_SndArcStrmStart(struct NNSSndStrmHandle *handle, int strmNo, u32 offset);
void NNS_SndArcStrmStop(struct NNSSndStrmHandle *handle, int fadeFrame);
void NNS_SndArcStrmStopAll(int fadeFrame);
BOOL NNS_SndArcStrmPrepare(struct NNSSndStrmHandle *handle, int strmNo, u32 offset);
void NNS_SndArcStrmStartPrepared(struct NNSSndStrmHandle *handle);
BOOL NNS_SndArcStrmIsPrepared(struct NNSSndStrmHandle *handle);
BOOL NNS_SndArcStrmStartEx(struct NNSSndStrmHandle *handle, int playerNo, int playerPrio, int strmNo, u32 offset);
BOOL NNS_SndArcStrmPrepareEx(struct NNSSndStrmHandle *handle, int playerNo, int playerPrio, int strmNo, u32 offset);
BOOL NNS_SndArcStrmStartEx2(struct NNSSndStrmHandle *handle, int playerNo, int playerPrio, int strmNo, u32 offset,
                            NNSSndStrmCallback strmCallback, void *strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback,
                            void *sndArcStrmCallbackArg);
BOOL NNS_SndArcStrmPrepareEx2(struct NNSSndStrmHandle *handle, int playerNo, int playerPrio, int strmNo, u32 offset,
                              NNSSndStrmCallback strmCallback, void *strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback,
                              void *sndArcStrmCallbackArg);
BOOL NNS_SndArcStrmAllocChannel(int playerNo);
void NNS_SndArcStrmFreeChannel(int playerNo);
void NNS_SndArcStrmMoveVolume(struct NNSSndStrmHandle *handle, int volume, int frames);
void NNS_SndArcStrmSetChannelVolume(struct NNSSndStrmHandle *handle, int chNo, int volume);
void NNS_SndArcStrmSetChannelPan(struct NNSSndStrmHandle *handle, int chNo, int pan);
u32 NNS_SndArcStrmGetTimeLength(struct NNSSndStrmHandle *handle);
u32 NNS_SndArcStrmGetCurrentPlayingPos(struct NNSSndStrmHandle *handle);
int NNS_SndArcStrmGetChannelCount(struct NNSSndStrmHandle *handle);
void NNS_SndStrmHandleInit(struct NNSSndStrmHandle *handle);
void NNS_SndStrmHandleRelease(struct NNSSndStrmHandle *handle);
void NNSi_SndArcStrmMain(void);
void NNSi_SndArcStrmSetPlayerBuffer(int playerNo, void *buffer, u32 len);
void NNSi_SndArcStrmSetDecodeBuffer(void *buffer, u32 len);
void NNSi_SndArcStrmStopByChannel(u32 chBitMask);
OSThread *NNSi_SndArcStrmGetThread(void);
typedef enum {
    MI_WRAM_ARM9_ALL = 0 << 0,
    MI_WRAM_1616_1   = 1 << 0,
    MI_WRAM_1616_2   = 2 << 0,
    MI_WRAM_ARM7_ALL = 3 << 0
} MIWram;
void MI_SetWramBank(MIWram cnt);
void MIi_CpuClear16(u16 data, void *destp, u32 size);
void MIi_CpuCopy16(const void *srcp, void *destp, u32 size);
void MIi_CpuClear32(u32 data, void *destp, u32 size);
void MIi_CpuCopy32(const void *srcp, void *destp, u32 size);
void MIi_CpuSend32(const void *srcp, volatile void *destp, u32 size);
void MIi_CpuClearFast(u32 data, void *destp, u32 size);
void MIi_CpuCopyFast(const void *srcp, void *destp, u32 size);
void MI_Copy32B(const void *pSrc, void *pDest);
void MI_Copy36B(const void *pSrc, void *pDest);
void MI_Copy48B(const void *pSrc, void *pDest);
void MI_Copy64B(const void *pSrc, void *pDest);
void MI_CpuFill8(void *dstp, u8 data, u32 size);
void MI_CpuCopy8(const void *srcp, void *dstp, u32 size);
void MI_Zero36B(void *pDest);
static inline void MI_CpuClear8(void *dest, u32 size) {
    MI_CpuFill8(dest, 0, size);
}
static inline void MI_CpuCopy16(const void *src, void *dest, u32 size) {
    MIi_CpuCopy16(src, dest, size);
}
static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    MIi_CpuClear16(data, dest, size);
}
static inline void MI_CpuClear16(void *dest, u32 size) {
    MI_CpuFill16(dest, 0, size);
}
static inline void MI_CpuCopy32(const void *src, void *dest, u32 size) {
    MIi_CpuCopy32(src, dest, size);
}
static inline void MI_CpuFill32(void *dest, u32 data, u32 size) {
    MIi_CpuClear32(data, dest, size);
}
static inline void MI_CpuClear32(void *dest, u32 size) {
    MI_CpuFill32(dest, 0, size);
}
static inline void MI_CpuSend32(const void *src, volatile void *dest, u32 size) {
    MIi_CpuSend32(src, dest, size);
}
static inline void MI_CpuCopyFast(const void *src, void *dest, u32 size) {
    MIi_CpuCopyFast(src, dest, size);
}
static inline void MI_CpuFillFast(void *dest, u32 data, u32 size) {
    MIi_CpuClearFast(data, dest, size);
}
static inline void MI_CpuClearFast(void *dest, u32 size) {
    MI_CpuFillFast(dest, 0, size);
}
u32 MI_SwapWord(u32 setData, vu32 *destp);
static inline u8 MI_ReadByte(const void *address) {
    return *(u8 *) address;
}
static inline void MI_WriteByte(void *address, u8 value) {
    *(u8 *) address = value;
}
static inline u8 MI_LoadLE8(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u8) ((src[0] << 0UL));
}
static inline u16 MI_LoadLE16(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u16) ((src[0] << 0UL) | (src[1] << 8UL));
}
static inline u32 MI_LoadLE32(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u32) ((src[0] << 0UL) | (src[1] << 8UL) | (src[2] << 16UL) | (src[3] << 24UL));
}
static inline u8 MI_LoadBE8(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u8) ((src[0] << 0UL));
}
static inline u16 MI_LoadBE16(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u16) ((src[0] << 8UL) | (src[1] << 0UL));
}
static inline u32 MI_LoadBE32(const void *ptr) {
    const u8 *src = (const u8 *) ptr;
    return (u32) ((src[0] << 24UL) | (src[1] << 16UL) | (src[2] << 8UL) | (src[3] << 0UL));
}
static inline void MI_StoreLE8(void *ptr, u8 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 0UL);
}
static inline void MI_StoreLE16(void *ptr, u16 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 0UL);
    src[1]  = (u8) (val >> 8UL);
}
static inline void MI_StoreLE32(void *ptr, u32 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 0UL);
    src[1]  = (u8) (val >> 8UL);
    src[2]  = (u8) (val >> 16UL);
    src[3]  = (u8) (val >> 24UL);
}
static inline void MI_StoreBE8(void *ptr, u8 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 0UL);
}
static inline void MI_StoreBE16(void *ptr, u16 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 8UL);
    src[1]  = (u8) (val >> 0UL);
}
static inline void MI_StoreBE32(void *ptr, u32 val) {
    u8 *src = (u8 *) ptr;
    src[0]  = (u8) (val >> 24UL);
    src[1]  = (u8) (val >> 16UL);
    src[2]  = (u8) (val >> 8UL);
    src[3]  = (u8) (val >> 0UL);
}
void MI_Init(void);
typedef struct NNSSndSeqParam {
    u16 bankNo;
    u8 volume;
    u8 channelPrio;
    u8 playerPrio;
    u8 playerNo;
    u16 reserved;
} NNSSndSeqParam;
typedef struct NNSSndSeqArcSeqInfo {
    u32 offset;
    struct NNSSndSeqParam param;
} NNSSndSeqArcSeqInfo;
typedef struct NNSSndSeqArc {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    u32 baseOffset;
    u32 count;
    NNSSndSeqArcSeqInfo info[0];
} NNSSndSeqArc;
typedef struct NNSSndSeqData {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    u32 baseOffset;
    u32 data[0];
} NNSSndSeqData;
u32 NNSi_SndSeqArcGetSeqCount(const struct NNSSndSeqArc *seqArc);
const NNSSndSeqArcSeqInfo *NNSi_SndSeqArcGetSeqInfo(const struct NNSSndSeqArc *seqArc, int seqNo);
typedef enum NNSSndArcSndType {
    NNS_SNDARC_SNDTYPE_SEQ,
    NNS_SNDARC_SNDTYPE_BANK,
    NNS_SNDARC_SNDTYPE_WAVEARC,
    NNS_SNDARC_SNDTYPE_SEQARC,
    NNS_SNDARC_SNDTYPE_INVALID = 0xff
} NNSSndArcSndType;
typedef struct NNSSndArcSeqInfo {
    u32 fileId;
    struct NNSSndSeqParam param;
} NNSSndArcSeqInfo;
typedef struct NNSSndArcSeqArcInfo {
    u32 fileId;
} NNSSndArcSeqArcInfo;
typedef struct NNSSndArcBankInfo {
    u32 fileId;
    u16 waveArcNo[4];
} NNSSndArcBankInfo;
typedef struct NNSSndArcWaveArcInfo {
    u32 fileId : 24;
    u32 flags : 8;
} NNSSndArcWaveArcInfo;
typedef struct NNSSndArcStrmInfo {
    u32 fileId;
    u8 volume;
    u8 playerPrio;
    u8 playerNo;
    u8 flags;
} NNSSndArcStrmInfo;
typedef struct NNSSndArcPlayerInfo {
    u8 seqMax;
    u8 padding;
    u16 allocChBitFlag;
    u32 heapSize;
} NNSSndArcPlayerInfo;
typedef struct NNSSndArcStrmPlayerInfo {
    u8 numChannels;
    u8 chNoList[2];
} NNSSndArcStrmPlayerInfo;
typedef struct NNSSndArcGroupItem {
    u8 type;
    u8 loadFlag;
    u16 padding;
    u32 index;
} NNSSndArcGroupItem;
typedef struct NNSSndArcGroupInfo {
    u32 count;
    struct NNSSndArcGroupItem item[0];
} NNSSndArcGroupInfo;
typedef struct NNSSndArcSeqArcOffset {
    u32 symbol;
    u32 table;
} NNSSndArcSeqArcOffset;
typedef struct NNSSndArcSeqArcOffsetTable {
    u32 count;
    NNSSndArcSeqArcOffset offset[0];
} NNSSndArcSeqArcOffsetTable;
typedef struct NNSSndArcOffsetTable {
    u32 count;
    u32 offset[0];
} NNSSndArcOffsetTable;
typedef struct NNSSndArcFileInfo {
    u32 offset;
    u32 size;
    void *mem;
    u32 reserved;
} NNSSndArcFileInfo;
typedef struct NNSSndArcFat {
    struct SNDBinaryBlockHeader blockHeader;
    u32 count;
    NNSSndArcFileInfo files[0];
} NNSSndArcFat;
typedef struct NNSSndArcInfo {
    struct SNDBinaryBlockHeader blockHeader;
    u32 seqOffset;
    u32 seqArcOffset;
    u32 bankOffset;
    u32 waveArcOffset;
    u32 playerInfoOffset;
    u32 groupInfoOffset;
    u32 strmPlayerInfoOffset;
    u32 strmOffset;
} NNSSndArcInfo;
typedef struct NNSSndArcSymbol {
    struct SNDBinaryBlockHeader blockHeader;
    u32 seqOffset;
    u32 seqArcOffset;
    u32 bankOffset;
    u32 waveArcOffset;
    u32 playerOffset;
    u32 groupOffset;
    u32 strmPlayerOffset;
    u32 strmOffset;
} NNSSndArcSymbol;
typedef struct NNSSndArcHeader {
    struct SNDBinaryFileHeader fileHeader;
    u32 symbolDataOffset;
    u32 symbolDataSize;
    u32 infoOffset;
    u32 infoSize;
    u32 fatOffset;
    u32 fatSize;
    u32 fileImageOffset;
    u32 fileImageSize;
} NNSSndArcHeader;
typedef struct NNSSndArc {
    NNSSndArcHeader header;
    BOOL file_open;
    FSFile file;
    FSFileID fileId;
    struct NNSSndArcFat *fat;
    struct NNSSndArcSymbol *symbol;
    struct NNSSndArcInfo *info;
} NNSSndArc;
void NNS_SndArcInit(NNSSndArc *arc, const char *filePath, NNSSndHeapHandle heap, BOOL symbolLoadFlag);
BOOL NNS_SndArcInitWithResult(NNSSndArc *arc, const char *filePath, NNSSndHeapHandle heap, BOOL symbolLoadFlag);
BOOL NNS_SndArcSetup(NNSSndArc *arc, NNSSndHeapHandle heap, BOOL symbolLoadFlag);
void NNS_SndArcInitOnMemory(NNSSndArc *arc, void *data);
NNSSndArc *NNS_SndArcSetCurrent(NNSSndArc *arc);
NNSSndArc *NNS_SndArcGetCurrent(void);
const NNSSndSeqParam *NNS_SndArcGetSeqParam(int seqNo);
const NNSSndSeqParam *NNS_SndArcGetSeqArcParam(int seqArcNo, int index);
const NNSSndArcSeqInfo *NNS_SndArcGetSeqInfo(int seqNo);
const NNSSndArcSeqArcInfo *NNS_SndArcGetSeqArcInfo(int seqNo);
const NNSSndArcBankInfo *NNS_SndArcGetBankInfo(int bankNo);
const NNSSndArcWaveArcInfo *NNS_SndArcGetWaveArcInfo(int waveArcNo);
const NNSSndArcStrmInfo *NNS_SndArcGetStrmInfo(int strmNo);
const NNSSndArcPlayerInfo *NNS_SndArcGetPlayerInfo(int playerNo);
const NNSSndArcGroupInfo *NNS_SndArcGetGroupInfo(int groupNo);
const NNSSndArcStrmPlayerInfo *NNS_SndArcGetStrmPlayerInfo(int playerNo);
u32 NNS_SndArcGetSeqCount(void);
u32 NNS_SndArcGetSeqArcCount(void);
u32 NNS_SndArcGetBankCount(void);
u32 NNS_SndArcGetWaveArcCount(void);
u32 NNS_SndArcGetStrmCount(void);
u32 NNS_SndArcGetGroupCount(void);
u32 NNS_SndArcGetSeqArcSeqCount(int seqArcNo);
s32 NNS_SndArcReadFile(u32 fileId, void *buffer, s32 size, s32 offset);
FSFileID NNS_SndArcGetFileID(void);
u32 NNS_SndArcGetFileSize(u32 fileId);
u32 NNS_SndArcGetFileOffset(u32 fileId);
void *NNS_SndArcGetFileAddress(u32 fileId);
void NNS_SndArcSetFileAddress(u32 fileId, void *address);
const char *NNS_SndArcGetSeqSymbol(int seqNo);
const char *NNS_SndArcGetSeqArcSymbol(int seqArcNo);
const char *NNS_SndArcGetSeqArcIdxSymbol(int seqArcNo, int index);
const char *NNS_SndArcGetBankSymbol(int bankNo);
const char *NNS_SndArcGetWaveArcSymbol(int waveArcNo);
const char *NNS_SndArcGetStrmSymbol(int strmNo);
const char *NNS_SndArcGetGroupSymbol(int groupNo);
typedef struct NNSSndFader {
    int origin;
    int target;
    int counter;
    int frame;
} NNSSndFader;
void NNSi_SndFaderInit(NNSSndFader *fader);
void NNSi_SndFaderSet(NNSSndFader *fader, int target, int frame);
int NNSi_SndFaderGet(const NNSSndFader *fader);
void NNSi_SndFaderUpdate(NNSSndFader *fader);
BOOL NNSi_SndFaderIsFinished(const NNSSndFader *fader);
struct NNSSndStrmPlayer;
typedef BOOL (*OpenStreamFunc)(struct NNSSndStrmPlayer *player, u32 fileId);
typedef void (*CloseStreamFunc)(struct NNSSndStrmPlayer *player);
typedef s32 (*ReadStreamFunc)(struct NNSSndStrmPlayer *player, void *dest, u32 size, u32 offset);
typedef void (*CancelStreamFunc)(struct NNSSndStrmPlayer *player);
typedef enum StrmFormat {
    STRM_FORMAT_PCM8,
    STRM_FORMAT_PCM16,
    STRM_FORMAT_ADPCM
} StrmFormat;
typedef struct NNSSndStrmData {
    struct SNDBinaryFileHeader fileHeader;
    struct SNDBinaryBlockHeader blockHeader;
    u8 format;
    u8 loopFlag;
    u8 numChannels;
    u8 pad_;
    u16 sampleRate;
    u16 timer;
    u32 loopStart;
    u32 loopEnd;
    u32 dataOffset;
    u32 numBlocks;
    u32 blockSize;
    u32 blockSamples;
    u32 lastBlockSize;
    u32 lastBlockSamples;
} NNSSndStrmData;
typedef struct AdpcmState {
    s16 prevSample;
    u8 prevIndex;
    u8 padding;
} AdpcmState;
typedef struct NNSSndStrmPlayer {
    NNSSndStrm stream;
    FSFile file;
    u32 fileOffset;
    NNSSndStrmData info;
    NNSSndFader fader;
    AdpcmState adpcmState[6];
    BOOL activeFlag : 1;
    BOOL playFlag : 1;
    BOOL startFlag : 1;
    BOOL fadeOutFlag : 1;
    BOOL dirtyFlag : 1;
    BOOL finishFlag : 1;
    BOOL monoFlag : 1;
    volatile int finishCounter;
    volatile BOOL prepareFlag;
    volatile int commandCount;
    int allocChannelCount;
    u8 numChannels;
    u8 padding;
    u8 chNoList[6];
    void *buffer;
    u32 bufSize;
    NNSSndStrmCallback strmCallback;
    void *strmCallbackArg;
    NNSSndArcStrmCallback sndArcStrmCallback;
    void *sndArcStrmCallbackArg;
    int strmNo;
    int playerNo;
    NNSSndStrmHandle *handle;
    int prio;
    int initVolume;
    int volume;
    u32 curSample;
    OpenStreamFunc openStreamFunc;
    CloseStreamFunc closeStreamFunc;
    ReadStreamFunc readStreamFunc;
    CancelStreamFunc cancelStreamFunc;
} NNSSndStrmPlayer;
typedef struct LoadCommand {
    NNSFndLink link;
    NNSSndStrmPlayer *player;
    NNSSndStrmCallbackStatus status;
    int numChannels;
    void *buffer[6];
    u32 bufLen;
} LoadCommand;
extern const s8 data_02064284[16];
extern const s16 data_02064294[89];
extern NNSSndStrmThread sStrmThread;
extern NNSSndStrmThread *sPrepareThread;
extern NNSFndList sFreeCommandList;
extern LoadCommand sLoadCommandBuffer[(4 * (4 - 2))];
extern NNSSndStrmPlayer sStrmPlayer[4];
extern u8 *data_021af530[];
extern OSMutex data_021af548;

static void StrmThread(void *arg);
static NNSSndStrmPlayer *AllocPlayer(NNSSndStrmHandle *handle, int playerNo, int playerPrio);
static void FreePlayer(NNSSndStrmPlayer *player);
static BOOL PrepareStrm(NNSSndStrmHandle *handle, const NNSSndArcStrmInfo *strmInfo, int playerNo, int playerPrio, int strmNo,
                        u32 offset, NNSSndStrmCallback strmCallback, void *strmCallbackArg,
                        NNSSndArcStrmCallback sndArcStrmCallback, void *sndArcStrmCallbackArg);
static void StopStrm(NNSSndStrmPlayer *player, int fadeFrame);
static void ForceStopStrm(NNSSndStrmPlayer *player);
static void ShutdownPlayer(NNSSndStrmPlayer *player);
static BOOL AllocChannel(NNSSndStrmPlayer *player, int numChannels, const u8 chNoList[]);
static void FreeChannel(NNSSndStrmPlayer *player);
static LoadCommand *ReadCommandBuffer(NNSFndList *commandList);
static LoadCommand *AllocCommandBuffer(void);
static void FreeCommandBuffer(LoadCommand *command);
static s16 DecodeAdpcm(int code, AdpcmState *state);
static void StrmCallback(NNSSndStrmCallbackStatus status, int numChannels, void *buffer[], u32 len, NNSSndStrmFormat format,
                         void *arg);
static void DisposeCallback(void *mem, u32 size, u32 data1, u32 data2);
static void CreateThread(NNSSndStrmThread *thread, u32 threadPrio);
static void RemoveCommandByPlayer(NNSFndList *commandList, const NNSSndStrmPlayer *player);
void MakeWaveData(LoadCommand *command);
static void func_0204a3b8(NNSSndStrmPlayer *player);
static void SetupStreamFunction(NNSSndStrmPlayer *player, u32 fileId);
static BOOL OpenFileStream(NNSSndStrmPlayer *player, u32 fileId);
static void CloseFileStream(NNSSndStrmPlayer *player);
static s32 ReadFileStream(NNSSndStrmPlayer *player, void *dest, u32 size, u32 offset);
static void CancelFileStream(NNSSndStrmPlayer *player);
static BOOL OpenMemoryStream(NNSSndStrmPlayer *player, u32 fileId);
static void CloseMemoryStream(NNSSndStrmPlayer *player);
static s32 ReadMemoryStream(NNSSndStrmPlayer *player, void *dest, u32 size, u32 offset);
static void CancelMemoryStream(NNSSndStrmPlayer *player);
static inline s16 DecodeAdpcm(int code, AdpcmState *state) {
    int step;
    int sample;
    int index;
    int d;
    sample = state->prevSample;
    index  = state->prevIndex;
    step   = data_02064294[index];
    d      = step >> 3;
    if (code & 4) {
        d += step;
    }
    if (code & 2) {
        d += step >> 1;
    }
    if (code & 1) {
        d += step >> 2;
    }
    if (code & 8) {
        sample -= d;
        if (sample < -32768) {
            sample = -32768;
        }
    } else {
        sample += d;
        if (sample > 32767) {
            sample = 32767;
        }
    }
    index += data_02064284[code];
    if (index < 0) {
        index = 0;
    } else if (index > 89 - 1) {
        index = 89 - 1;
    }
    state->prevSample = (s16) sample;
    state->prevIndex  = (u8) index;
    return (s16) sample;
}
void NNS_SndArcStrmInit(u32 threadPrio, NNSSndHeapHandle heap);
BOOL NNS_SndArcStrmSetupPlayer(NNSSndHeapHandle heap);
void NNS_SndArcStrmCreatePrepareThread(NNSSndStrmThread *thread, u32 threadPrio);
BOOL NNS_SndArcStrmPrepare(struct NNSSndStrmHandle *handle, int strmNo, u32 offset);
BOOL NNS_SndArcStrmPrepareEx(struct NNSSndStrmHandle *handle, int playerNo, int playerPrio, int strmNo, u32 offset);
BOOL NNS_SndArcStrmPrepareEx2(struct NNSSndStrmHandle *handle, int playerNo, int playerPrio, int strmNo, u32 offset,
                              NNSSndStrmCallback strmCallback, void *strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback,
                              void *sndArcStrmCallbackArg);
void NNS_SndArcStrmStartPrepared(NNSSndStrmHandle *handle);
BOOL NNS_SndArcStrmIsPrepared(NNSSndStrmHandle *handle);
BOOL NNS_SndArcStrmStart(NNSSndStrmHandle *handle, int strmNo, u32 offset);
BOOL NNS_SndArcStrmStartEx(NNSSndStrmHandle *handle, int playerNo, int playerPrio, int strmNo, u32 offset);
BOOL NNS_SndArcStrmStartEx2(NNSSndStrmHandle *handle, int playerNo, int playerPrio, int strmNo, u32 offset,
                            NNSSndStrmCallback strmCallback, void *strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback,
                            void *sndArcStrmCallbackArg);
void NNS_SndArcStrmStop(NNSSndStrmHandle *handle, int fadeFrame);
void NNS_SndArcStrmStopAll(int fadeFrame);
void NNS_SndArcStrmMoveVolume(struct NNSSndStrmHandle *handle, int volume, int frames);
void NNS_SndArcStrmSetChannelVolume(struct NNSSndStrmHandle *handle, int chNo, int volume);
void NNS_SndArcStrmSetChannelPan(struct NNSSndStrmHandle *handle, int chNo, int pan);
void NNS_SndStrmHandleInit(NNSSndStrmHandle *handle);
void NNS_SndStrmHandleRelease(NNSSndStrmHandle *handle);
u32 NNS_SndArcStrmGetCurrentPlayingPos(NNSSndStrmHandle *handle);
u32 NNS_SndArcStrmGetTimeLength(NNSSndStrmHandle *handle);
int NNS_SndArcStrmGetChannelCount(NNSSndStrmHandle *handle);
BOOL NNS_SndArcStrmAllocChannel(int playerNo);
void NNS_SndArcStrmFreeChannel(int playerNo);
void NNSi_SndArcStrmMain(void);
void NNSi_SndArcStrmSetPlayerBuffer(int playerNo, void *buffer, u32 len);
void NNSi_SndArcStrmSetDecodeBuffer(void *buffer, u32);
void NNSi_SndArcStrmStopByChannel(u32 chBitMask);
OSThread *NNSi_SndArcStrmGetThread();
NNSSndStrmPlayer *AllocPlayer(NNSSndStrmHandle *handle, int playerNo, int prio);
void FreePlayer(NNSSndStrmPlayer *player);
BOOL PrepareStrm(struct NNSSndStrmHandle *handle, const NNSSndArcStrmInfo *strmInfo, int playerNo, int playerPrio, int strmNo,
                 u32 offset, NNSSndStrmCallback strmCallback, void *strmCallbackArg, NNSSndArcStrmCallback sndArcStrmCallback,
                 void *sndArcStrmCallbackArg);
void StopStrm(NNSSndStrmPlayer *player, int fadeFrame);
void ForceStopStrm(NNSSndStrmPlayer *player);
void ShutdownPlayer(NNSSndStrmPlayer *player);
BOOL AllocChannel(NNSSndStrmPlayer *player, int numChannels, const u8 chNoList[]);
void FreeChannel(NNSSndStrmPlayer *player);
void CreateThread(NNSSndStrmThread *thread, u32 threadPrio);
void RemoveCommandByPlayer(NNSFndList *commandList, const NNSSndStrmPlayer *player);
LoadCommand *ReadCommandBuffer(NNSFndList *commandList);
LoadCommand *AllocCommandBuffer(void);
void FreeCommandBuffer(LoadCommand *command);
void DisposeCallback(void *mem, u32, u32 data1, u32);
void StrmCallback(NNSSndStrmCallbackStatus status, int numChannels, void *buffer[], u32 len, NNSSndStrmFormat, void *arg);
void func_0204a3b8(NNSSndStrmPlayer *player);
void MakeWaveData(LoadCommand *command) {
    NNSSndStrmPlayer *player = command->player;
    BOOL loopFlag;
    u32 destOffset;
    u32 restSize;
    u32 blockNo;
    u32 blockSize;
    u32 blockSamples;
    u32 blockOffsetSample;
    u32 blockOffset;
    u32 offset;
    u32 samples;
    u32 size;
    u32 readSize;
    int ch;
    if (player->finishFlag && player->finishCounter > 0) {
        player->finishCounter--;
    }
    destOffset = 0;
    restSize   = command->bufLen;
    while (restSize > 0) {
        if (player->finishFlag) {
            for (ch = 0; ch < command->numChannels; ch++) {
                MI_CpuClear8((u8 *) (command->buffer[ch]) + destOffset, restSize);
            }
            break;
        }
        blockNo = player->curSample / player->info.blockSamples;
        if (blockNo < player->info.numBlocks - 1) {
            blockSize    = player->info.blockSize;
            blockSamples = player->info.blockSamples;
        } else {
            blockSize    = player->info.lastBlockSize;
            blockSamples = player->info.lastBlockSamples;
        }
        blockOffsetSample = player->curSample;
        blockOffsetSample -= blockNo * player->info.blockSamples;
        samples = restSize;
        if (player->info.format != STRM_FORMAT_PCM8) {
            samples >>= 1;
        }
        if (player->dirtyFlag) {
            if (blockOffsetSample == 0) {
                player->dirtyFlag = 0;
            } else {
                samples           = blockOffsetSample;
                blockOffsetSample = 0;
            }
        }
        loopFlag = 0;
        if (blockOffsetSample + samples >= blockSamples) {
            samples = blockSamples - blockOffsetSample;
            if (blockNo >= player->info.numBlocks - 1) {
                if (player->info.loopFlag) {
                    loopFlag = 1;
                } else {
                    player->finishFlag = 1;
                }
            }
        }
        blockOffset = blockOffsetSample;
        size        = samples;
        switch (player->info.format) {
            case STRM_FORMAT_PCM8:
                readSize = size;
                break;
            case STRM_FORMAT_PCM16:
                blockOffset <<= 1;
                size <<= 1;
                readSize = size;
                break;
            case STRM_FORMAT_ADPCM: {
                u32 endSample = blockOffsetSample + samples;
                blockOffset >>= 1;
                endSample++;
                endSample >>= 1;
                readSize = endSample - blockOffset;
                if (blockOffsetSample == 0) {
                    readSize += sizeof(AdpcmState);
                } else {
                    blockOffset += sizeof(AdpcmState);
                }
                size <<= 1;
                break;
            }
        }
        offset = blockOffset;
        offset += blockNo * player->info.blockSize * player->info.numChannels;
        offset += player->info.dataOffset;
        for (ch = 0; ch < command->numChannels; ch++) {
            void *dest;
            void *read_dest;
            dest = read_dest = (u8 *) (command->buffer[ch]) + destOffset;
            if (ch < player->info.numChannels) {
                s32 resultSize;
                if (player->info.format == STRM_FORMAT_ADPCM) {
                    OS_LockMutex(&data_021af548);
                    read_dest = data_021af530[2];
                }
                resultSize = player->readStreamFunc(player, read_dest, readSize, offset + ch * blockSize);
                if (resultSize != readSize) {
                    size               = 0;
                    samples            = 0;
                    loopFlag           = 0;
                    player->finishFlag = 1;
                    if (player->info.format == STRM_FORMAT_ADPCM) {
                        func_02050964(&data_021af548);
                    }
                    break;
                }
                if (player->info.format == STRM_FORMAT_ADPCM) {
                    AdpcmState *state = &player->adpcmState[ch];
                    u8 *srcp          = data_021af530[2];
                    s16 *destp        = dest;
                    u32 i;
                    u32 end;
                    if (blockOffsetSample == 0) {
                        *state = *((AdpcmState *) srcp)++;
                    }
                    end = blockOffsetSample + samples;
                    i   = blockOffsetSample;
                    if (i & 0x01) {
                        *destp++ = DecodeAdpcm((*srcp >> 4) & 0x0f, state);
                        i++;
                        srcp++;
                    }
                    while (i < (end & ~0x01)) {
                        *destp++ = DecodeAdpcm(*srcp & 0x0f, state);
                        i++;
                        *destp++ = DecodeAdpcm((*srcp >> 4) & 0x0f, state);
                        i++;
                        srcp++;
                    }
                    if (i < end) {
                        *destp++ = DecodeAdpcm(*srcp & 0x0f, state);
                        i++;
                    }
                    func_02050964(&data_021af548);
                }
            } else {
                if (player->monoFlag) {
                    MI_CpuClear8(dest, size);
                } else {
                    MI_CpuCopy8((u8 *) (command->buffer[0]) + destOffset, dest, size);
                }
            }
        }
        if (player->dirtyFlag) {
            player->dirtyFlag = 0;
            continue;
        }
        if (loopFlag) {
            player->curSample = player->info.loopStart;
        } else {
            player->curSample += samples;
        }
        destOffset += size;
        restSize -= size;
        if (player->finishFlag && player->sndArcStrmCallback) {
            func_0204a3b8(player);
        }
    }
    if (player->strmCallback != 0) {
        player->strmCallback(command->status, command->numChannels, command->buffer, command->bufLen,
                             player->info.format == STRM_FORMAT_PCM8 ? NNS_SND_STRM_FORMAT_PCM8 : NNS_SND_STRM_FORMAT_PCM16,
                             player->strmCallbackArg);
    }
    for (ch = 0; ch < command->numChannels; ch++) {
        DC_FlushRange(command->buffer[ch], command->bufLen);
    }
    if (command->status == NNS_SND_STRM_CALLBACK_SETUP) {
        player->prepareFlag = 1;
    }
}
void SetupStreamFunction(NNSSndStrmPlayer *player, u32 fileId);
BOOL OpenFileStream(NNSSndStrmPlayer *player, u32 fileId);
void CloseFileStream(NNSSndStrmPlayer *player);
s32 ReadFileStream(NNSSndStrmPlayer *player, void *dest, u32 size, u32 offset);
void CancelFileStream(NNSSndStrmPlayer *player);
BOOL OpenMemoryStream(NNSSndStrmPlayer *player, u32 fileId);
void CloseMemoryStream(NNSSndStrmPlayer *player);
s32 ReadMemoryStream(NNSSndStrmPlayer *player, void *dest, u32 size, u32 offset);
void CancelMemoryStream(NNSSndStrmPlayer *player);
void StrmThread(void *arg);
