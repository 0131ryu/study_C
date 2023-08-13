#include <stdio.h>

int *TestFunc(void)
{
    int nData = 10;
    // 함수가 반환하면 소명할 자동변수의 주소 반환
    return &nData; // 정상적으로 작동 x
}

int main(int argc, char *argv[])
{
    int *pnResult = NULL;
    pnResult = TestFunc();

    // 포인터가 가리키는 대상 메모리는 유효하지 않은 메모리이다.
    printf("%d\n", *pnResult);
    // printf("%d\n", *TestFunc());
    return 0;
}