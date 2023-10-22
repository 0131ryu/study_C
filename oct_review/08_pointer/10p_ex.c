#include <stdio.h>

int main(void)
{
    // int *p1 = 0x12345678; //컴파일 에러
    int *p2 = (int *)0x123145678; // 실행 에러 발생할 수 있음

    int a = 10;
    int *p3 = &a; // a의 주소를 구해서 p3을 초기화 함

    int *p4 = 0;    // 어떤 주소로 초기화할지 알 수 없으면 0으로 초기화
    int *p5 = NULL; // 0대신 NULL을 사용해도 됨

    printf("p2 = %p\n", p2);
    printf("p3 = %p\n", p3);
    printf("p4 = %p\n", p4);
    printf("p5 = %p\n", p5); // 주소 출력 시 %p 형식 사용

    return 0;
}