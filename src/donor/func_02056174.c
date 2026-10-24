/* compiler: 2.0/sp1p5  */
/* func_02015a5c from projets/heroes-of-mana/src/auto/func_02015a5c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef struct {
    u16 done;
    u16 pad[3];
} RegA;
typedef struct {
    u16 *buffer;
    u32 pad;
} RegB;
typedef struct {
    u8 pad[4];
    s32 f4;
    s32 f8;
    u8 pad2[0x18];
    u32 *f24;
} PmSt;
extern RegA data_021b24cc[5];
extern RegB data_021b24d0[5];
extern PmSt data_021b248c;
extern void func_02056090(u32 result);
void func_02056174(u32 tag, u32 data, s32 err) {
    u16 command;
    u16 result;
    if (err) {
        func_02056090(2);
        return;
    }
    command = (u16) ((data & 0x7f00) >> 8);
    result  = data & 0xff;
    if (command >= 0x70 && command <= 0x74) {
        s32 index = command - 0x70;
        u16 *buf  = data_021b24d0[index].buffer;
        u16 value = (u8) result;
        if (buf) {
            *buf = value;
        }
        data_021b24cc[index].done = 1;
        result                    = 0;
    } else if (command == 0x60) {
        data_021b248c.f4 = 1;
    } else if (command == 0x62) {
        data_021b248c.f8 = 1;
    } else if (command == 0x67) {
        if (data_021b248c.f24) {
            *data_021b248c.f24 = result;
        }
        result = 0;
    }
    func_02056090(result);
}
