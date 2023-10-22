#include <stdio.h>

int main(void)
{
    int *pi;
    double *pd;

    printf("sizeof(pi) = %d\n", sizeof(pi)); // 4바이트(32비트 플랫폼 기준)
    printf("sizeof(pd) = %d\n", sizeof(pd)); // 4바이트

    return 0;
}