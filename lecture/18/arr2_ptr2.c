#include <stdio.h>

int main(void)
{
    int arr1[3][2]; // 포인터 타입은 다양함
    int(*ptr)[4] = arr1;

    printf("arr1 : %d\n", arr1);
    printf("arr1 + 1 : %d\n", arr1 + 1);
    printf("arr1 + 2 : %d\n", arr1 + 2);
    return 0;