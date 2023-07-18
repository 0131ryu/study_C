#include <stdio.h>

int main(void)
{
    int x = 10, y = 20, nTmp = 0;
    printf("Before : %d, %d\n", x, y);

    // 두 변수 x와 y에 저장된 값을 서로 교환한다.
    nTmp = x;
    x = y;
    y = nTmp;

    printf("After: %d, %d\n", x, y);
    return 0;
}