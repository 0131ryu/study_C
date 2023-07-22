#include <stdio.h>

int main(void)
{
    int nData = 0x11223344;

    printf("%08X\n", nData & 0x00FFFF00); // 00223300
    printf("%08X\n", nData & 0x2211FFFF); // 00003344
    printf("%08X\n", nData ^ 0x2211FFFF); // 3333CCBB
    printf("%08X\n", ~nData);             // EEDDCCBB
    printf("%08X\n", nData >> 8);         // 00112233
    printf("%08X\n", nData << 16);        // 33440000
    return 0;
}