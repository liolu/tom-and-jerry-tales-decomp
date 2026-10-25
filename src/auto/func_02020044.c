void func_0203b96c(int);
void func_0203c1e8(unsigned char, int, unsigned char, unsigned char);
extern unsigned char data_02063fd8[], data_02063fe0[], data_02063fe8[], data_02063ff0[], data_02063ff8[], data_02064000[];
extern signed char data_020876d0[];
void func_02020044(void) {
    func_0203b96c(1);
    func_0203c1e8(data_02063fe8[data_020876d0[1]], 0x19, data_02063ff0[data_020876d0[1]], data_02063ff8[data_020876d0[1]]);
    func_0203c1e8(data_02063fd8[data_020876d0[0]], 0x1A, data_02063fe0[data_020876d0[0]], 0x7F);
    if (data_020876d0[2] < 0) {
        return;
    }
    func_0203c1e8(data_02064000[data_020876d0[2]], 0x1B, 0x2B, 0x73);
}
