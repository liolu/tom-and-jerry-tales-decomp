/* compiler: 2.0/sp1p5  */
/* CARD_Init from projets/blue-dragon-awakened-shadow/src/auto/CARD_Init.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned long u32;
typedef struct {
    u32 pad0[7];
    u32 src;
    u32 dst;
    u32 len;
    u32 dma;
    u32 pad2c[3];
    u32 callback;
    u32 callback_arg;
    u8 pad40[0xd4];
    u32 flag;
} CardCommon;
typedef struct {
    u32 pad[8];
    void *read_func;
} RomStat;
extern CardCommon data_021b25a0;
extern RomStat data_021b2bc0;
extern void func_02057408(void);
extern void *func_0205833c(void);
extern void func_02058528(void);
void func_020582cc(void) {
    CardCommon *const p = &data_021b25a0;
    if (!p->flag) {
        p->flag = 1;
        p->src = p->dst = p->len = 0;
        p->dma                   = (u32) ~0;
        p->callback              = 0;
        p->callback_arg          = 0;
        data_021b2bc0.pad[0]     = 0;
        func_02057408();
        data_021b2bc0.read_func = func_0205833c();
        func_02058528();
    }
}
