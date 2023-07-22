#include <stdio.h>

int main(void)
{
    int nData = 0x11223344;

    printf("%08X\n", nData & 0xFFFF0000); // 11220000
    printf("%08X\n", nData & 0x00FFFF00); // 00223300
    printf("%08X\n", nData & 0x0000FFFF); // 00003344
    printf("%08X\n", nData & 0xFF0000FF); // 11000044
    return 0;
}