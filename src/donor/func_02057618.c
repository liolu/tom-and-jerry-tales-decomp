/* compiler: 2.0/sp1p5  */
/* CARDi_IdentifyBackupCore from projets/heroes-of-mana/src/auto/CARDi_IdentifyBackupCore.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef long s32;
typedef unsigned long u32;
typedef struct {
    u32 cmd;
    u32 type;
    u8 pad8[0x10];
    u32 size;
    u32 pagesize;
    u32 f20;
    u32 f24;
    u32 f28;
    u32 f2c;
    u32 f30;
    u32 f34;
    u32 f38;
    u32 f3c;
    u32 f40;
    u32 f44;
    u8 f48;
    u8 pad49[3];
    u32 flags;
} CardCommon;
extern CardCommon *data_021b25a0;
extern void func_02051fd0(void *dst, u8 v, u32 n);
void func_02057618(s32 type) {
    CardCommon *c = data_021b25a0;
    u32 size;
    s32 kind;
    func_02051fd0(&c->size, 0, 0x48);
    c->type  = type;
    c->flags = 0x3f;
    if (type == 0) {
        return;
    }
    size    = 1 << ((type >> 8) & 0xff);
    kind    = type & 0xff;
    c->size = size;
    c->f48  = 0xff;
    if (kind == 1) {
        switch (size) {
            case 0x200:
                c->f20 = 0x10;
                c->f24 = 1;
                c->f28 = 5;
                c->f48 = 0xf0;
                break;
            case 0x2000:
                c->f20 = 0x20;
                c->f24 = 2;
                c->f28 = 5;
                c->f48 = 0;
                break;
            case 0x10000:
                c->f20 = 0x80;
                c->f24 = 2;
                c->f28 = 10;
                c->f48 = 0;
                break;
            default:
                goto fail;
        }
        c->pagesize = c->f20;
        c->flags |= 0x340;
        return;
    }
    if (kind == 2) {
        switch (size) {
            case 0x40000:
            case 0x80000:
            case 0x100000:
                c->f2c = 0x19;
                c->f30 = 300;
                c->f44 = 300;
                c->f3c = 5000;
                c->flags |= 0x480;
                break;
            case 0x200000:
                c->f3c = 1000;
                c->f40 = 3000;
                c->f34 = 17000;
                c->f38 = 40000;
                c->flags |= 0x1000;
                break;
            case 0x800000:
                c->f3c = 1000;
                c->f40 = 3000;
                c->f34 = 68000;
                c->f38 = 160000;
                c->flags |= 0x1000;
                break;
            default:
                goto fail;
        }
        c->pagesize = 0x10000;
        c->f20      = 0x100;
        c->f24      = 3;
        c->f28      = 5;
        c->flags |= 0xb40;
        return;
    }
    if (kind == 3 && (size == 0x2000 || size == 0x8000)) {
        c->f20      = size;
        c->pagesize = size;
        c->f24      = 2;
        c->f48      = 0;
        c->flags |= 0x340;
        return;
    }
fail:
    c->size = c->type  = 0;
    data_021b25a0->cmd = 3;
}
