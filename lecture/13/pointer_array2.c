#include <stdio.h>

int main(void)
{
    int arr[3] = {0, 1, 2};
    int val = 10;
    int *ptr;

    ptr = arr; // arr 상수, ptr 변수

    printf("%d, %d, %d \n", ptr[0], ptr[1], ptr[2]); // 0 1 2
    printf("%d, %d, %d \n", arr[0], arr[1], arr[2]); // 0 1 2

    ptr = &val;
    printf("%d \n", *ptr); // 10;
    return 0;
}