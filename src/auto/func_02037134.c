typedef struct {
    int a, b, c;
} V3;
int func_020382ec(V3 *, int, void *, V3 *, int, void *);
int func_02038c8c(void *, void *, int, int, int);
void func_0204b918(int, void *, V3 *);
short func_02037134(void *arg0, void *arg1, int arg2, int arg3, int arg4) {
    V3 sp14;
    V3 sp8;
    func_0204b918(*(int *) ((char *) arg0 + 4), (char *) arg0 + 0x14, &sp14);
    func_0204b918(*(int *) ((char *) arg1 + 4), (char *) arg1 + 0x14, &sp8);
    if (func_020382ec(&sp14, *(int *) arg0, (char *) arg0 + 0x24, &sp8, *(int *) arg1, (char *) arg1 + 0x24) >= 0) {
        return 0;
    }
    return func_02038c8c(arg0, arg1, arg2, arg3, arg4);
}
