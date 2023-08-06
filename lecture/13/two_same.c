#include <stdio.h>

int main(void)
{
    int arr[2] = {1, 2};
    int *pArr = arr;

    printf("%d, %d \n", arr[0], *(arr + 1)); // 1, 2
    printf("%d, %d \n", *(arr + 0), arr[1]); // 1, 2
    // 배열 이름에는 주소값 + 자료형이 있기 때문에 *(arr+1)이 가능

    printf("%d, %d \n", pArr[0], *(pArr + 1)); // 1, 2
}