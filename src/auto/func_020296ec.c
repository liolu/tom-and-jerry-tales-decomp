#include "m2c.h"

typedef struct {
    s32 type;
    s32 p1;
    s16 a;
    s16 b;
    s32 c;
} E;
typedef struct {
    u8 pad[0x50];
    E e[1];
} L;
typedef struct {
    s16 id;
    s16 pad;
    s32 v;
    u8 rest[0x7b0 - 8];
} A;
typedef struct {
    u8 pad[4];
    s32 v;
    u8 rest[0xbc - 8];
} B;
typedef struct {
    u8 pad[0x1700];
    s16 w[0x3c];
    s16 ids[12];
    u8 pad2[0x1794 - 0x1790];
    s32 f;
    u8 pad3[0x17c0 - 0x1798];
    s32 g;
} C;
typedef struct {
    u8 pad[0x50];
    E e[1];
} L2;

extern char data_0206c6c4[];
extern char data_0206c720[];
extern char data_0206c76c[];
extern char data_0206c7d0[];
extern char data_0206c80c[];
extern char data_0206c868[];
extern char data_0206c8c4[];
extern A data_02091be4[];
extern B data_0208ece4[];
extern void func_020293f8(const char *fmt, ...);
extern void func_02033df8(s32);
extern s16 *func_0203a95c(void);
extern void func_0203a58c(void);
extern void func_0203b32c(s32);
extern void func_0203f9a4(s32, s32);
extern void OS_Terminate(void);

void func_020296ec(C *ctx, u8 *lst) {
    u16 i;
    u16 k;
    E *en;
    if (lst == 0) {
        for (k = 0; k < 12; k++) {
            ctx->ids[k] = -1;
        }
        return;
    }
    for (i = 0; i < *(u32 *) (lst + 0x110); i++) {
        E *e = (E *) (lst + 0x50) + i;
        if (e->type != 0 && (u32) e->type < 7) {
            func_020293f8(data_0206c6c4, i, e->type, e->c, ctx->ids[i]);
        }
        switch (e->type) {
            case 0:
                func_020293f8(data_0206c720, i, *(u32 *) (lst + 0x110));
                break;
            case 1: {
                s32 v = ctx->ids[i];
                if (v < 0) {
                    func_020293f8(data_0206c76c, i);
                } else {
                    s16 sz = 0x7b0;
                    A *a   = (A *) ((u8 *) data_02091be4 + (s16) v * sz);
                    B *b   = &data_0208ece4[a->id];
                    if (a->v < 0 && b->v != 0) {
                        func_02033df8(v);
                    } else {
                        func_020293f8(data_0206c7d0, v);
                    }
                }
                break;
            }
            case 5:
                if (ctx->ids[i] < 0) {
                    func_020293f8(data_0206c80c, i);
                } else if (*func_0203a95c() < 0) {
                    func_020293f8(data_0206c868, i);
                } else {
                    func_0203a58c();
                    func_020293f8(data_0206c8c4, ctx->ids[i]);
                }
                break;
            case 6:
                if (ctx->ids[i] >= 0) {
                    func_0203b32c(ctx->ids[i]);
                }
                break;
            case 9:
                ctx->g = 0;
                break;
            case 7: {
                s32 pa = e->a;
                s32 pb = e->b;
                if (pb == -2) {
                    func_0203f9a4(pa, 10);
                }
            } break;
            case 2:
            case 3:
            case 4:
            case 8:
            case 10:
            case 11:
            case 12:
            case 13:
            case 14:
            case 15:
                break;
            default:
                OS_Terminate();
                break;
        }
    }
    for (k = 0; k < 12; k++) {
        ctx->ids[k] = -1;
    }
    ctx->f = 0;
}
