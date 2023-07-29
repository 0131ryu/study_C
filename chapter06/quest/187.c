#include <stdio.h>

int main(void)
{
    int nAge = 0;
    int nCost = 1000;

    scanf("%d", &nAge);

    if (nAge < 20)
    {
        nCost = nCost * 75 / 100;
    }
    printf("Result Cost : %d.\n", nCost);
    return 0;
}