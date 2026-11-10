#include "m2c.h"
typedef struct {
    int x, y, z;
} V3;
typedef struct {
    int m[9];
} M33;
typedef struct {
    char pad0[0x74];
    V3 v74;
    V3 v80;
    V3 v8c;
    char pad98[0xc0 - 0x98];
    int fc0;
    int fc4;
    int fc8;
} Obj;
typedef struct {
    char pad[0x10];
    Obj *o;
} G;
extern u8 data_0206e9e8[];
extern char data_02064104[];
extern short data_02064348[];
int func_020306fc(int);
int func_020306c0(int);
void func_0204b054(M33 *, int, int);
void func_0204b070(M33 *, int, int);
void func_0204b1e4(M33 *, M33 *, M33 *);
void MTX_MultVec33(V3 *, M33 *, V3 *);
void VEC_CrossProduct(V3 *, void *, V3 *);
void VEC_Normalize(V3 *, V3 *);
void VEC_MultAdd(int, V3 *, V3 *, V3 *);
void VEC_Add(V3 *, V3 *, V3 *);
void func_020021c4(void) {
    int dirz;
    int dirx;
    M33 m1;
    M33 m2;
    M33 m3;
    V3 v;
    V3 u;
    dirz = 0;
    dirx = 0;
    if (func_020306fc(2) != 0) {
        Obj *o = (*(Obj **) (data_0206e9e8 + 0x10));
        if (o->fc8 == 0x200) {
            o->fc8 = 0x400;
        } else if (o->fc8 == 0x400) {
            o->fc8 = 0x2000;
        } else {
            o->fc8 = 0x200;
        }
    }
    if (func_020306c0(0) != 0) {
        (*(Obj **) (data_0206e9e8 + 0x10))->v74.y += (*(Obj **) (data_0206e9e8 + 0x10))->fc8;
    } else if (func_020306c0(0xB) != 0) {
        (*(Obj **) (data_0206e9e8 + 0x10))->v74.y -= (*(Obj **) (data_0206e9e8 + 0x10))->fc8;
    }
    if (func_020306c0(1) != 0) {
        (*(Obj **) (data_0206e9e8 + 0x10))->fc0 -= (*(Obj **) (data_0206e9e8 + 0x10))->fc8 << 2;
        if ((*(Obj **) (data_0206e9e8 + 0x10))->fc0 <= -0x5A000) {
            (*(Obj **) (data_0206e9e8 + 0x10))->fc0 = -0x5A000 + 0x1000;
        }
    } else if (func_020306c0(0xA) != 0) {
        (*(Obj **) (data_0206e9e8 + 0x10))->fc0 += (*(Obj **) (data_0206e9e8 + 0x10))->fc8 << 2;
        if ((*(Obj **) (data_0206e9e8 + 0x10))->fc0 >= 0) {
            (*(Obj **) (data_0206e9e8 + 0x10))->fc0 = 0;
        }
    }
    if (func_020306fc(9) != 0) {
        (*(Obj **) (data_0206e9e8 + 0x10))->fc4 += 0x2D000;
        if ((*(Obj **) (data_0206e9e8 + 0x10))->fc4 >= 0x168000) {
            (*(Obj **) (data_0206e9e8 + 0x10))->fc4 = 0;
        }
    } else if (func_020306fc(8) != 0) {
        (*(Obj **) (data_0206e9e8 + 0x10))->fc4 -= 0x2D000;
        if ((*(Obj **) (data_0206e9e8 + 0x10))->fc4 < 0) {
            (*(Obj **) (data_0206e9e8 + 0x10))->fc4 = 0x13B000;
        }
    }
    v.x = 0;
    v.y = 0;
    v.z = -0x1000;
    {
        int x, h, idx;
        x   = (*(Obj **) (data_0206e9e8 + 0x10))->fc0;
        h   = (int) (((long long) x * 0xB60B60B60BLL + 0x80000000000LL) >> 32);
        idx = (int) ((unsigned) (h << 4) >> 16) >> 4;
        idx = idx * 2;
        func_0204b054(&m1, data_02064348[idx], data_02064348[idx + 1]);
    }
    {
        int x, h, idx;
        x   = (*(Obj **) (data_0206e9e8 + 0x10))->fc4;
        h   = (int) (((long long) x * 0xB60B60B60BLL + 0x80000000000LL) >> 32);
        idx = (int) ((unsigned) (h << 4) >> 16) >> 4;
        idx = idx * 2;
        func_0204b070(&m2, data_02064348[idx], data_02064348[idx + 1]);
    }
    func_0204b1e4(&m1, &m2, &m3);
    MTX_MultVec33(&v, &m3, &v);
    VEC_CrossProduct(&v, data_02064104, &u);
    VEC_CrossProduct(&u, &v, &(*(Obj **) (data_0206e9e8 + 0x10))->v8c);
    if (func_020306c0(6) != 0) {
        dirz = 1;
    } else if (func_020306c0(7) != 0) {
        dirz = -1;
    }
    if (func_020306c0(5) != 0) {
        dirx = -1;
    } else if (func_020306c0(4) != 0) {
        dirx = 1;
    }
    if (dirz != 0 || dirx != 0) {
        u   = v;
        u.y = 0;
        VEC_Normalize(&u, &u);
    }
    if (dirz != 0) {
        VEC_MultAdd(dirz * (*(Obj **) (data_0206e9e8 + 0x10))->fc8, &u, &(*(Obj **) (data_0206e9e8 + 0x10))->v74,
                    &(*(Obj **) (data_0206e9e8 + 0x10))->v74);
    }
    if (dirx != 0) {
        VEC_CrossProduct(&u, data_02064104, &u);
        VEC_MultAdd(dirx * (*(Obj **) (data_0206e9e8 + 0x10))->fc8, &u, &(*(Obj **) (data_0206e9e8 + 0x10))->v74,
                    &(*(Obj **) (data_0206e9e8 + 0x10))->v74);
    }
    VEC_Add(&(*(Obj **) (data_0206e9e8 + 0x10))->v74, &v, &(*(Obj **) (data_0206e9e8 + 0x10))->v80);
}
