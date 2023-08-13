#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void Swap(int *pLeft, int *pRight)
{
    int nTmp = *pLeft;
    *pLeft = *pRight;
    *pRight = nTmp;
}

int main(void)
{
    int a = 10, b = 20;
    Swap(&a, &b);

    printf("%d, %d\n", a, b); // 20 10
    return 0;
}