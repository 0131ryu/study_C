#include <stdio.h>

int main(void)
{
    printf("%08X\n", 0xFFFFFFFF & 0x00080000); // 00080000
    printf("%08X\n", 0xAAAABBBB & 0x00080000); // 00080000
    printf("%08X\n", 0xAABBCCDD & 0x00080000); // 00080000

    printf("%08X\n", 0xFFFFFFFF & 0x00080000); // 00080000
    printf("%08X\n", 0x11223344 & 0x00080000); // 00000000
    printf("%08X\n", 0x00000000 & 0x000F0000); // 00000000
    return 0;
}