#include <stdio.h>

int main(void)
{
    int a[3][2] = {1, 2, 3, 4, 5, 6};

    printf("a : %d\n", a);
    printf("a+1 : %d\n", sizeof(a + 1)); // 4 (요소 크기만 반환)
    printf("a+2 : %d\n", a + 2);

    printf("a : %d\n", *(a + 0));
    printf("a+1 : %d\n", sizeof(*(a + 1))); // 8 (포함하는 범위)
    printf("a+2 : %d\n", *(a + 2));
    return 0;
}