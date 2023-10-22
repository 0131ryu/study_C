#include <stdio.h>

void swap(int *x, int *y)
{
    int temp = *x; // x가 가리키는 변수의 값을 temp에 저장
    *x = *y;       // y가 가리키는 변수의 값을 x가 가리키는 변수에 저장
    *y = temp;     // temp를 y가 가리키는 변수에 저장
}

int main(void)
{
    int a = 3, b = 7;
    printf("a = %d, b = %d\n", a, b);

    swap(&a, &b); // int *x = a; int *y = b;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}