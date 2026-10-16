/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0200d15c from projets/livly-garden/src/donor/func_0200d15c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef int s32;
typedef s32 BOOL;
typedef struct UnkFndLink {
    void *unk_00;
    void *unk_04;
} UnkFndLink;
typedef struct UnkFndList {
    void *unk_00;
    void *unk_04;
    u16 unk_08;
    u16 unk_0a;
} UnkFndList;
typedef struct UnkFndHeapHead {
    u32 unk_00;
    UnkFndLink unk_04;
    UnkFndList unk_0c;
    void *unk_18;
    void *unk_1c;
    u32 unk_20;
} UnkFndHeapHead;
extern void func_0204674c(UnkFndList *list, u16 offset);
extern void func_02046790(UnkFndList *list, void *obj);
extern void func_020469b4(UnkFndHeapHead *heap, u32 signature, void *start, void *end, u16 option);
extern BOOL data_021ac11c;
extern UnkFndList data_021ac120;
extern UnkFndList *func_0204698c(void *heap);
void func_020469b4(UnkFndHeapHead *heap, u32 signature, void *start, void *end, u16 option) {
    heap->unk_00 = signature;
    heap->unk_18 = start;
    heap->unk_1c = end;
    heap->unk_20 = 0;
    heap->unk_20 = (heap->unk_20 & ~0xff) | (option & 0xff);
    func_0204674c(&heap->unk_0c, 4);
    if (!data_021ac11c) {
        func_0204674c(&data_021ac120, 4);
        data_021ac11c = 1;
    }
    func_02046790(func_0204698c(heap), heap);
}
