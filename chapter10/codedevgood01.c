#include <stdio.h>

// 배열 실인수는 '포인터' 매개변수를 받는다
void InitList(int *pList, int nSize)
{
    int i = 0;
    for (i = 0; i < nSize; ++i)
    {
        printf("Write int value : ");
        scanf("%d", &pList[i]);
    }
}

void SortList(int *pList, int nSize)
{
    int i = 0, j = 0, nTmp = 0;

    for (i = 0; i < nSize - 1; ++i)
        for (j = i + 1; j < nSize; ++j)
            if (pList[j] < pList[i])
            {
                nTmp = pList[j];
                pList[j] = pList[i];
                pList[i] = nTmp;
            }
}

void PrintList(int *pList, int nSize)
{
    int i = 0;
    for (i = 0; i < nSize; ++i)
        printf("%d\t", pList[i]);
    putchar('\n');
}

int main(void)
{
    // 자료구조를 지역변수로 선언
    // 다른 함수에서는 직접 접근 불가
    int aList[5] = {0};

    InitList(aList, 5);
    SortList(aList, 5);
    PrintList(aList, 5);
    return 0;
}