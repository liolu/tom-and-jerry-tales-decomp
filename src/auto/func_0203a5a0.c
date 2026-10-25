typedef struct {
    short id;
    short pad2;
    unsigned short idx;
    short s6;
    char pad8[0x24];
    int v2c[3];
    int v38, v3c, v40;
    int v44[3];
    char pad50[8];
    unsigned int f0 : 1;
    unsigned int f1 : 5;
    unsigned int f6 : 1;
    unsigned int f7 : 1;
    unsigned int f8 : 1;
    unsigned int f9 : 1;
    unsigned int f10 : 1;
    unsigned int rest58 : 21;
    unsigned int g0 : 2;
    unsigned int rest5c : 30;
    char pad60[0x40];
    unsigned int h0 : 1;
    unsigned int h1 : 1;
    unsigned int h2 : 1;
    unsigned int resta0 : 29;
    char pada4[0x18];
} Ent;
typedef struct {
    int a;
    int b;
    unsigned int fl : 1;
    unsigned int r : 31;
    char pad[0x68];
} Ent2;
extern unsigned short data_020ac15c;
extern Ent data_020aecfc[];
extern Ent2 data_020ac17c[];
void func_0203a58c(short);
void func_02051f18(void *, void *, int);
void func_0204baa0(void *, void *);
void func_020096fc(void *, int);
void func_02039e84(int, int, int);

unsigned int func_0203a5a0(int id, void *src, void *vec, short s, int b1, int b2, int c) {
    Ent *e;
    unsigned int found = data_020ac15c;
    unsigned short i;
    func_0203a58c(id);
    i = 0;
    do {
        if (data_020aecfc[i].id == -1) {
            found = i;
            break;
        }
        i++;
    } while (data_020ac15c >= i);
    e = &data_020aecfc[found];
    if (found == data_020ac15c) {
        data_020ac15c++;
    }
    e->id  = id;
    e->idx = found;
    e->f7  = 0;
    e->f8  = 0;
    e->f0  = 0;
    e->h0  = 0;
    func_02051f18(src, e->v2c, 12);
    func_0204baa0(vec, e->v44);
    {
        int x1 = b1;
        int x2 = b2;
        e->s6  = s;
        e->v38 = e->v3c = e->v40 = 0x1000;
        e->f9                    = 0;
        e->f6                    = x1;
        e->h2                    = x2;
    }
    e->g0 = 3;
    func_020096fc(e, c);
    if (data_020ac17c[e->id].fl != 0) {
        e->f10 = 1;
    } else {
        func_02039e84((unsigned short) found, (unsigned short) e->id, c);
    }
    return found;
}
