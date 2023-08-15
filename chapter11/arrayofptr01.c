#include <stdio.h>

int main(void)
{
    // 배열을 각각의 문자열로 초기화
    char *astrList[3] = {"Hello", "World", "String"};

    printf("%s\n", astrList[0]); // Hello
    printf("%s\n", astrList[1]); // World
    printf("%s\n", astrList[2]); // String

    printf("%s\n", astrList[0] + 1); // ello
    printf("%s\n", astrList[1] + 2); // rld
    printf("%s\n", astrList[2] + 3); // ing

    // char*의 배열은 논리적으로 char의 2차원 배열과 같다
    printf("%c\n", astrList[0][3]); // l
    printf("%c\n", astrList[1][3]); // l
    printf("%c\n", astrList[2][3]); // i
    return 0;
}