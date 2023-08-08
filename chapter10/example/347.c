#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int GetData(void)
{
    int nInput = 0;
    printf("Write int value : ");
    scanf("%d", &nInput);

    return nInput;
}

int GetMax(int a, int b, int c)
{
    int nMax = a;
    if (b > nMax)
        nMax = b;
    if (c > nMax)
        nMax = c;

    return nMax;
}

void PrintData(int a, int b, int c, int nMax)
{
    printf("%d, %d, %d : The most biggest value is %d.\n",
           a, b, c, nMax);
}

int main(void)
{
    int aList[3] = {0};
    int nMax = -9999, i = 0;

    // 입력
    // for (i = 0; i < 3; ++i)
    // {
    //     printf("Write int value : ");
    //     scanf("%d", &aList[i]);
    // }
    for (i = 0; i < 3; ++i)
        aList[i] = GetData();

    // 최댓값 계산
    // nMax = aList[0];
    // for (i = 1; i < 3; ++i)
    // {
    //     if (aList[i] > nMax)
    //     {
    //         nMax = aList[i];
    //     }
    // }
    nMax = GetMax(aList[0], aList[1], aList[2]);

    // 출력
    // printf("%d, %d, %d : The most biggest value is %d.\n",
    //        aList[0], aList[1], aList[2], nMax);
    PrintData(aList[0], aList[1], aList[2], nMax);
    return 0;
}