typedef struct {
    char pad[0x40];
    int f40;
} P2;
typedef struct {
    int pad0;
    int f4;
    char pad[0x40 - 8];
    int f40;
} PP;
typedef struct {
    char pad[0x4c];
    unsigned char f4c;
    char p2[3];
    PP *f50;
    char pad3[0x6c - 0x54];
} Item;
typedef struct {
    short count;
    short pad;
    Item *items;
} Ent;
typedef struct {
    int a;
    struct {
        char pad[0x2c];
        unsigned char idx;
    } *b;
} Hd;
extern Hd *data_0206ea14;
extern Ent data_0208706c[];
int func_0203016c(int, int);
int func_02016228(void) {
    unsigned char k;
    Ent *ent;
    int cnt2;
    short j;
    short count2;
    Item *it;
    short m;
    int cnt;
    short count;
    cnt   = 0;
    j     = 0;
    ent   = &data_0208706c[data_0206ea14->b->idx];
    count = ent->count;
    if (count > 0) {
        it = ent->items;
        do {
            if (it->f4c != 0 && it->f50->f40 != 7 && it->f50->f4 != 2) {
                cnt = (unsigned char) (cnt + 1);
            }
            it++;
            j++;
        } while (count > j);
    }
    cnt2   = func_0203016c(0, cnt - 1);
    count2 = ent->count;
    k      = 0;
    m      = 0;
    if (count2 > 0) {
        it = ent->items;
        do {
            if (it->f4c != 0 && it->f50->f40 != 7 && it->f50->f4 != 2) {
                if (k == (unsigned char) cnt2) {
                    return (int) it;
                }
                k++;
            }
            it++;
            m++;
        } while (count2 > m);
    }
    return cnt2;
}
