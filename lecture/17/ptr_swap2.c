#include <stdio.h>

void pswap(int **p1, int **p2)
{
    int *temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main(void)
{
    int A = 10, B = 20;
    int *pA, *pB;
    pA = &A, pB = &B;

    pswap(&pA, &pB); // 주소값 넘겨주기

    // 함수 호출 후
    printf("pA parameter : %d\n", *pA);
    printf("pB parameter : %d\n", *pB);
    return 0;
}