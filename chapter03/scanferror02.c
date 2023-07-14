#include <stdio.h>

int main(void)
{
    int nInput = 0;
    // scanf함수에 \n을 넣는 것은 잘못됨
    // 입력 완료를 의미하는 개행과 형식 문자가 요구하는 개행문자 구별 불가

    scanf("%d%*c", &nInput);

    printf("%d\n", &nInput);
    return 0;
}