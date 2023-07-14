#include <stdio.h>

int main(void)
{
    // 문자열을 저장하기 위한 배열 선언 및 정의
    char szBuffer[32] = {0};

    // 문자열 배열에 저장 후 출력
    scanf("%s", szBuffer);
    printf("%s\n", szBuffer);
    return 0;
}

// Test string 입력 시 두 문자열 입력으로 인식
// Test만 szBuffer에 저장하고 string은 버퍼에 그대로 남겨짐
//%s 형식으로만 공백문자를 포함한 문자열을 입력 받을 수 없음