#include <stdio.h>

int main(void)
{
    // char변수 32개가 한 덩어리로 묶인 배열 선언 및 정의
    char szName[32] = {0};

    printf("What is your name? : ");
    gets(szName); // 문자배열에 입력한 문자들 저장

    printf("Your name is ");
    puts(szName);
    puts(" That's your name!");
    return 0;
}