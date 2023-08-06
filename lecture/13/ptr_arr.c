#include <stdio.h>

int main(void)
{
    int a = 10, b = 20, c = 30;
    int *arr[3] = {&a, &b, &c};

    printf("%d\n", *arr[0]); // 10
    printf("%d\n", *arr[1]); // 20
    printf("%d\n", *arr[2]); // 30

    return 0;
}