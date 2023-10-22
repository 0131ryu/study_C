#include <stdio.h>

void test2(int *p) // main의 x의 주소로 초기화 됨
{
    *p = 20; // p가 가리키는 main의 x를 변경한다
}

int main(void)
{
    int x = 10;
    test2(&x);             // x의 주소를 전달한다
    printf("x = %d\n", x); // x가 변경된다

    return 0;
}