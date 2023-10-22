#include <stdio.h>

void test1(int x)
{           // 매개변수 x는 main의 x로 초기화된 지역 변수
    x = 20; // x는 test1의 지역 변수이므로 test1이 리턴 시 소멸됨
}

void test2(int *p)
{            // p는 main의 x의 주소로 초기화 된 포인터
    *p = 20; // p가 가리키는 변수 즉, main의 x에 20을 대입
}

int main(void)
{
    int x = 10;
    test1(x);                          // main의 x를 함수의 매개변수 x로 복사해서 전달
    printf("test1 value x = %d\n", x); // x의 값 변경 안 됨

    test2(&x);                         // test2 함수 호출 때 x의 주소를 넘겨줌
    printf("test2 value x = %d\n", x); // x의 값 변경 됨

    return 0;
}