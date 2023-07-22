#include <stdio.h>

int main(void)
{
    int x = 0, nResult = 0;

    ++x;
    printf("%d\n", x);

    x++;
    printf("%d\n", x);

    // x값 1 증가 후 단순 대입(전위식 표기)
    nResult = ++x;
    printf("%d, %d\n", nResult, x);

    // x값을 nResult에 대입 후 x를 1 감소(후위식 표기)
    nResult = x--;
    printf("%d, %d\n", nResult, x);
    return 0;
}