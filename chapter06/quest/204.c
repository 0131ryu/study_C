#include <stdio.h>

int main(void)
{
    int nCost = 1000;
    int nAge = 0;
    double nRate = 0.0;

    scanf("%d", &nAge);

    if (nAge >= 65)
    {
        nRate = 0.0;
    }
    else if (nAge >= 20)
    {
        nRate = 1.0;
    }
    else if (nAge >= 14)
    {
        nRate = 0.75;
    }
    else if (nAge >= 4)
    {
        nRate = 0.5;
    }
    else if (nAge >= 0)
    {
        nRate = 0.0;
    }

    printf("Result : %d", (int)(nCost * nRate));
    return 0;
}