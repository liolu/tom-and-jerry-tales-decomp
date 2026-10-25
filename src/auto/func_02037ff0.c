#include "m2c.h"

typedef struct {
    u8 pad[0x30];
    s16 f30;
    s16 f32;
} Obj;
typedef struct {
    Obj *o;
    s32 b;
    s32 c;
} Ent;

extern void func_02051f18(void *, void *, s32);
extern u16 data_020a0f48;
extern Ent data_020a1bcc[];
extern Ent data_020a2e8c[];

typedef struct {
    s32 f0;
    s32 f4;
    u8 pad[0x28];
    s16 f30;
    s16 f32;
    u16 pad34;
    u16 f36;
} Self;

void func_02037ff0(Self *self) {
    s16 i;
    s16 j;
    s32 off;
    Ent *p;
    data_020a0f48 -= 1;
    self->f4  = 0;
    self->f0  = 0;
    self->f36 = 0;
    i         = self->f30;
    self->f30 = -1;
    func_02051f18(&data_020a2e8c[i + 1], &data_020a2e8c[i], (data_020a0f48 - i) * 12);
    p = &data_020a2e8c[i];
    if (i < data_020a0f48) {
        do {
            p->o->f30 = i;
            p++;
            i++;
        } while (data_020a0f48 > i);
    }
    j         = self->f32;
    self->f32 = -1;
    off       = j * 12;
    func_02051f18(&data_020a1bcc[j + 1], (u8 *) data_020a1bcc + off, (data_020a0f48 - j) * 12);
    if (j < data_020a0f48) {
        p = (Ent *) ((u8 *) data_020a2e8c + off);
        do {
            p->o->f32 = j;
            p++;
            j++;
        } while (data_020a0f48 > j);
    }
}
