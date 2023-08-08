#include <stdio.h>

int g_aList[5] = {0};

void InitList(void)
{
    int i = 0;
    for (i = 0; i < 5; ++i)
    {
        printf("Write int value : ");
        scanf("%d", &g_aList[i]);
    }
}

void SortList(void)
{
    int i = 0, j = 0, nTmp = 0;
    for (i = 0; i < 4; ++i)
        for (j = i + 1; j < 5; ++j)
            if (g_aList[j] < g_aList[i])
            {
                nTmp = g_aList[j];
                g_aList[j] = g_aList[i];
                g_aList[i] = nTmp;
            }
}

void PrintList(void)
{
    int i = 0;
    for (i = 0; i < 5; ++i)
        printf("%d\t", g_aList[i]);
    putchar('\n');
}

int main(void)
{
    InitList();
    SortList();
    PrintList();
    return 0;
}