#include <stdio.h>

int main()
{
    char str[5] = "ABCD", *p;

    printf("str addr = %p, str[0] addr = %d\n", str, &str[0]); // 0061FF17, 6422295

    p = str;
    printf("p = %c, str = %c\n", *p, *str);     // A, A
    printf("p = %c, str = %c\n", p[1], str[1]); // B, B =>  p를 배열처럼 사용
    return 0;
}