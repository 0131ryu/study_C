#include <stdio.h>

// 먼저 알림(선언)
int Add(int, int);

int main(void)
{
    printf("%d\n", Add(3, 4));
    return 0;
}

int Add(int x, int y)
{
    return x + y;
}