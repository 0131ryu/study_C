#include <stdio.h>

int TestFunc(void)
{
    static int nData = 10;
    ++nData;
    return nData;
}

int main(int argc, char *argv[])
{
    printf("%d\n", TestFunc()); // 11
    printf("%d\n", TestFunc()); // 12
    printf("%d\n", TestFunc()); // 13
    return 0;
}