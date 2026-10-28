typedef struct {
    int x, y, z;
} V3;
typedef struct {
    char pad0[0x74];
    int f74;
    int f78;
    char pad7c[4];
    char v80[12];
    char v8c[12];
    char pad98[0x2c];
    int fc4;
} Obj;
typedef struct {
    char pad[0x10];
    Obj *o;
} G;
extern G data_0206e9e8;
extern char *data_0206ea14;
extern unsigned char data_02087188;
extern char data_02064104[];
extern short data_02064348[];
int func_020306fc(int);
void VEC_Add(void *, void *, void *);
void VEC_CrossProduct(void *, void *, void *);
void VEC_MultAdd(int, void *, void *, void *);

void func_02001b80(void) {
    V3 a;
    V3 b;
    if (data_02087188 != 0) {
        if (func_020306fc(9) != 0) {
            data_0206e9e8.o->fc4 += 0x2D000;
            if (data_0206e9e8.o->fc4 >= 0x168000) {
                data_0206e9e8.o->fc4 = 0;
            }
        } else if (func_020306fc(8) != 0) {
            data_0206e9e8.o->fc4 -= 0x2D000;
            if (data_0206e9e8.o->fc4 < 0) {
                data_0206e9e8.o->fc4 = 0x13B000;
            }
        }
        {
            int x, h, idx;
            x   = data_0206e9e8.o->fc4;
            h   = (int) (((long long) x * 0xB60B60B60BLL + 0x80000000000LL) >> 32);
            idx = (int) ((unsigned) (h << 4) >> 16) >> 4;
            idx = idx * 2;
            a.x = data_02064348[idx];
            a.y = 0;
            a.z = data_02064348[idx + 1];
        }
    } else {
        a = *(V3 *) (data_0206ea14 + 0x94);
    }
    VEC_CrossProduct(&a, data_02064104, &b);
    VEC_CrossProduct(&b, &a, data_0206e9e8.o->v8c);
    VEC_Add(data_0206ea14 + 0xAC, &a, data_0206e9e8.o->v80);
    VEC_Add(data_0206e9e8.o->v80, &a, data_0206e9e8.o->v80);
    VEC_MultAdd(-0x4D9F, &a, data_0206e9e8.o->v80, &data_0206e9e8.o->f74);
    data_0206e9e8.o->f78 = *(int *) (data_0206ea14 + 0xC8) + 0x3800;
}
