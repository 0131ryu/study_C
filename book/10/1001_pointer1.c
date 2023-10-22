#include <stdio.h>

int main()
{
    int num = 5, copy;
    int *p_num; // 정수의 크기를 가진 포인터 *p_num 선언

    copy = num; // num 값을 복사해서 copy에게 줌
    p_num = &num;
    printf("num = %d, &num = %p\n", num, &num);
    printf("p_num = %p, reference value = %d\n", p_num, *p_num);

    return 0;
}