#include <stdio.h>

int main(void)
{
    int aList[5][5] = {0};
    int i = 0, j = 0, nCounter = 0;

    // 코드
    for (i = 0; i < 5; ++i)
    {
        if (i % 2 == 0)
            for (j = 0; j < 5; ++j)
                aList[i][j] = ++nCounter;
        else
            for (j = 4; j >= 0; --j)
                aList[i][j] = ++nCounter;
    }

    for (i = 0; i < 5; ++i)
    {
        for (j = 0; j < 5; ++j)
            printf("%d\t", aList[i]);
        putchar('\n');
    }
    return 0;
}