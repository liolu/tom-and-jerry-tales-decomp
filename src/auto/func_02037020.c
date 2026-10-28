typedef struct {
    int a, b, c;
} V3;
int func_02038280(V3 *, int, V3 *, int, void *);
int func_02038b64(void *, void *, int, int, int);
void VEC_Add(int, void *, V3 *);
short func_02037020(void *arg0, void *arg1, int arg2, int arg3, int arg4) {
    V3 sp10;
    V3 sp4;
    VEC_Add(*(int *) ((char *) arg0 + 4), (char *) arg0 + 0x14, &sp10);
    VEC_Add(*(int *) ((char *) arg1 + 4), (char *) arg1 + 0x14, &sp4);
    if (func_02038280(&sp10, *(int *) ((char *) arg0 + 0x20), &sp4, *(int *) arg1, (char *) arg1 + 0x24) >= 0) {
        return 0;
    }
    return func_02038b64(arg0, arg1, arg2, arg3, arg4);
}
