#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x; // p는 x의 주소로 초기화 됨

    printf("x = %d\n", x);
    printf("&x = %p\n", &x); //&x는 주소 값이므로 %p로 출력

    printf("p = %p\n", p);
    printf("*p = %d\n", *p); //*p는 int형 변수, %d로 출력
    printf("&p = %p\n", &p); // 포인터도 변수이므로 주소가 있다.

    *p = 20;                 // x = 20으로 수행
    printf("*p = %d\n", *p); // printf("*p = %d\n", x);로 수행

    //&x와 &p는 다른 주소값을 가짐, 두 개는 다른 변수이기 때문
    // 포인터 변수를 선언할 때, 메모리 주소를 할당함
    // p가 x로부터 주메모리 주소를 할당 받아도 독자적인 메모리 주소가 존재함

    return 0;
}