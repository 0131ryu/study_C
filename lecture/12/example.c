#include <stdio.h>

int main(void)
{
    int b = 2023;
    int *pB = &b;

    printf("pB : %d\n", pB);
    printf("&b : %d\n", &b);

    (*pB)--;

    printf("b : %d\n", b); // 2022
    printf("*pB : %d\n", pB);
    return 0;
}