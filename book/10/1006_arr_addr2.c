#include <stdio.h>

int main()
{
    char str[5] = "ABCD", *p;

    p = str;                                    // str이 포인터임으로 &없이 대입
    printf("p = %c, str = %c\n", *p, *str);     // A, A
    printf("p = %c, str = %c\n", p[1], str[1]); // B, B

    p = &str[1];
    printf("p = %s, p[1] = %c\n", p, p[1]); // BCD, C

    return 0;
}