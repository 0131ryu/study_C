#include <stdio.h>

int main(void)
{
    int a[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    printf("%d, %d\n", a[1][0], (*(a + 1))[0]); // 서로 같음
    printf("%d, %d\n", a[1][2], *(a[1] + 2));
    printf("%d, %d\n", a[2][1], *(*(a + 2) + 1));
    return 0;
}