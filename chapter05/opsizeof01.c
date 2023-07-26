#include <stdio.h>

// sizeof -> 피연산자의 자료형에 대한 연산
int main(void)
{
    int nData = 10;

    printf("%d, %d, %d\n", sizeof(5), sizeof(nData), sizeof(int)); // 4 4 4
    printf("%d, %d\n", sizeof('A'), sizeof(char));                 // 4, 1
    printf("%d, %d\n", sizeof(123.45F), sizeof(123.45));           // 4, 8

    // 연산식의 결곽밧의 자료형 크기를 측정한다.
    printf("%d, %d\n", sizeof(nData + 10), sizeof(++nData)); // 4, 4
    printf("%d\n", nData);                                   // 10
    return 0;
}