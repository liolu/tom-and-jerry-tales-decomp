/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_02013b74 from projets/saga-3-jikuu-no-hasha-shadow-or-light/src/donor/func_02013b74.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef void (*TableFunc)(void *arg);
extern TableFunc data_02064200[];
void func_0203cf2c(int index, void *arg) {
    data_02064200[index](arg);
}
