#include <stdio.h>

int nInput = 100;

void TestFunc(void)
{
    printf("TestFunc() : %d\n", nInput);
}

int main(void)
{
    int nInput = 0;
    printf("%d\n", nInput);
    {
        // 전역변수 및 앞서 선언한 nInput과도 다른 nInput 변수 선언 및 정의
        int nInput = 20;
        printf("%d\n", nInput);
    }
    TestFunc();
    return 0;
}