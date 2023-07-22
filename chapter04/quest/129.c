#include <stdio.h>

int main(void)
{
    int nInput, nTotal = 0;

    scanf("%d", &nInput); // 1입력
    nTotal += nInput;
    scanf("%d", &nInput); // 2입력
    nTotal += nInput;
    scanf("%d", &nInput); // 3입력
    nTotal += nInput;

    printf("Total : %d\n", nTotal);
    return 0;
}