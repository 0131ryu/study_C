#include <stdio.h>

int main(void)
{
    int aList[5] = {30, 40, 10, 50, 20};
    int i = 0, j = 0, nTmp = 0;

    // 코드
    for (i = 0; i < 4; ++i)
        for (j = i + 1; j < 5; ++j)
            if (aList[j] < aList[i])
            {
                nTmp = aList[i];
                aList[i] = aList[j];
                aList[j] = nTmp;
            }

    for (i = 0; i < 5; ++i)
        printf("%d\t", aList[i]);
    putchar('\n');
    return 0;
}