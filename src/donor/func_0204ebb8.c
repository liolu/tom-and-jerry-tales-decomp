/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* GX_LoadTexPltt from projets/blue-dragon-awakened-shadow/src/donor/GX_LoadTexPltt.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef int s32;
extern u32 data_0206de68;
typedef struct {
    s32 clearImageBank;
    u32 texStartAddr;
    u32 texPlttStartAddr;
    s32 texPlttBank;
    u32 clearImageAddr;
    s32 texBank;
    u32 texStartAddr2;
    u32 texSize1;
} UnkGxLoad3dState;
extern UnkGxLoad3dState data_021b03dc;
extern void func_02051f18(const void *src, void *dest, u32 size);
extern void func_02051c94(u32 dmaNo, const void *src, void *dest, u32 size, void (*callback)(void *), void *arg);
static inline void UnkGxCopy32Async(u32 dmaNo, const void *src, void *dest, u32 size) {
    if (dmaNo != -1) {
        func_02051c94(dmaNo, src, dest, size, 0, 0);
    } else {
        func_02051f18(src, dest, size);
    }
}
void func_0204ebb8(const void *src, u32 destSlotAddr, u32 size) {
    UnkGxCopy32Async(data_0206de68, src, (void *) (data_021b03dc.texPlttStartAddr + destSlotAddr), size);
}
