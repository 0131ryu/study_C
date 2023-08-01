#include <stdio.h>

int main(void)
{
    char ch = 0;
    int nIndex = 0;

    while ((ch = getchar()) != '\n')
    {
        printf("%02d\t%c\n", nIndex, ch);
        ++nIndex;
        // 스코프가 닫히면 그 내부에 선언 및 정의한 변수는 사라짐
    }

    return 0;
}