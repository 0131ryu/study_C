#include <stdio.h>

int main(void)
{
    int x = 10; // 반드시 초기화 필요

    x = x + 1;
    printf("%d\n", x); // 11

    x += 1;
    printf("%d\n", x); // 12

    ++x;               // 우선순위가 최하위
    printf("%d\n", x); // 13
    return 0;
}