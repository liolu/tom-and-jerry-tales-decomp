typedef struct {
    int x, y, z;
} V3;
typedef struct {
    int w;
    void *p;
    char pad[0xC];
    V3 v;
    int e;
} O;
typedef struct {
    V3 v;
    int d;
} R;
void func_0204b918(void *, void *, void *);
void func_0204b94c(V3 *, V3 *, V3 *);
void func_0204baa0(V3 *, V3 *);
int func_0204b980(V3 *, V3 *);
int func_0204b77c(int, int);
void func_02039d0c(V3 *, V3 *, int);
void func_02051f18(void *, void *, int);
extern V3 data_02064104;

void func_020388cc(void *a0, void *a1, R *a2, V3 *a3, int *a4) {
    V3 sp18;
    V3 spC;
    V3 sp0;
    int t;
    int r;
    func_0204b918(*(void **) ((char *) a0 + 4), (char *) a0 + 0x14, &spC);
    func_0204b918(*(void **) ((char *) a1 + 4), (char *) a1 + 0x14, &sp0);
    func_0204b94c(&sp0, &spC, a3);
    if (a3->x == 0 && a3->y == 0 && a3->z == 0) {
        func_02051f18(&data_02064104, &sp18, 0xC);
    } else {
        func_0204baa0(a3, &sp18);
    }
    *a4 = func_0204b980(&sp18, a3) - *(int *) ((char *) a0 + 0x20) - *(int *) ((char *) a1 + 0x20);
    t   = func_0204b77c(*a4, 0x2000);
    if (*a4 < 0) {
        *a4 *= -1;
    }
    func_02039d0c(&sp18, a3, t + *(int *) ((char *) a0 + 0x20));
    func_0204b918(&spC, a3, a3);
    a2->v.x = sp18.x;
    a2->v.y = sp18.y;
    a2->v.z = sp18.z;
    a2->d   = func_0204b980(&sp18, a3);
}
