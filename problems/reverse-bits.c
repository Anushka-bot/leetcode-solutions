uint32_t reverseBits(uint32_t n) {
    uint32_t rev = 0, bit;
    for(int i = 0; i < 32; i++){
        bit = (n >> 1) & 1;
        rev = rev | (bit << (31 - i));
    }
    return rev;
}

uint32_t reverseBits(uint32_t n) {
    uint32_t rev = 0;
    for(int i = 0; i < 32; i++)
        if((n>>i) & 1)
            rev = rev | ((uint32_t)1<<(31-i));
    
    return rev;
}