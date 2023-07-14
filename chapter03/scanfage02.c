#include <stdio.h>

int main(void)
{
    char szName[32] = {0};
    int nAge = 0;

    printf("Write Your age : ");
    // scanf_s("%d", &nAge);
    scanf("%d", &nAge);

    printf("Write Your name : ");
    // 버퍼 안에 남아있는 것들 모두 비운 후 이름 입력 받음
    // 개행문자 \n 제거
    fflush(stdin);
    // gets_s(szName, sizeof(szName));
    gets(szName);

    printf("%d, %s\n", nAge, szName);
    return 0;
}