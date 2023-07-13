#include <stdio.h>

int main(void)
{
    char ch = 0;
    ch = getchar(); // getchar 함수가 반환할 값을 ch 변수에 저장
    // 피호출자 함수의 매개변수를 변수로 정의
    putchar(ch); // 변수 ch에 담긴 정보를 화면에 출력
    // 피호출자 함수의 매개변수를 상수로 정의
    putchar('Z'); // 대문자 Z를 화면에 출력함
    return 0;
}