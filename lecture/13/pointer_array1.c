#include <stdio.h>

int main(void)
{
    int a[5] = {0, 1, 2, 3, 4};

    printf("%d %d \n", a[0], a[1]);
    printf("%d case, %d case \n", &a[0], &a[1]);
    printf("array name : %d \n", a); // 배열의 이름

    return 0;
}