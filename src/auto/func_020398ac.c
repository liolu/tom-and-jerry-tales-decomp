typedef struct {
    int a, b, c;
} V3;
void func_02039d0c(V3 *, V3 *, int);
void func_0204b918(char *, V3 *, char *);
void func_0204b94c(int, char *, V3 *);
int func_0204b980(V3 *, V3 *);
void func_0204b9bc(V3 *, V3 *, V3 *);
void func_0204baa0(V3 *, V3 *);
void func_020398ac(char *arg0, int arg1, V3 *arg2) {
    V3 sp18;
    V3 spC;
    V3 sp0;
    func_0204b94c(arg1, arg0 + 0x2C, &sp18);
    func_0204b9bc(&sp18, arg2, &sp0);
    if (func_0204b980(&sp0, &sp0) > 0) {
        func_0204b918(arg0 + 0x94, &sp0, arg0 + 0x94);
        func_0204baa0(&sp18, &sp18);
        func_02039d0c(&sp18, &spC, func_0204b980(&sp18, arg2));
    } else {
        spC = *arg2;
    }
    func_0204b918(arg0 + 0x88, &spC, arg0 + 0x88);
}
