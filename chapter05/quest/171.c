#include <stdio.h>

int main(void)
{
    int nMax = -9999, nInput = 0;
    nMax = nInput;

    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    scanf("%d", &nInput);
    nMax = nInput > nMax ? nInput : nMax;

    printf("MAX : %d\n", nMax);
    return 0;
}