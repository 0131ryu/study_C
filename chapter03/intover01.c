#include <stdio.h>

int main(void)
{
    printf("%d\n", 10);  // 10
    printf("%u\n", 10);  // 10(부호 없이 출력)
    printf("%d\n", 10U); // 10
    printf("%u\n", 10U); // 10

    printf("%d\n", 2147483647); // 2147483647
    printf("%d\n", 2147483648); //-2147483648 (범위 넘어선 정수 출력)
    printf("%u\n", 2147483649); // 2147483649

    printf("%d\n", -1); //-1
    printf("%u\n", -1); //-1과 같지만 전혀 다른 값 출력 : 4294967295
    return 0;
}