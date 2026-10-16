/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_FreeFromHeap from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSDK/src/os/os_alloc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 func_020517f8(void);
extern u32 func_0205180c(u32 irq_flag);
typedef struct UnkHeapCell UnkHeapCell;
struct UnkHeapCell {
    UnkHeapCell *prev;
    UnkHeapCell *next;
    s32 size;
};
typedef struct UnkHeapDesc {
    s32 size;
    UnkHeapCell *free;
    UnkHeapCell *allocated;
} UnkHeapDesc;
typedef struct UnkHeapInfo {
    s32 currentHeap;
    s32 numHeaps;
    void *arenaStart;
    void *arenaEnd;
    UnkHeapDesc *heapArray;
} UnkHeapInfo;
extern UnkHeapInfo *data_021b06e4[9];
UnkHeapCell *func_02050f30(UnkHeapCell *list, UnkHeapCell *cell);
UnkHeapCell *func_02050f58(UnkHeapCell *list, UnkHeapCell *cell);
void func_02051108(u32 id, s32 heap, void *ptr) {
    UnkHeapInfo *heapInfo;
    UnkHeapDesc *hd;
    UnkHeapCell *cell;
    u32 prev = func_020517f8();

    heapInfo = data_021b06e4[id];
    if (heap < 0) {
        heap = heapInfo->currentHeap;
    }
    hd = &heapInfo->heapArray[heap];

    cell          = (UnkHeapCell *) ((char *) ptr - 0x20);
    hd->allocated = func_02050f30(hd->allocated, cell);
    hd->free      = func_02050f58(hd->free, cell);

    func_0205180c(prev);
}
