#include <stdio.h>

int main(void)
{
    int nInput;

// 레이블 이름 설정, goto문으로 이동할 수 있는 지점
INPUT:
    printf("Input number : ");
    scanf("%d", &nInput);

    if (nInput < 0 || nInput > 10)
    {
        goto INPUT;
    }

    puts("END");
    return 0;
}