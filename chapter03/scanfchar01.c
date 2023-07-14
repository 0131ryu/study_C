#include <stdio.h>

int main(void)
{
    char ch = 0;
    // 문자를 입력받으려면 %c 사용
    scanf("%c", &ch);
    // scanf_s("%c", &ch, sizeof(ch));
    printf("The result is %c\n", ch);
    return 0;
}