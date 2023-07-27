#include <stdio.h>

int main(void)
{
    int nHeight = 0;

    printf("Write your height : ");
    scanf("%d", &nHeight);

    printf("Result : %s\n", nHeight >= 150 ? "Pass" : "Fail"); // 문자 출력 시 %s
    return 0;
}