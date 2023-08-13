#include <stdio.h>
#include <stdlib.h>

char *GetName(void)
{
    char *pszName = NULL;

    // 메모리 동적 할당
    pszName = (char *)calloc(32, sizeof(char));
    printf("Write your name : ");

    // 동적 할당한 메모리에 사용자가 입력한 문자열 저장함
    gets_s(pszName, sizeof(char) * 32);
    return pszName;
}

int main(int argc, char *argv[])
{
    char *pszName = NULL;
    pszName = GetName();
    printf("Your name is %d.\n", pszName);

    // 호출자 함수가 메모리를 해제해야 함
    free(pszName);
    return 0;
}