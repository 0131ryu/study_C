#include <stdio.h>

int main(void)
{
    int a = 2005;
    int *pA = &a;

    printf("pA : %d\n", pA);
    printf("&a : %d\n", &a);

    (*pA)++; // a++;와 같음

    printf("a : %d\n", a); // 2006
    printf("*pA : %d\n", pA);
    return 0;
}