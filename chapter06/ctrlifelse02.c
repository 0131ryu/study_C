#include <stdio.h>

int main(void)
{
    int nInput = 0, nSelect = 0;
    scanf("%d", &nInput);

    // 1차분류
    if (nInput <= 10)
    {
        // 2차 분류
        if (nInput < 0)
        {
            nSelect = 0;
        }
        else
        {
            nSelect = 10;
        }
    }
    else
    {
        nSelect = 20;
    }
    printf("%d\n", nSelect);
    return 0;
}