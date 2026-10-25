void func_0203e4dc(unsigned *dst, unsigned x, unsigned y, unsigned c) {
    unsigned short t   = (unsigned short) (x & 0xF8) + ((y & 0xF8) << 5);
    unsigned short idx = t + (y & 7);
    unsigned char sh   = (x << 0x1D) >> 0x1B;
    unsigned *p        = &dst[idx];
    *p                 = (*p & ~(0xF << sh)) | ((c & 0xF) << sh);
}
