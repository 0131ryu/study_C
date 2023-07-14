// 답안은 103

#include <stdio.h>

int main(void)
{
    int nAge = 0;
    char nName[32] = {0}; // 문자열을 저장하기 위한 배열

    printf("Write Your age. : ");
    scanf("%d%*c", &nAge);
    //%*c = 입력 버퍼에서 개행문자 제거
    // 다음 scanf 호출에서 개행문자가 버퍼에 남아있지 않음

    printf("Write Your name. : ");
    gets(nName);

    printf("Your age is %d and Your name is %s", nAge, nName);
    return 0;
}