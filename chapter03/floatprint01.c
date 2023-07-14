#include <stdio.h>

int main(void)
{
    // 실수
    // sizeof = 피연산자의 자료형 판별, 바이트 단어 크기 계산
    printf("%d\n", sizeof(12.456F)); // 4
    printf("%d\n", sizeof(12.456));  // 8

    // float - 4바이트
    printf("%f\n", 123.456F); // 123.456001

    // double - 8바이트
    printf("%f\n", 123.456);  // 123.456000
    printf("%lf\n", 123.456); // 123.456000
    return 0;
}