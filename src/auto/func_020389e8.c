typedef struct {
    int x, y, z;
} V;
typedef struct {
    int a;
    V *p;
    char pad[0xc];
    V q;
    int r;
} O;
typedef struct {
    int a;
    V *p;
    char pad[0xc];
    V q;
    int r;
} P;
extern void func_01ff99e8(V *, V *, int, void *, V *, V *);
extern void func_02039d0c(V *, V *, int);
extern int func_0204b77c(int, int);
extern void func_0204b918(void *, void *, void *);
extern void func_0204b94c(V *, V *, V *);
extern int func_0204b980(V *, V *);
extern void func_0204baa0(V *, V *);
extern int func_02059508(int);
void func_020389e8(O *arg0, P *arg1, int *arg2, V *arg3, int *arg4) {
    V sp38;
    V sp2C;
    V sp20;
    V sp14;
    V sp8;
    int t9, t8, r3, t1;
    func_0204b918(arg0->p, &arg0->q, &sp14);
    func_0204b918(arg1->p, &arg1->q, &sp8);
    func_01ff99e8(&sp14, &sp8, arg1->a, (char *) arg1 + 0x24, arg3, &sp38);
    func_0204b94c(&sp14, arg3, &sp2C);
    t9 = func_02059508(sp2C.z);
    t8 = func_02059508(sp2C.x);
    if (t9 + (t8 + func_02059508(sp2C.y)) == 0) {
        func_0204b94c(&sp14, &sp8, &sp2C);
    }
    func_0204baa0(&sp2C, &sp38);
    func_0204b94c(arg3, &sp8, &sp20);
    if (func_0204b980(&sp20, &sp38) < 0) {
        func_02039d0c(&sp38, &sp38, -0x1000);
    }
    *arg4 = func_0204b980(&sp38, &sp2C);
    *arg4 = *arg4 - arg0->r;
    r3    = func_0204b77c(*arg4, 0x2000);
    t1    = *arg4;
    if (t1 < 0) {
        *arg4 = t1 * (unsigned) -1;
    }
    func_02039d0c(&sp38, arg3, r3 + arg0->r);
    func_0204b918(&sp14, &sp2C, arg3);
    arg2[0] = sp38.x;
    arg2[1] = sp38.y;
    arg2[2] = sp38.z;
    arg2[3] = func_0204b980(&sp38, arg3);
}
