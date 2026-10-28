/* compiler: 2.0/sp1p5  */
/* FindContainHeap from projets/blue-dragon-awakened-shadow/src/auto/FindContainHeap.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
extern u8 *NNS_FndGetNextListObject(void *, void *);
extern u8 *func_02046924(void *list, u32 addr);
u8 *func_02046924(void *list, u32 addr) {
    u8 *h = NNS_FndGetNextListObject(list, ((void *) 0));
    while (h != ((void *) 0)) {
        if (*(u32 *) (h + 0x18) <= addr && addr < *(u32 *) (h + 0x1c)) {
            u8 *sub = func_02046924(h + 0xc, addr);
            if (sub == ((void *) 0)) {
                sub = h;
            }
            return sub;
        }
        h = NNS_FndGetNextListObject(list, h);
    }
    return ((void *) 0);
}
