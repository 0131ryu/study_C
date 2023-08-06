#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};

    int *pArr = arr;
    printf("%d \n", *pArr); // 1

    printf("%d\n", *(++pArr)); // 2
    printf("%d\n", *(++pArr)); // 3

    printf("%d \n", *(pArr + 1)); // 4 pArr값 자체가 증가는 아님
    printf("%d \n", *(pArr + 2)); // 5

    return 0;
}