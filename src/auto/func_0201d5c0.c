extern int data_0206e6d4[];
unsigned char func_0201d5c0(unsigned int arg0) {
    switch (arg0) {
        case 1:
            return (unsigned char) ((unsigned int) (data_0206e6d4[0x15] << 0x12) >> 0x1F);
        case 2:
            return (unsigned char) ((unsigned int) (data_0206e6d4[0x15] << 0x11) >> 0x1F);
        case 3:
            return (unsigned char) ((unsigned int) (data_0206e6d4[0x15] << 0x10) >> 0x1F);
        case 4:
            return (unsigned char) ((unsigned int) (data_0206e6d4[0x15] << 0xF) >> 0x1F);
        case 0:
            return 1;
        default:
            return 0;
    }
}
